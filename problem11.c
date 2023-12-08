//Write a C program to remove all spaces from a string.

#include<stdio.h>
int main()
{
    char ch1[100];
    gets(ch1);
    int i,j;
    for(i=0,j=0;ch1[i] != '\0';i++){
        if(ch1[i] != ' '){
            ch1[j++]=ch1[i];
        }

    }
    ch1[j]='\0';
    printf("%s",ch1);
}
