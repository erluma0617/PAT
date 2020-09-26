
#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int count=0;
    if(n<=0)
        printf("error!");
while (n!=1){
    if(n%2==0)
        n=n/2;
    else
        n=(n*3+1)/2;
    count++;
}
    printf("%d",count);
    return 0;
}