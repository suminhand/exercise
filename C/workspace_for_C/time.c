#include <stdio.h>

int main(){
    
    int a;
    int b;
    int c;
    int d;

    printf("1.초로 변환 \n2.시간으로 변환\n");
    scanf("%d", &a);

    if(a==1){
        printf("몇시간?:");
        scanf("%d", &b);
        printf("\n몇 분?:");
        scanf("%d", &c);
        printf("\n\n 총 %d 초", (b*3600)+(c*60));
    }
    else{
        printf("몇 초?:");
        scanf("%d", &d);
        printf("\n\n %d 분 %d 초", d/60, d%60);
    }
    return 0;
}