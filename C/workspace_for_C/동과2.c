#include <stdio.h>

void reverse(int a[], int n){
    
    for(int i = 0 ; i < n ; i++){
        printf("%d \n", a[i]);
    }
    for(int i = n-1 ; i >= 0 ; i--){
        printf("%d \n", a[i]);
    }

}

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(a, 10);

}