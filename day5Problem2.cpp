/*
    Problem statement 2
    Difficulty: Easy

    Write a program to print the following pattern
    Test case 1

    Input

    5


    Output 

    0  1  2  3  4
    *           *
    *  *     *  *
    *     *     *
    *  *	 *  * 
    *           *


    Test case 2
    Input

    9

    Output


    *                       *
    *  *	             *  *
    *     *           *     * 
    *        *     *        * 
    *           *           *
    *        *     *        *
    *     *           *     *
    *  *	             *  *
    *                       *
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){  // i - row

        for(int j = 0;j<n;j++){  // j - column

            if(i == j || n-i-1 == j || j == 0 || j == n-1) cout <<"*  ";  
            else cout <<"   ";

        }
        cout <<endl;
    }

}