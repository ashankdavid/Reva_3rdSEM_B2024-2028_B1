#include<stdio.h>

int sum(int x){
    if(x==1){ // Base case
        return 1;
    }
    return x + sum(x-1); // Recursive case
}

void main(){
    int num;
    scanf("%d", &num);
    printf("%d", sum(num));
}