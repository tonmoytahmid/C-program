//Write a C program to reverse a string.

#include<stdio.h>
int main(){
char ch1[100];
printf("Enter the arry element: ");
gets(ch1);


int lenght=0;

while(ch1[lenght] != '\0'){
    lenght++;
}

for(int i=0; i<lenght/2;i++){
    char temp=ch1[i];
    ch1[i]=ch1[lenght-i-1];
    ch1[lenght-i-1]=temp;
}

printf("%s",ch1);

}
