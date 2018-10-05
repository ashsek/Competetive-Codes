#include<stdio.h>
int arr[3];
int i;
void Hanoi(int n, char from_rod, char to_rod, char ext_rod)
{
    if (n == 1)
    {
        printf("\nMove disk 1 from rod %c to rod %c \n", from_rod, to_rod);
	arr[((int) from_rod - 65)] -= 1;
        arr[((int) to_rod - 65)] += 1;
    	for(i=0;i<3;i++){
        	printf("%d ",arr[i]);
    	}
    	printf("\n");
        return;
    }
    Hanoi(n-1, from_rod, ext_rod, to_rod);
    printf("\nMove disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    arr[((int) from_rod - 65)] -= 1;
    arr[((int) to_rod - 65)] += 1;
    for(i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    Hanoi(n-1, ext_rod, to_rod, from_rod);
}

int main()
{
    int n; // Number of disks
    printf("Enter the number of discs in the first rod:  ");
    scanf("%d",&n);
    arr[0] = n;
    arr[1] = 0;
    arr[2] = 0;
    for(i=0;i<3;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    Hanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    printf("\n");
    return 0;
}
