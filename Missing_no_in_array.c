#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 4, 5};
    int missing = 0;
    for(int i=0; i<5; i++){
        missing = missing + arr[i];
    }
    int total = 0;
    for(int i=1; i<=5; i++){
        total = total + i;
    } 
    printf("Missing number is: %d\n", total - missing);
}