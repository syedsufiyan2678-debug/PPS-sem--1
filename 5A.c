#include<stdio.h>

int main()
{
int i,j,N;

printf("enter size of N:");
scanf("%d",&N);
printf("pattern up to %drowsis\n",N);

for(i=1;i<=N;i++)
{
for(j=1;j<=i;j++)

printf("%d",j);

printf("\n");
}
return 0;
}
