//Print the first N Natural Number using recursion.
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    printf("The first %d  natural number is: ",N);
Nnumber(N);

}
void Nnumber(int n)
{
    if(n<1)
    {
        return;
    }
    Nnumber(n-1);

    printf("%d",n);

}
