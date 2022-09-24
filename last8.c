#include <stdio.h>
#include "C:\Users\Admi\Documents\LastDig8\prime.h"
#include "C:\Users\Admi\Documents\LastDig8\sumofdig.h"
int main() {
    int n1;
    printf("Enter a number");
    scanf("%d",&n1);
    int k = isprime(n1);
    if(k==0){
       int sum1= sum(n1);
    
    int rem1 = sum1%10;
    if(rem1==8){
        printf("Last digit after summing the digits in %d  is 8", n1);
    
    }
    else{
         printf("Last digit after summing the digits in  %d is  not 8", n1);

    }
      }

    return 0;

}


    
