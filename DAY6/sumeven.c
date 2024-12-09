#include<stdio.h>
int sumOfNaturalNo(int);

int main(){
    int inputNumber=0,res;
    printf("Enter a number: \n");
    scanf("%d",&inputNumber);
    res=sumOfNaturalNo(inputNumber);
    printf("the sum of even  number %d is %d ",inputNumber,res);
    return 0;
}

int sumOfNaturalNo(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }    
         
    }
    return sum;
}

   
  

