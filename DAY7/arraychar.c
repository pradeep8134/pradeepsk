#include<stdio.h>
char main(){
    char arr[5];
    printf("Enter the array elements: \n");
    for(char i=0;i<5;i++){
        scanf("%c",&arr[i]);
    }
    printf("Array elemets are: \n");
    for(char i=0;i<5;i++){
        printf("%c \n",arr[i]);
    }
    return 0;
}

