/*
    --Day 4--

    Problem Statement 2

    Fibo-Reset

    Fibo-Reset is a type of fibonaaci series that resets its value after generating every N numbers. 
    If our N is 5 then we will have our series something like this

    0 1 1 2 3 (reset) 0 1 1 2 3 (reset) 0 1 1 ... till infinity

    Given the value of N your task is to find out the Mth number of the sequence.

    Input :

    First Line of Input take two values N,M.

    Output :

    Return the value of Mth number in new line.

    Constraints :

    1 <= N <= 30
    1 <= M <= 10^9

    Testcase 1:

    Input  : N = 9, M = 15
    Output : (0,1,1,2,3,5,8,13,21,0,1,1,2,3,5) = 5
*/

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >>n>>m;
    int mth = 0;  // mth = 0 no term
    int a,b,c;
    while(true){
        a = 0;
        b = 1;
        cout <<a<<" "<<b <<" ";
        mth += 2;    //  a b two term 
        for(int i=0;i<n-2;i++){   // printing fibo till nth
            c = a + b;
            a = b;
            b = c;
            cout <<c<<" ";
            mth++;         // c one term
            if(mth == m)    
            break;
        }
        if(mth == m)  
        break;
    }
    cout <<c;
}