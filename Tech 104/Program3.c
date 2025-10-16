#include<stdio.h>

int find(int N){
    int sum = 0, i=1;
    while(sum < N){
        sum = sum + i;
        if(sum==N){
            return 1;
        }
        i++;
    }
    return 0;
}

void main(){
    int N;
    scanf("%d", &N);
    if(find(N)){
        printf("We can have a right triangle!");
    }else{
        printf("We can't have a right triangle!");
    }
}