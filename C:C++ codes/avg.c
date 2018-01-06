#include<stdio.h>
int main()
{
double sum = 0, buf;
for(int i = 0; i < 12; i++) {
scanf("%lf", &buf);
sum += buf;
}
printf("$%.2lf\n", sum / 12.0);
return 0;
}
