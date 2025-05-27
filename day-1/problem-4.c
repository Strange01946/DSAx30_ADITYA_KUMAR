#include<stdio.h>
#include<stdbool.h>
int sq_sum(int n){
    if(n==1){
        return true;
    }
    int sum=0;
    while(n!=0){
        sum=sum + (n%10)*(n%10);
        n=n/10;
    }
    return sq_sum(sum);
}
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(sq_sum(n)==true){
    printf("happy");
}
return 0;
}