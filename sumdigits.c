#include "sumofdig.h"

int sum(int n){
    int summ=0;
    while(n>0){
            int rem = n%10;
            summ = summ + rem;
            n= n/10;
        }
        return summ;

}