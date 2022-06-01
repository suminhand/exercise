#include <stdio.h>

int main(){
    int i;
    char arr[20] = {'h', 'e', 'l', 'l', 'o', ',', ' ','w', 'o', 'r', 'l', 'd'};

    for (i=0 ; i<20; i++){

        if(arr[i] == '\0'){
            break;
        }

        printf("%d \n", arr[i]);
    }

    return 0;

}