#include<stdio.h>
void main(){
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int arr[] = {1,0,2,0,1,0,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }

    int index = 0;
    while(count0 > 0){
        arr[index++] = 0;
        count0--;
    }

    while(count1 > 0){
        arr[index++] = 1;
        count1--;
    }

    while(count2 > 0){
        arr[index++] = 2;
        count2--;
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}