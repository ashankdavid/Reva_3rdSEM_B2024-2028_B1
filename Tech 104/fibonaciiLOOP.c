#include<stdio.h>
void main(){
    int n, n1=0, n2=1, sum=0;
    printf("How many numbers u want?: ");
    scanf("%d", &n);

    printf("%d %d ", n1, n2);

    for(int i=2; i<n; i++){
        sum = n1+n2;
        printf("%d ", sum);
        n1 = n2;
        n2 = sum;
    }
}