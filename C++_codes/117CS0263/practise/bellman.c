// #include <stdio.h>
// #include <stdlib.h>
// int Bellman_Ford(int G[20][20] , int V, int E, int edge[20][2])
// {
//     int i,u,v,k,distance[20],parent[20],S,flag=1;
//     for(i=0;i<V;i++)
//         distance[i] = 1000 , parent[i] = -1 ;
//     printf("Enter source: ");
//     scanf("%d",&S);
//     distance[S-1]=0;
//     for(i=0;i<V-1;i++)
//     {
//         for(k=0;k<E;k++)
//         {
//             u = edge[k][0] , v = edge[k][1] ;
//             if(distance[u]+G[u][v] < distance[v])
//                 distance[v] = distance[u] + G[u][v] , parent[v]=u ; // relaxing all edges acc to our need
//         }
//     }
//     for(k=0;k<E;k++)
//         {
//             u = edge[k][0] , v = edge[k][1] ;
//             if(distance[u]+G[u][v] < distance[v])
//                 flag = 0 ;
//         }
//         if(flag)
//             for(i=0;i<V;i++)
//                 printf("Vertex %d -> cost = %d parent = %d\n",i+1,distance[i],parent[i]+1);

//         return flag;
// }
// int main()
// {
//     int V,edge[20][2],G[20][20],i,j,k=0;
//     printf("BELLMAN FORD\n");
//     printf("Enter no. of vertices: ");
//     scanf("%d",&V);
//     printf("Enter graph in matrix form:\n");
//     for(i=0;i<V;i++)
//         for(j=0;j<V;j++)
//         {
//             scanf("%d",&G[i][j]);
//             if(G[i][j]!=0)
//                 edge[k][0]=i,edge[k++][1]=j;
//         }

//     if(Bellman_Ford(G,V,k,edge))
//         printf("\nNo negative weight cycle\n");
//     else printf("\nNegative weight cycle exists\n");
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int i,j,v,k=0;

void bellman(int G[9][9], int vertex[20][2], int e){
    int flag= 1,distance[v],parent[20],s,u,v2;
    
    for(i=0;i<v;i++){
        distance[i] = 999, parent[i] = -1;
    }

    printf("Source: ");
    scanf("%d",&s);
    distance[s] = 0;

    for(i=0;i<v-1;i++){
        for(j=0;j<e;j++){
            u = vertex[j][0], v2 = vertex[j][1];
            if(distance[u] + G[u][v2] < distance[v2]) distance[v2] = distance[u] + G[u][v2], parent[v2] = u;
        }
    }

    for(j=0;j<e;j++){
            u = vertex[j][0], v2 = vertex[j][1];
            if(distance[u] + G[u][v2] < distance[v2]) flag = 0;
    }
    if(flag){
        for(j=0;j<v;j++){
            printf("%d : distance %d, parent %d \n", j+1, distance[j], parent[j]+1);
        }
        printf("No Negative cycle found");
    }
    else{
        printf("Negative cycle found");
    }
}


int main(){
    int G[9][9], vertex[20][2];
    printf("Enter Verices:\n");
    scanf("%d",&v);
    printf("Matrix:\n");
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            scanf("%d", &G[i][j]);
            if(G[i][j] != 0){
                vertex[k][0] = i, vertex[k++][1] = j;
            }
        }
    }
    bellman(G,vertex, k);
}