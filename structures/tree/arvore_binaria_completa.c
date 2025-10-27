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
 
// Função para buscar um valor na árvore
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;  // Retorna o nó se encontrado ou NULL
    }
    if (key < root->key) {
        return search(root->left, key);  // Busca na subárvore esquerda
    } else {
        return search(root->right, key); // Busca na subárvore direita
    }
}
 
// Função para encontrar o menor nó
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;  // Vai para o filho mais à esquerda
    }
    return current;
}
 
// Função para excluir um nó da árvore
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) {
        return root;  // Se a árvore estiver vazia
    }
 
    // Encontra a posição do nó a ser excluído
    if (key < root->key) {
        root->left = deleteNode(root->left, key);  // Busca na subárvore esquerda
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key); // Busca na subárvore direita
    } else {
        // Nó encontrado
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);  // Libera a memória
            return temp; // Retorna o filho direito
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);  // Libera a memória
            return temp; // Retorna o filho esquerdo
        }
 
        // Nó com dois filhos: encontra o sucessor
        struct Node* temp = minValueNode(root->right);
        root->key = temp->key;  // Copia o valor do sucessor
        root->right = deleteNode(root->right, temp->key); // Exclui o sucessor
    }
    return root; // Retorna a raiz da árvore
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
 
    // Exemplo de busca
    int searchKey = 30;
    struct Node* searchResult = search(root, searchKey);
    if (searchResult != NULL) {
        printf("Valor %d encontrado na árvore.\n", searchKey);
    } else {
        printf("Valor %d não encontrado na árvore.\n", searchKey);
    }
 
    // Excluindo um nó
    int deleteKey = 20;
    root = deleteNode(root, deleteKey);
    printf("Após excluir %d, o caminhamento em ordem é: ", deleteKey);
    inorderTraversal(root);
    printf("\n");
 
    return 0;
}