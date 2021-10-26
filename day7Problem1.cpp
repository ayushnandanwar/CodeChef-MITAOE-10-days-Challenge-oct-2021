/*
    Day 7

    Problem Statement 1
    You are given 2 positive integers P and Q. your task is to find 
    integers X and Y such that the given relation P×X + Q×Y = GCD(P,Q) 
    satisfies.

    Input Format:
    Line of input takes two values P and Q.

    Output Format:
    Print the value of X and Y.

    Constraints:
    1<=P,Q<=10^5

    Test Cases:

    Input: 
    4 6
    Output: 
    -1 1
    Explanation: 
    4×(-1) + 6×(1) = GCD(4,6) = 2


    Input: 
    35 90
    Output: 
    -5 2 
    Explanation: 
    35×(-5) + 90×(2) = GCD(35,90) = 5
*/
#include<iostream>
#include <math.h>
using namespace std;
int GCD(int a,int b){  // Euclids algo
    if (b == 0)
        return a;
    return GCD(b, a % b);

}
int main(){
    int p,q;
    cin >>p>>q;
    int gcd = GCD(p,q);
    bool found = false;
    for(int i = -sqrt(p);i < sqrt(p);i++){
        for(int j=-sqrt(q);j<sqrt(q);j++){
            if(p*i + q*j == gcd){
                cout <<i<<" "<<j<<endl;
                found = true;
                break;
            }
        }
        if(found) break;
    }
}