//Take an integer array where the user will give size and find the sum of the numbers in the array.

#include<stdio.h>
int main()
{
  int size,i,sum=0;
  printf("Enter your array size: ");
  scanf("%d  /n",&size);
  int array[size];

  for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    sum=sum+array[i];
  }
    printf("The Sum = %d",sum);

}

