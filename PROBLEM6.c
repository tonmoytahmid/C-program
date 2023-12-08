//Write a C program to find the second largest number.
#include<stdio.h>
int main()
{
    int array[20],i,size;
    printf("Enter array size: ");
    scanf("%d",&size);

    printf("Enter the array element: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    int largest=array[0];
    int secondlargest=array[1];

    if (secondlargest > largest) {
        int temp = largest;
        largest = secondlargest;
        secondlargest = temp;
    }
    for(i=2; i<size; i++)
    {
        if(largest<array[i])
        {
            secondlargest=largest;
            largest=array[i];
        }
        else if(secondlargest<array[i] && array[i != largest])
        {
            secondlargest=array[i];
        }
        printf("%d",secondlargest);
    }}
