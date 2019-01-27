#include<stdio.h>
#define MAX_SIZE 10

int findParent(int* p_arr, int* path, int ele) {
       if(path[ele] == '.') {
             return ele;
        }
       return findParent(p_arr, path, path[ele]);
}

void unionSet(int* p_arr, int* path, int no_vert, int no_edge) {
       int i;
       int temp_from, temp_to;
       int parent_from, parent_to;
       for(i = 0; i < no_edge; i++) {
             printf("\n Edge from to : ");
             scanf("%d,%d", &temp_from, &temp_to);
             parent_from = findParent(p_arr, path, temp_from);
             parent_to = findParent(p_arr, path, temp_to);
             printf("\t \t %d %d", parent_from, parent_to);
             if(parent_from != parent_to) {
                    p_arr[parent_from] += p_arr[parent_to];
                    p_arr[temp_to] = 1;
                    path[parent_to] = parent_from;
             } else {
                    printf("\n Cycle detected!!! \n");
                    return;
} }
}


int main() {
      int i;
      int no_vert, no_edge;
      int p_arr[MAX_SIZE];
      int path[MAX_SIZE];
      printf("\n Number of Vertices : ");
      scanf("%d", &no_vert);
      printf("\n Number of Edge : ");
      scanf("%d", &no_edge);
      for(i = 0; i < no_vert; p_arr[i] = -1, path[i] = '.', i++);
      unionSet(p_arr, path, no_vert, no_edge);
      return 0;
}