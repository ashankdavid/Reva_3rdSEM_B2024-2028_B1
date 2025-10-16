#include<stdio.h>
void main(){
    int m, n;
    scanf("%d %d", &m, &n);

    for(int i=m; i<=n; i++){
        int first = i/10;
        int second = i%10;
        int sum = first + second;
        int product = first * second;

        if(sum + product == i){
            printf("%d ", i);
        }
    }
}