/*
    Problem statement 1
    Write a program to print the following pattern
    
    Test case 1
    Input
    4
    Output
    1*2*3*4*17*18*19*20
    --5*6*7*14*15*16
    ----8*9*12*13
    ------10*11

    Test case 2
    Input
    3
    Output
    1*2*3*10*11*12
    --4*5*8*9
    ----6*7

    Note: Each hyphen represents one space
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int last = n*(n+1);  // last number 
    int a = 1;
    for(int i = 1;i<=n;i++){
        if(i !=1)
        for(int j = 1;j<=i;j++){
            cout <<" ";
        }
        for(int j = i;j<=n;j++){
            cout << a++ <<"*";
        }
        int temp =a;
        for(int j = i;j<=n;j++){
            if(j == i){
            cout <<"*"<< last - temp + 2;
            temp--;
            }
            else{
            cout <<"*"<< last - temp + 2;
            temp--;
            }
        }
        cout <<endl;
    }
}

// cout <<"*"<< last - temp + 2;

// cout << "("<<last<<"-" << temp-2 <<")";