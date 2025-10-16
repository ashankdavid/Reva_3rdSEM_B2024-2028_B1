#include<stdio.h>
#include<string.h> // islower(), isupper()
#include<ctype.h> // toupper(), tolower(), isAlpha()
void main(){
    char str[100];
    scanf("%s", &str);

    int hasAlpha = 0; // flag var to check if the char is a aphabet or not

    for(int i=0; str[i]!='\0'; i++){
        if(isalpha(str[i])){
            hasAlpha = 1;
            if(islower(str[i])){
                str[i] = toupper(str[i]);
            }else if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
    }

    if(hasAlpha){
        printf("%s", str);
    }else{
        printf("NULL");
    }
}