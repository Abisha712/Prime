#include "prime.h"
isprime(int num)
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

