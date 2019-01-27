#include<stdio.h>
#include<stdlib.h>
#define MaxSize 

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
} }

void printAdjacencyList(struct Node** head, int v) {
        struct Node* ptr = head[0];
        int i;
        for(i = 0; i < v; i++) {
                printf("\n Adjacency List %d ", i);
                while(ptr != NULL) {
        printf("-> %d ", ptr->data);
        ptr = ptr->next;
}
ptr = head[i+1];}}


void createAdjacencyList(struct Node** head, int v) {
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
} }


int isStackEmpty(int top) {
       if(top == -1) {
             return 1;
       } else {
return 0;
} }

void stack_push(int* stack, int *top, int data) {
       stack[++(*top)] = data;
}


int stack_pop(int* stack, int *top) {
       (*top)--;
       return stack[(*top)+1];
}


int isAllVisited(int* arr, int v) {
        int i;
        for(i = 0; i < v; i++) {
                if(arr[i] == 0)
return 0;
}
return 1;
}

int unVisitedVertex(int* arr, int v) {
        int i;
        for(i = 0; i < v; i++) {
                if(arr[i] == 0)
return i;
}
return 0;
}


void dfs(struct Node** head, int v, int start, int* stack, int* top, int* visited)
{
int i, j = -1;
       int stack_aux[MaxSize], top_aux = -1;
       struct Node* ptr = NULL;
       stack_push(stack_aux, &top_aux, start);
       visited[start]++;
       while(isStackEmpty(top_aux) == 0) {
             stack[++(*top)] = stack_pop(stack_aux, &top_aux);
             ptr = head[stack[*top]];
             while(ptr != NULL) {
                    if(visited[ptr->data] == 0) {
                           visited[ptr->data]++;
                           stack_push(stack_aux, &top_aux, ptr->data);
                    }
                    ptr = ptr->next;
}
}
}

void topological_sort(struct Node** head, int v, int start) {
       int i;
       int stack_aux[MaxSize], top_aux = -1, stack_rev[MaxSize], top_rev = -1;
       int visited[MaxSize];

        struct Node* ptr = NULL;
        for(i = 0; i < MaxSize; visited[i] = 0, i++);
       while(isAllVisited(visited, v) == 0) {
             if(visited[start] != 0) {
                    start = unVisitedVertex(visited, v);
              }
             dfs(head, v, start, stack_aux, &top_aux, visited);
             while(isStackEmpty(top_aux) == 0) {
                    stack_push(stack_rev, &top_rev, stack_pop(stack_aux, &top_aux));
             }
          }
       printf("\n \n Topological sort is : ");
       for(i = 0; i < v; i++) {
        printf("-> %d", stack_pop(stack_rev, &top_rev));

} }


int main() {
int vertex, start_vertex;
printf("\n Number of Vertex in graph : ");
scanf("%d", &vertex);
struct Node* head[10];
createAdjacencyList(head, vertex);
printAdjacencyList(head, vertex);
printf("\n Starting Vertex : ");
scanf("%d", &start_vertex);
topological_sort(head, vertex, start_vertex);
return 0;}