#include<stdio.h>
int main(){
    int inputChar;
    printf("Enter a number; \n");
    scanf("%c",&inputChar);
    if(inputChar>65 && inputChar<=90){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }

}

