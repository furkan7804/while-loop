#include<stdio.h>
main()
{

int N ;
int x ;

printf("Enter the  number = ");
scanf("%d",&N);

printf("Enter the number = ");
scanf("%d",&x);
while (N>=x)
{
    printf("%d\n",N);
    N = N - 4 ;
}




}