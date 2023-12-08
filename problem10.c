//Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
int main()
{
    char ch1[100];
    gets(ch1);
    int i=0;
    while(ch1[i] != '\0'){
        if(ch1[i]>='a' && ch1[i]<='z'){
        ch1[i]=ch1[i]-'a'+'A';
    }
    i++;
    }
    printf("%s",ch1);
}
