#include <stdio.h>

#include <stdlib.h>
 
// Definição da estrutura do nó da árvore binária

struct Node {

    int key;

    struct Node* left;

    struct Node* right;

};
 
// Função para criar um novo nó

struct Node* createNode(int key) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->key = key;

    newNode->left = NULL;

    newNode->right = NULL;

    return newNode;

}
 
// Função para inserir um nó na árvore

struct Node* insert(struct Node* root, int key) {

    if (root == NULL) {

        return createNode(key);

    }

    if (key < root->key) {

        root->left = insert(root->left, key);

    } else {

        root->right = insert(root->right, key);

    }

    return root;

}
 
// Função para caminhar em ordem (inorder)

void inorderTraversal(struct Node* root) {

    if (root != NULL) {

        inorderTraversal(root->left);  // Visita o filho esquerdo

        printf("%d ", root->key);      // Visita a raiz

        inorderTraversal(root->right); // Visita o filho direito

    }

}
 
// Função principal

int main() {

    struct Node* root = NULL;

    // Inserindo valores na árvore

    root = insert(root, 40);

    insert(root, 20);

    insert(root, 60);

    insert(root, 50);

    insert(root, 70);

    insert(root, 10);

    insert(root, 30);
 
    // Chamando a função de caminhamento em ordem

    printf("Caminhamento em ordem: ");

    inorderTraversal(root);

    printf("\n");
 
    return 0;

}
 