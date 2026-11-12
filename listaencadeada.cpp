#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50

/* Nó da lista duplamente encadeada */
typedef struct Pessoa {
    char nome[TAM_NOME];
    int idade;
    struct Pessoa *anterior;
    struct Pessoa *proximo;
} Pessoa;

/* Estrutura que guarda o início, o fim e o tamanho da lista */
typedef struct {
    Pessoa *inicio;
    Pessoa *fim;
    int tamanho;
} Lista;

/* Inicializa a lista vazia */
void iniciar(Lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
    l->tamanho = 0;
}

/* Cria um novo nó */
Pessoa *criarPessoa(const char *nome, int idade) {
    Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Erro: memoria insuficiente!\n");
        exit(1);
    }
    strncpy(p->nome, nome, TAM_NOME - 1);
    p->nome[TAM_NOME - 1] = '\0';
    p->idade = idade;
    p->anterior = NULL;
    p->proximo = NULL;
    return p;
}

/* Mostra a lista do início ao fim e do fim ao início */
void mostrar(const Lista *l) {
    Pessoa *atual;

    printf("   Lista (inicio -> fim) [%d pessoa(s)]: ", l->tamanho);
    if (l->inicio == NULL) {
        printf("vazia\n");
        return;
    }
    for (atual = l->inicio; atual != NULL; atual = atual->proximo)
        printf("[%s, %d]%s", atual->nome, atual->idade,
               atual->proximo ? " <-> " : "\n");

    printf("   Lista (fim -> inicio): ");
    for (atual = l->fim; atual != NULL; atual = atual->anterior)
        printf("[%s, %d]%s", atual->nome, atual->idade,
               atual->anterior ? " <-> " : "\n");
    printf("\n");
}

/* Insere no início da lista */
void inserirInicio(Lista *l, const char *nome, int idade) {
    Pessoa *p = criarPessoa(nome, idade);

    p->proximo = l->inicio;
    if (l->inicio != NULL)
        l->inicio->anterior = p;
    else
        l->fim = p;           /* lista estava vazia */
    l->inicio = p;
    l->tamanho++;

    printf(">> Adicionado no inicio: %s (%d anos)\n", nome, idade);
    mostrar(l);
}

/* Insere no fim da lista */
void inserirFim(Lista *l, const char *nome, int idade) {
    Pessoa *p = criarPessoa(nome, idade);

    p->anterior = l->fim;
    if (l->fim != NULL)
        l->fim->proximo = p;
    else
        l->inicio = p;        /* lista estava vazia */
    l->fim = p;
    l->tamanho++;

    printf(">> Adicionado no fim: %s (%d anos)\n", nome, idade);
    mostrar(l);
}

/* Remove o primeiro nó cujo nome seja igual ao informado */
int removerPorNome(Lista *l, const char *nome) {
    Pessoa *atual = l->inicio;

    while (atual != NULL && strcmp(atual->nome, nome) != 0)
        atual = atual->proximo;

    if (atual == NULL) {
        printf(">> Remocao: \"%s\" nao encontrado(a).\n", nome);
        mostrar(l);
        return 0;
    }

    /* Ajusta os ponteiros dos vizinhos */
    if (atual->anterior != NULL)
        atual->anterior->proximo = atual->proximo;
    else
        l->inicio = atual->proximo;   /* era o primeiro */

    if (atual->proximo != NULL)
        atual->proximo->anterior = atual->anterior;
    else
        l->fim = atual->anterior;     /* era o último */
//free libera memoria, maloc aloca memoria
    printf(">> Removido: %s (%d anos)\n", atual->nome, atual->idade);
    free(atual);
    l->tamanho--;
    mostrar(l);
    return 1;
}

/* Remove o primeiro elemento */
int removerInicio(Lista *l) {
    if (l->inicio == NULL) {
        printf(">> Remocao: a lista ja esta vazia.\n");
        mostrar(l);
        return 0;
    }
    char nome[TAM_NOME];
    strcpy(nome, l->inicio->nome);
    return removerPorNome(l, nome);
}

/* Remove o último elemento */
int removerFim(Lista *l) {
    Pessoa *p = l->fim;

    if (p == NULL) {
        printf(">> Remocao: a lista ja esta vazia.\n");
        mostrar(l);
        return 0;
    }

    l->fim = p->anterior;
    if (l->fim != NULL)
        l->fim->proximo = NULL;
    else
        l->inicio = NULL;             /* ficou vazia */

    printf(">> Removido do fim: %s (%d anos)\n", p->nome, p->idade);
    free(p);
    l->tamanho--;
    mostrar(l);
    return 1;
}

/* Libera toda a memória da lista */
void liberar(Lista *l) {
    Pessoa *atual = l->inicio;
    while (atual != NULL) {
        Pessoa *prox = atual->proximo;
        free(atual);
        atual = prox;
    }
    iniciar(l);
}

int main(void) {
    Lista lista;
    iniciar(&lista);

    printf("=== Lista duplamente encadeada de pessoas ===\n\n");

    inserirFim(&lista, "Ana", 25);
    inserirFim(&lista, "Bruno", 32);
    inserirInicio(&lista, "Carla", 19);
    inserirFim(&lista, "Daniel", 41);

    removerPorNome(&lista, "Bruno");   /* remove do meio */
    removerPorNome(&lista, "Zeca");    /* nome inexistente */
    removerInicio(&lista);
    removerFim(&lista);
    removerFim(&lista);
    removerFim(&lista);                /* lista já vazia */

    liberar(&lista);
    return 0;
}
