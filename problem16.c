//Input and display array elements
#include<stdio.h>
int main(){
int array[100],size,i;
printf("Enter your array size: ");
scanf("%d",&size);
array[size];

printf("Enter your array element: \n");
for(i=0;i<size;i++){
    printf("Each position is %d:", i+1);
    scanf("%d",&array[i]);
}

printf("Array elements are: \n");
for(i=0;i<size;i++){

    printf("%d",array[i]);
}
}
