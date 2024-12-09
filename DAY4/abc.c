#include<stdio.h>
int main(){
    int inputChar;
    printf("Enter a character; \n");
    scanf("%c",&inputChar);
    if(inputChar>=65 && inputChar<=90){
        printf("The given character is upper case letter");
    }
    else{
        printf("The given character is lower case latter");
    }

}