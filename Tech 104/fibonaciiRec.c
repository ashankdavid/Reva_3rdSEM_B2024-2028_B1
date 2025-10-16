#include<stdio.h>

int fib(int x){
    if(x==0 || x==1){
        return x;
    }
    return fib(x-1) + fib(x-2);
}

void main(){
    int n;
    printf("How many numbers u want?: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        printf("%d ", fib(i));
    }
}