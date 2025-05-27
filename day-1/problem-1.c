#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int size=2*n-1;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        int min_distance=0;
        if(i<j){
            min_distance=i;
        }
        else min_distance=j;
        if(min_distance>size-1-i){
            min_distance=size-1-i;
        }
        if(min_distance>size-1-j){
            min_distance=size-1-j;
        }
        printf("%d",n-min_distance);
    }
    printf("\n");
}
return 0;
}