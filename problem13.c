//Write a C program that will count the sum of all elements of a 2D array.
#include<stdio.h>
int main(){

int row,col;
printf("Enter your row: ");
scanf("%d",&row);
printf("Enter your col: ");
scanf("%d",&col);
int array[row][col];
int i,j;
for(i=0;i<row;i++){
    for(j=0;j<col;j++){

        printf("Element in each position(%d,%d)",i+1,j+1);
        scanf("%d",&array[i][j]);

    }
}

int sum=0;
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        sum +=array[i][j];
    }
}
printf("The sum=%d",sum);

}
