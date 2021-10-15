/*
    ---Day 4---

    Problem Statement 1

    Crack the Lock

    You will be provided with the current state and the required state(password)
    of a combination lock. The password will be an alphanumeric sequence, provided 
    by the user. The transition from current to required state can be achieved by
    rotation of each dial to match the required state, in either clockwise or anticlockwise 
    sense. Task is to find out the minimum number of rotations required, for all dials
    combined, to reach the required state.

    Input
    t -> no. of test cases
    x -> length of the combination lock
    c[x] -> current state of the combination lock
    r[x] -> password of the combination lock
    where c[x] and r[x] can both contain a sequence with letters from a,b,c........x,y,z and digits from 0,1,2.....7,8,9.

    Output
    rot -> minimum number of rotations to reach the password

    Testcase
    2

    Input :
    5
    a1z3c
    z9p9z
    Output :
    20
    (as a->z requires 1 rotations anticlockwise;1->9 requires 2 rotations 
    anticlockwise;z->p requires 10 rotations anticlockwise; 3->9 requires 4
     rotations minimum and c->z requires 3 rotations)

    Input:
    3
    a9z
    z1a
    Output:
    4
    (as a->z requires 1 rotation anticlockwise; 9->1 requires 2 rotations
     clockwise; z->a requires 1 clockwise)
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char c[n],r[n];
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    for(int i=0;i<n;i++){
        cin >> r[i];
    }
    int count = 0;
    int antiCount;
    int clockCount;
    for(int i=0;i<n;i++){
        if(c[i] >= 'a' && c[i]<= 'z'){  // for characters
            // cout <<"first if ";
            antiCount = 0;
            clockCount = 0;
            char tc = c[i],tr = r[i];
            while(c[i] != r[i]){  // rotating clockwise
                // cout <<clockCount;
                if(c[i] == 'z'){
                    c[i] = 'a';
                    clockCount++;
                }
                else{
                    c[i]++;
                    clockCount++;   
                }
            }
            while(tc != tr){   // rotating anticlockwise
                if(tc == 'a') 
                {
                tc = 'z';
                antiCount++;
                }
                else{
                tc--;
                antiCount++;
                }
            }
            // cout <<antiCount<<endl;      
            if(clockCount < antiCount){
                count += clockCount;
            }
            else count += antiCount;
        }
        else{                 // for numbers
            // cout << "esle ";
            antiCount = 0; 
            clockCount = 0;
            char tc = c[i],tr = r[i];
            while(c[i] != r[i]){
                if(c[i] == '9'){
                    c[i] = '0';
                    clockCount++;
                }
                else{
                c[i]++;
                clockCount++;
                }
            }
            // cout << clockCount<<endl;
            while(tc != tr){
                if(tc == '0') 
                {
                tc = '9';
                antiCount++;
                }
                else{
                tc--;
                antiCount++;
                }
            }
            // cout <<antiCount<<endl;
            if(clockCount < antiCount){
                count += clockCount;
                // cout <<count;
            }
            else{
            count += antiCount;
            // cout <<count;
            } 
        }
        // cout << count<<endl;
    }
    cout <<count;
}


// int main(){
//     int n;
//     cin >> n;
//     string c,r;
//     cin >>c;
//     cin >>r;
//     if(c == "a9z" && r == "z1a"){
//         cout << 4;
//     }
//     else if(c == "a1z3c" && r == "z9p9z"){
//         cout << 20;
//     }
    
// }