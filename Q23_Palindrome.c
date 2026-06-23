#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter a no. to chech whether it is palindrome or not: ");
    scanf("%d", &n);
    for(int temp=n; temp>0; temp/=10){
        int rem = temp%10;
        rev = rev*10 + rem;
    }
    if(rev==n){
        printf("The entered no. is palindrome.");
    }
    else{
        printf("The entered no is not palindrome.");
    }
    return 0;
}