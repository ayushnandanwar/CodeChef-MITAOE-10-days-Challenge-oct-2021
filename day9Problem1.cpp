/*
    Problem Statement 1:
You are given n blocks. You have to build a perfect stair. If it is a perfect stair then print yes else no. Examples:

X
XX
XXX
XXXX

True

XX
XXX
XXXX

False

X
XX
XX

False

X
XX
XXXX

False


Constraint:
1 <= N <= 10^9


Test Case 1:

Input
1

Output
Yes

Test Case 2:

Input
3

Output
Yes

Test Case 3:

Input
2

Output
No
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int validStair = 0;
    bool done = false;
    for(int i = 1;i<=n;i++){
        validStair += i;
        if(n == validStair){
            cout <<"Yes";
            done = true;
            break;
        }
    }
    if(!done) cout <<"No";
}