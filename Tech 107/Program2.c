#include<stdio.h>
#include<string.h> // strlen()
void main(){
    char str[100];
    scanf("%s", str);

    int n = strlen(str);
    char result[100];
    int j = 0;

    for(int i=0; i<n; ){
        if(str[i] == 'E' && str[i+1] == 'F'){
            i += 2;
            continue;
        }

        if(str[i] == '5' && str[i+1] == '6'){
            i += 2;
            continue;
        }

        if(str[i] == 'G' || str[i] == '&'){
            i++;
            continue;
        }

        result[j++] = str[i++];
    }

    result[j] = '\0';
    printf("%s", result);
}