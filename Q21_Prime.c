#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int isPrime = 1; // Assume n is prime
    if(n <= 1){
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                isPrime = 0; // n is divisible by i, so it's not prime
                break;
            }
        }
    }
    if(isPrime){
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}