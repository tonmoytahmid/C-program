//Sum of all array elements
#include<stdio.h>
int main(){

int a[100],i,n;

printf("Enter your array size: ");
scanf("%d",&n);

printf("Enter your array element: \n");

for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int sum=0;
for(i=0;i<n;i++){
    sum +=a[i];
}
printf("The sum = %d",sum);
}
