#include <stdio.h>
int isprime(int);
int isprime(int num)
{
    int flag=0;
     if(num == 0|| num == 1){
        flag = 0;
    }
    if(num==2){
        flag =1;
    }
        for(int j = 2; j<num/2; j++){
            if(num%j == 0){
                flag = 1;
                break;
            }
            else{
                flag = 0;
                
            }
        }
        return flag;
        
}
int main()
{
    int n1;
    int sum=0;
    printf("Enter a number ");
    scanf("%d",&n1);
    int k = isprime(n1);
    if(k==0){
        printf("%d is a prime\n", n1);
        int n = n1;
        while(n>0){
            int rem = n%10;
            sum = sum + rem;
            n= n/10;
        }
    
    int rem1 = sum%10;
    if(rem1==8){
        printf("Last digit after summing the digits in %d  is 8", n1);
    
    }
    else{
         printf("Last digit of %d is  not 8", sum);

    }
      }

    return 0;
}