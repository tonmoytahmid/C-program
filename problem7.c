//Write a C program to concatenate two strings.
#include<stdio.h>
int main(){
char ch1[100],ch2[100],result[200];

printf("Enter the ch1 element: ");
gets(ch1);
printf("Enter the ch2 element: ");
gets(ch2);


chracter(ch1,ch2,result);

printf("%s",result);

}
void chracter(char ch1[],char ch2[],char result[]){
int i,j;
for(i=0; ch1[i] != '\0';i++){
    result[i]=ch1[i];
}
for(j=0; ch2[j] != '\0';j++){
    result[i+j]=ch2[j];
}
result[i+j]='\0';
}
