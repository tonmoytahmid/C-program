//Until the user quits, take input from the user and find whether it is zero, positive or negative using a while loop.
#include<stdio.h>
int main(){

int num;
while(1){
    printf("Enter your Number: ");
    scanf("%d",&num);
    if(num==0){
        printf("You are quit ! \n");
    }else if(num>0){
    printf("Number is positive \n");

    }else if(num<0){

    printf("NUmber is Negative \n");
    }
}
}

