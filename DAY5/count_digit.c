#include<stdio.h>
int main(){
    long long int inputNumber=0,countNumber=0,digit;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber=countNumber+1;
        inputNumber=inputNumber/10;
    }
    printf("The count of a number is : %d",countNumber);
   
}
   