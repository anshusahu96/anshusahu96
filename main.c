#include<stdio.h>
int main(){
    void div(int a, int b){
    int divide = a%b;
    printf("%d\n", divide);
    if(divide% 2==0){
        printf("This is divide by 2\n");
    }else{
        printf("This is not divide by 2\n");
    }    
    }
}