#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

void printAdjacencyMatrix(int matrix[][10], int m, int v) {
       int i, j;
       if(m == 4)
             printf("\n Adjacency Matrix B: \n");
       else
             printf("\n Adjacency Matrix A^%d : \n", m + 1);
       for(i = 0; i < v; i++) {
             for(j = 0; j < v; j++) {
                    printf("\t %d", matrix[i][j]);
              }
             printf("\n"); 
        } }

void createAdjacency(int v, int matrix[][10]) {
       int i;
       int no_edges, edge_start, edge_end;
       printf("\n Number of edges : ");
       scanf("%d", &no_edges);
       for(i = 0; i < no_edges; i++) {
             printf("\n Between : ");
             scanf("%d, %d", &edge_start, &edge_end);
             matrix[edge_start][edge_end]++;
} }

void matrixMultiplication(int matrix1[][10], int matrix2[][10], int
multi[][MaxSize], int v) {
int i, j, k;
       for(i = 0; i < v; i++) {
             for(j = 0; j < v; j++) {
                    multi[i][j] = 0;
                    for(k = 0; k < v; k++) {
                           multi[i][j] += matrix1[i][k] * matrix2[k][j];
} }}}


void sumM(int matrix1[][10], int sum[][10], int v) {
       int i, j;
       for(i = 0; i < v; i++)
             for(j = 0; j < v; sum[i][j] += matrix1[i][j], j++);
}


int main() {
       int i, j, k;
      int vertex;
       int matrix[4][MaxSize][MaxSize], sum[MaxSize][MaxSize];
       for(i = 0; i < MaxSize; i++) {
             for(k = 0; k < 4; k++) {
                    for(j = 0; j < MaxSize; matrix[k][i][j] = 0, j++)
                           sum[i][j] = 0; }}
       printf("\n Number of Vertex in graph : ");
       scanf("%d", &vertex);
       createAdjacency(vertex, matrix[0]);
       printAdjacencyMatrix(matrix[0], 0, vertex);
       for(i = 0; i < vertex - 1; i++) {
             matrixMultiplication(matrix[i], matrix[0], matrix[i + 1], vertex);
             printAdjacencyMatrix(matrix[i + 1], i + 1, vertex);
}
       for(int i = 0; i < vertex; i++) {
             sumM(matrix[i], sum, vertex);
       }
       printAdjacencyMatrix(sum, 4, vertex);
       return 0;
}