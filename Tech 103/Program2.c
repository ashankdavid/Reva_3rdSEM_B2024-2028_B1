#include<stdio.h>
void main(){
    int num, digit, count = 0;
    scanf("%d", &num);
    scanf("%d", &digit);

    while(num!=0){
        int temp = num%10;
        if(temp!=digit){
            count++;
        }
        num = num/10;
    }
    printf("%d", count);
}