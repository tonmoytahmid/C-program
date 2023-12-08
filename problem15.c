//Write a c program that will count the total number of alphabets and the total number of digits in a string.
#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter your value: ");
    gets(a);
    int i;
    int alphabet=0;
    int digit=0;
    for(i=0;i != a[i];i++){
        if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z'){
            alphabet++;
        } else if(a[i]>='0' && a[i]<='9'){
           digit++;
        }
    }
    printf("Alphabet: %d \n",alphabet);
    printf("Digit: %d",digit);
}
