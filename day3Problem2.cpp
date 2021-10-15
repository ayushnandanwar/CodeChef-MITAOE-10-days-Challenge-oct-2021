/*
    You are given two numbers L and R. You need to find all number in [L, R] 
    such that choosed number is divisible by its digit.

    Note: If number has zero digit (like 102), you can ignore divisibility check for zero.

    Constraint:
    1 <= L < R <= 10^6

    Test Case 1:
    Input:
    3 14

    Output:
    3 4 5 6 7 8 9 10 11 12
    13 is not divisible by 3
    14 is not divisible by 4

*/

#include <iostream>
using namespace std;

int main(){
    int l,r;
    cin >>l>>r;
    for(int i = l;i<=r;i++){  // running for [L,R]
        int num = i;    // num for geting every digits
        int digit,flag = 1;
        while(num > 0){
            digit = num%10;   // getting digits
            if(digit != 0)  // if digit 0 then will not check
            if(i%digit != 0){   // checking divisibility
                flag = 0;
                break;
            }
            num /= 10;
        }
        if(flag == 1) 
            cout <<i<<" ";
    }
}