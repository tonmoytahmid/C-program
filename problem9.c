//Write a C program to merge two strings.
#include<stdio.h>
int main()
{
   char ch1[100],ch2[100],result[200];


   gets(ch1);
   gets(ch2);

   int i,j;

   for(i=0;ch1[i] != '\0';i++){
    result[i]=ch1[i];
   }
   for(j=0;ch1[j] != '\0';j++){
    result[i+j]=ch2[j];
   }
    result[i+j]='\0';

    printf("%s",result);
}
