#include<stdio.h>
int arr[3];
int i;
void Hanoi(int n, char from_rod, char to_rod, char ext_rod)
{
    if (n == 1)
    { 
        printf("\nMove disk 1 from rod %c to rod %c \n", from_rod, to_rod);
        return;
    }
    Hanoi(n-1, from_rod, ext_rod, to_rod);
    printf("\nMove disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
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
    printf("\n");
    Hanoi(n, 'A', 'C', 'B');  // A, B(AUX) and C(FINAL) are names of rods
    printf("\n");
    return 0;
}
