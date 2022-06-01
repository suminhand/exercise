int even(int num){
    
    int result = num / 2;
    
    return result ;
}

int odd(int num){
    int result = num * 3 +1;
    return result;
}

int number(int num){
    int i = 0;

    while(num != 1){
        i++ ;
        if(num % 2 == 0){
            num = even(num) ;
        }
        else{
            num = odd(num) ;
        }

    }

    return i ;
}


int main(){
    int num;

    scanf("%d", &num);

    printf("%d", number(num));

    return 0;

}