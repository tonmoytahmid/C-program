//Write a C program that will copy the elements of an array into another array.
#include<stdio.h>
int main(){
int array[100],copyarr[100],size,i;

printf("Enter the array size: ");
scanf("%d",&size);
printf("Enter the array element: ");
for(i=0;i<size;i++){
         printf("Element %d: ", i + 1);
    scanf("%d",&array[i]);
}
printf("\nElements in source array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }


for(i=0;i<size;i++){
    copyarr[i]=array[i];
}

printf("\nElements in destination array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", copyarr[i]);
    }

}

