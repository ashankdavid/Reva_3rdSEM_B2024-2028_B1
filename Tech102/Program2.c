#include<stdio.h>
void main(){
    int ticketNumber;
    scanf("%d", &ticketNumber);

    int last = ticketNumber % 10;
    if(last==3 || last==8){
        printf("Lucky Winner");
    }else{
        printf("Not a Lucky Winner");
    }
}