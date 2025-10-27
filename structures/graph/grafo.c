#include <stdio.h>
#include <stdlib.h>
 
#define MAX_VERTICES 10
 
// Estrutura para representar um grafo
struct Graph {
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
};
 
// Função para criar um grafo
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
 
    // Inicializa a matriz de adjacência
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
}
 
// Função para adicionar aresta
void addEdge(struct Graph* graph, int src, int dest) {
    graph->adjMatrix[src][dest] = 1; // Aresta de src para dest
    graph->adjMatrix[dest][src] = 1; // Aresta de dest para src (grafo não direcionado)
}
 
// Função para imprimir a matriz de adjacência
void printGraph(struct Graph* graph) {
    printf("Matriz de Adjacência:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}
 
int main() {
    struct Graph* graph = createGraph(5);
 
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    printGraph(graph);
 
    // Libera a memória alocada
    free(graph);
 
    return 0;
}