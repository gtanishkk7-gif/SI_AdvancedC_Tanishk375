#include<stdio.h>
int main(){
    int n, count=0,rem;
    printf("Enter a no. to check whether it is armstrong or not:");
    scanf("%d", &n);
    int sum=0;
    for(int temp1=n; temp1>0; temp1/=10){
        int power=1;
        rem=temp1%10;
        for(int j=1;j<=count;j++){
            power=power*rem;
        }
        sum=sum+power;
    }
    if(sum==n){
        printf("The entered no. is armstrong.");
    }
    else{
        printf("The entered no is not armstrong.");
    }
    return 0;
}