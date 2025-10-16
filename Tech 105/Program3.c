#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;

    //Main Diagonal
    for(int i=0; i<n; i++){
        if(arr[i][i] > 18 && arr[i][i] < 60){
            count++;
        }
    }

    // Secondary Diagonal
    for(int i=0; i<n; i++){
        if(arr[i][n-i-1] > 18 && arr[i][n-i-1] < 60){
            count++;
        }
    }

    if(n%2!=0){
        int mid = n/2;
        if(arr[mid][mid] > 18 && arr[mid][mid] <60){
            count--;
        }
    }

    printf("%d", count);

}