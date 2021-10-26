/*
    Day 10 - Problem 1

Coin of 5

A thief has a weird type of habit like whenever he stole the money he always stole a coin of 5. He doesn't care whether there is more money or not. He got this habit because peoples in the city only have coins of 5 or less than 5.

Now, one day he decided to rob some N houses and each ith house has Ai worth coins. You need to find how many coins of 5 he had stolen from N houses.

Input Format :

N: Total Number of houses.
A[N]: Total coin worth in each house.

Output Format :
Single integer describing the total number of coins of 5 he had stolen.

Constraints :
1 <= N <= 10^5
1 <= A[i] <= 10^9

Sample Testcase :

N = 2
A[N] = 10,2
In the first house, he can find a max of 2 coins of 5 & in the second house it is not possible to have a single coin of 5 so 0.

Output : 2 + 0 = 2
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        int temp = a[i]/5;
        sum += temp;
    }
    cout <<sum;
}