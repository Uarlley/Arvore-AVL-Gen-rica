//Uálaci dos Anjos Júnior
//Uarlley Nascimento Amorim
//disciplina de estrutura de dados 2

#ifndef AVL_H
#define AVL_H
//--------------------------------------------------------------------------------------------------------
//Inclusão das bibliotecas padrões do C
//--------------------------------------------------------------------------------------------------------
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//--------------------------------------------------------------------------------------------------------
//Definição da estrutura AVLNode
//--------------------------------------------------------------------------------------------------------
typedef struct tnode{
    struct tnode *left;
    struct tnode *right;
    int height;
    void* info;
}AVLNode;

//--------------------------------------------------------------------------------------------------------
//Função que retorna o balanço de um nó
//--------------------------------------------------------------------------------------------------------
int max(int a,int b);
//--------------------------------------------------------------------------------------------------------
//Função que retorna o balanço de um nó
//--------------------------------------------------------------------------------------------------------
int getBalance(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que cria um no para uma AVL
//--------------------------------------------------------------------------------------------------------
AVLNode* createAVLNode(void* info);
//--------------------------------------------------------------------------------------------------------
//Função que retorna um ponteiro para o elemento a direita de um AVLNode
//--------------------------------------------------------------------------------------------------------
AVLNode* rightAVL(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que retorna um ponteiro para o elemento a esquerda de um AVLNode
//--------------------------------------------------------------------------------------------------------
AVLNode* leftAVL(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que retorna um ponteiro para o elemento de informação de um AVLNode
//--------------------------------------------------------------------------------------------------------
void* rootAVL(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que retorna a altura de um nó
//--------------------------------------------------------------------------------------------------------
int height(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que calcula e retorna a altura de uma árvore
int heightAVL(AVLNode *root);
//--------------------------------------------------------------------------------------------------------
//Função que imprime os elementos de um AVL em ordem
//--------------------------------------------------------------------------------------------------------
void printAVL(AVLNode* root,void (*imprime)(void* info));
//--------------------------------------------------------------------------------------------------------
//Função que busca um elemento numa AVL
//--------------------------------------------------------------------------------------------------------
AVLNode* searchAVL(AVLNode* root,void* key, int (*compare)(void* a, void*b));
//--------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------
//Função que busca o maior elemento de uma AVL
//--------------------------------------------------------------------------------------------------------
AVLNode* findLargerstElement(AVLNode* root);
//--------------------------------------------------------------------------------------------------------
//Função que destrói uma AVL
//--------------------------------------------------------------------------------------------------------
void destroyAVL(AVLNode* root, void (*freeInfo)(void* info));
//--------------------------------------------------------------------------------------------------------
//Função que realiza uma rotação LL
//--------------------------------------------------------------------------------------------------------
void rotationLL(AVLNode **root);
//--------------------------------------------------------------------------------------------------------
//Função que realiza uma rotação RR
//--------------------------------------------------------------------------------------------------------
void rotationRR(AVLNode **root);
//--------------------------------------------------------------------------------------------------------
//Função que realiza uma rotação LR
//--------------------------------------------------------------------------------------------------------
void rotationLR(AVLNode **root);
//--------------------------------------------------------------------------------------------------------
//Função que realiza uma rotação RL
//--------------------------------------------------------------------------------------------------------
void rotationRL(AVLNode **root);
//--------------------------------------------------------------------------------------------------------
//Função que balanceia uma AVL
//--------------------------------------------------------------------------------------------------------
void BalanceAVL(AVLNode** root);
//--------------------------------------------------------------------------------------------------------
//Função que insere um elemento em uma AVL
//--------------------------------------------------------------------------------------------------------
int insertAVL(AVLNode **root,void *key, int (*comp)(void* a, void* b));
//--------------------------------------------------------------------------------------------------------
//Função que deleta um elemento de uma AVL
//--------------------------------------------------------------------------------------------------------
int deleteAVL(AVLNode** root,void* key, int (*compare)(void* a, void* b), void (*freeInfo) (void* info), void (*copy)(void *a, void *b));

#endif
