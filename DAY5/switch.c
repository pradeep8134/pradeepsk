#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("enter a number:  \n");
    scanf("%d",&inputNumber);

   
    switch(inputNumber){
        case 1:{
            printf("the given number is 1");
            break;
        }
        case 2:{
            printf("the given number is 2");
            break;
        }
        case 3:{
            printf("the given number is 3");
            break;
        }
        default:{
            printf("the given number is greater than 3");
        }
    }

    return 0;
}