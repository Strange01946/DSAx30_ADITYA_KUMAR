#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=0;k<i;k++){
        printf("%c",'A'+k);
    }
    for(int l=i-2;l>=0;l--){
              printf("%c",'A'+l);
    }
    printf("\n");
}
return 0;
}