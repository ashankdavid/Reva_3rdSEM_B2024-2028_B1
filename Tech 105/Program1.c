#include<stdio.h>
void main(){
    int T;
    scanf("%d", &T);

    int E[T], L[T];

    for(int i=0; i<T; i++){
        scanf("%d", &E[i]);
    }

    for(int i=0; i<T; i++){
        scanf("%d", &L[i]);
    }

    int currGuests = 0, TotalGuests = 0;
    for(int i=0; i<T; i++){
        currGuests = currGuests + E[i] - L[i];
        if(currGuests > TotalGuests){
            TotalGuests = currGuests;
        }
    }
    printf("%d", TotalGuests);
}