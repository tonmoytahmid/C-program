//Given N. Find N! using recursion.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);

    printf("%d!=%d",N,fact(N));

}

 int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n*fact(n-1);



}
