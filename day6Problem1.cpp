/*
    You are given a number. You need to check if given number has 
    exactly three factors. If it has exactly three factors then print yes else no.

    Constraint:
    1 <= N <= 10^9

    Test Case 1:

    Input:
    20

    Output:
    No

    Explanation:
    Factors of 20 are 1, 2, 4, 5, 10 and 20. It has 6 factors so answer is no.

    Test Case 2:

    Input:
    9

    Output:
    Yes

    Explanation:
    Factors of 9 are 1, 3 and 9. It has 3 factors so answer is Yes.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int factCount = 2;  // 1 and itself

    for(int i=2;i<=n;i++){
        for(int j = 2;j<=n;j++){
            if(i*j == n)
            factCount++;
        }
    }

    cout <<factCount<<endl;
    if(factCount == 3) cout <<"Yes";
    else cout <<"No";
}