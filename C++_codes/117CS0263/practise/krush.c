// #include<stdio.h>
// #include<stdlib.h>

// int i,j,k,a,b,u,v,n,ne=1;
// int min,mincost=0,cost[9][9],parent[9];

// int find(int);
// int uni(int,int);

// int main()
// {
// 	 printf("\nEnter the no. of vertices\n");
// 	 scanf("%d",&n);
// 	 printf("\nEnter the cost adjacency matrix\n");

// 	 for(i=1;i<=n;i++)
// 	 {
// 		  for(j=1;j<=n;j++)
// 		  {
// 			   scanf("%d",&cost[i][j]);
// 			   if(cost[i][j]==0)
// 				    cost[i][j]=999;
// 		  }
// 	 }

// 	 printf("\nThe edges of Minimum Cost Spanning Tree are\n");
	 
// 	 while(ne<n)
// 	 {
// 		  for(i=1,min=999;i<=n;i++)
// 		  {
// 			   for(j=1;j<=n;j++)
// 			   {
// 				    if(cost[i][j]<min)
// 				    {
// 					     min=cost[i][j];
// 					     a=u=i;
// 					     b=v=j;
// 				    }
// 			   }
// 		  }
// 		  u=find(u);
// 		  v=find(v);

// 		  if(uni(u,v))
// 		  {
// 			   printf("\n%d edge (%d,%d) =%d\n",ne++,a,b,min);
// 			   mincost +=min;
// 		  }
// 		  cost[a][b]=cost[b][a]=999;
// 	 }
// 	 printf("\nMinimum cost = %d\n",mincost);
// }
// int find(int i)
// 	{
// 	 while(parent[i])
// 	  i=parent[i];
// 	 return i;
// 	}

// int uni(int i,int j)
// 	{
// 	 if(i!=j)
// 	 {
// 	  parent[j]=i;
// 	  return 1;
// 	 }
// 	 return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int n,parents[9];
int a,b,z,x,min,ne=1;
int mat[9][9],i,j,k;


int find(int y){
	while(parents[y])
		y = parents[y];
	return y;
}

int unio(int z, int y){
	if(z!=y){
		parents[y] = z;
		return 1;
	}
	return 0;
}

int main(){
	printf("Enter vertices: ");
	scanf("%d",&n);
	printf("matrix: ");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j] == 0) mat[i][j] = 999;
		}
	}
	//finding minimum
	while(ne<n){ // have to take n-1 edges positively
		for(i=1,min = 999;i<=n;i++){
			for(j=1;j<=n;j++){
				if(mat[i][j]<min){
					min = mat[i][j];
					z = a = i;
					x = b = j;
				}
			}
		} 
		a = find(a);
		b = find(b);
		if(unio(a,b)){
			printf("%d -> %d : %d \n", z,x,mat[z][x]);
			ne++;
		}
		mat[z][x] = 999;
		mat[x][z] = 999;
	}


}