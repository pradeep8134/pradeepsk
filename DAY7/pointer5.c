#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    printf("The value is: %d \n",*p);  
    printf("The value is: %d \n",*(p+3)); 
    printf("The value is : %d \n",*(*(&p)+5)); 
    *(p+3)=100;
    printf("Array elemets are: \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}    
