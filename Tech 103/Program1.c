#include<stdio.h>
void main(){
    int num, count = 0;
    scanf("%d", &num);

    while(num!=0){
        int temp = num%10;
        if(temp==4){
            count++;
        }
        num = num/10;
    }
    printf("%d", count);
}