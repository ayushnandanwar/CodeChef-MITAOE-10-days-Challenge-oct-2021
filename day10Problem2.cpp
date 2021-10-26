/*
    Day 10 - Problem 2

Chocolate Frenzy

Walmart has launched a new promotional scheme for chocolates; wherein after giving back a specified amount of chocolate wrappers, you can get a chocolate back. Each chocolate bought comes with a wrapper.

You have some money 'N' initially with you. Provided that you know the cost 'C' of each chocolate, and the number of wrappers 'M' that you can return to get a chocolate back, determine the maximum amount of chocolates that you can eat.

Input Format :

    t: Number of test cases
    N: Initial Amount of Money
    C: Cost of each Chocolate
    M: Wrappers to be returned to get back one free chocolate	


Output Format :

    Single integer describing the maximum number of chocolates you can eat.


Constraints :

    1 <= t <= 10^3
    2 <= N <= 10^5
    1 <= C <= N
    2 <= M <= N


Sample Testcase 1 :

    t = 1
    N = 10
    C = 2
    M = 5

You can first spend 10 to get 5 chocolates, at 2 per chocolate. After eating, you can then return all the 5 wrappers to get back one free chocolate. Therefore the maximum number of choclates you can eat is 6.

    Output : 6

Sample Testcase 2 :

    t = 1
    N = 12
    C = 4
    M = 4

You can first spend 12 to get 3 chocolates, at 4 per chocolate. After eating, you will be left with 3 wrappers only. As 3 wrappers are not sufficient to return, you can eat a maximum of 3 chocolates only.

    Output : 3
*/

#include <iostream>
using namespace std;

int main(){
    int t;
    int n;
    int c;
    int m;
    cin >>t;
    while(t--){
        cin >>n; 
        cin >>c;
        cin >>m;
        int sum = 0;
        int choco = n/c;
        sum += choco;
        while(true){
            if(choco/m > 0) {
                sum += choco/m; 
                m = choco%m + choco; // wrappers 
                choco = choco/m;
            }
            else{
                break;
            }
        }
        cout <<sum;
    }
}