/*
    Problem Statement 1
    LCM & HCF:
    You are given 2 numbers X and Y which are respectively the LCM and HCF of 
    the numbers A and B. Also you are given Z which is the sum of the numbers A and B.
    Your task is to complete the function printNumbers which takes integers X,Y 
    and Z as input and prints the values of A and B.

    Test Cases:-
    Input: X=24,Y=12,Z=36
    Output: 12 24

    Input: X=918,Y=2,Z=88
    Output: 34 54

    Output Format:-
    Print values of A and B respectively on the same line separated by single space
*/

#include <iostream>
using namespace std;

int main(){
    int x,y,z;  // x-LCM, y-HCF, z = a + b;
    int a,b; 
    cin >>x>>y>>z;
    bool stop = false;
    if(y<x){
        for(int i=1;i<=x+y;i++){
            a = i;
            for(int j=1;j<=x+y;j++){   // running loop to z. 
                b = j;
                if(x*y == a*b && a+b == z){   // checking condition
                    stop = true;
                    break;
                }
            }
            if(stop){
                break;
            }
        }
    }
    cout <<a<<" "<<b;
}