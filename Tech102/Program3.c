#include<stdio.h>
void main(){
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);

    if(a+b+c==180 && a>0 && b>0 && c>0){
        if(a==60 && b==60 && c==60){
            printf("Prize 3");
        }else if(a==90 || b==90 || c==90){
            printf("Prize 2");
        }else{
            printf("Prize 1");
        }
    }
    else{
        printf("No Prize");
    }
}
