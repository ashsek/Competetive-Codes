#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10
struct Node {
       int data;
       struct Node *next;
};

void push_create(struct Node** head, int data) {
       struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
       new_node->data = data;
       if(*head == NULL) {
             *head = new_node;
             new_node->next = NULL;
       } else {
             new_node->next = *head;
             *head = new_node;
        } 
}

void printAdjacencyList(struct Node** head, int v) {
        struct Node* ptr = head[0];
        int i;
        for(i = 0; i < v; i++) {
                printf("\n Adjacency List %d ", i);
                while(ptr != NULL) {
                    printf("-> %d ", ptr->data);
                    ptr = ptr->next;
                }
        ptr = head[i+1];
      }
}

void printAdjacencyMatrix(int matrix[][10], int v) {
       int i, j;
       printf("\n Adjacency Matrix : \n");
       for(i = 0; i < v; i++) {
for(j = 0; j < v; j++) {
       printf("\t %d", matrix[i][j]);
}
printf("\n");}}

void createAdjacency(struct Node** head, int v, int matrix[][10]) {
       int i;
       int no_edges, edge_start, edge_end;
       struct Node* ptr = NULL;
       for(i = 0; i < MaxSize; head[i] = NULL, i++);
       printf("\n Number of edges : ");
       scanf("%d", &no_edges);
       for(i = 0; i < no_edges; i++) {
            printf("\n Between : ");
            scanf("%d, %d", &edge_start, &edge_end);
            push_create(&head[edge_start], edge_end);
            matrix[edge_start][edge_end]++;
          }
        }

int main() {
       int i, j;
       int vertex, start_vertex;
       int matrix[MaxSize][MaxSize];
       for(i = 0; i < MaxSize; i++) {
             for(j = 0; j < MaxSize; matrix[i][j] = 0, j++);
        }
       printf("\n Number of Vertex in graph : ");
       scanf("%d", &vertex);
       struct Node* head[10];
       createAdjacency(head, vertex, matrix);
       printAdjacencyList(head, vertex);
       printAdjacencyMatrix(matrix, vertex);
       return 0;
}