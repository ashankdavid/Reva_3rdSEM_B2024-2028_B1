#include<stdio.h>

float calculator(float num1, float num2, char op){
    float result;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid Operator\n");
    }
    return result;
}

void main(){
    float a, b, result;
    char op;

    scanf("%f %f %c", &a, &b, &op);
    result = calculator(a, b, op);
    printf("Result = %.2f", result);
}