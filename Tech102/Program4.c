#include<stdio.h>
void main(){
    int vehicleType;
    printf("Choose any: 1 for Car, 2 for Bike, 3 for BUS");
    scanf("%d", &vehicleType);
    switch(vehicleType){
        case 1:
        printf("20$");
        break;

        case 2:
        printf("10$");
        break;

        case 3:
        printf("30$");
        break;

        default:
        printf("Invaild Vehicle type");
    }
}