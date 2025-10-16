#include<stdio.h>
void main(){
    int v, w, fw, tw;
    scanf("%d", &v);
    scanf("%d", &w);

    if(w%2!=0 || w<2*v || w>4*v){
        printf("INVALID INPUT");
    }

    fw = (w - (2*v)) / 2;
    tw = v - fw;
    printf("TW = %d\nFW = %d\n", tw, fw);
}