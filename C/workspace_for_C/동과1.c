#include <stdio.h>

/* 버블정렬 만들기. 
버블 정렬이란 마구잡이로 놓여있는 수들을 크기 순으로 정렬 한 것이다.
그렇다면 어떻게 만들 수 있을까?
크기를 비교해야 한다.... 그리고... 하 시발....
*/

int main(){

    int arr[5] = { 3, 42, 8, 2, 9};
    int temp;
    int i , j; 

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(arr[j]>arr[j+1]){
    		temp = arr[j];
    		arr[j] = arr[j+1];
    		arr[j+1] = temp;
		    }
        }
    	
	}
    
	for(i=0; i<5; i++){
		printf("%d\n",arr[i]);
	}
	
    return 0;
}
