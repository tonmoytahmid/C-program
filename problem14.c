//Write a C program to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
char a[100];

printf("Enter your value: ");
gets(a);
if(palindrome(a)){
    printf("The String is pailndrome");

}else{
printf("The String is not pailndrome");
}

}
int palindrome (char b[]){
int i,j;
int len= strlen(b);
for(i=0,j=len-1;i<j;i++,j--){
    if(b[i] != b[j]){
        return 0;
    }
}
return 1;
}
