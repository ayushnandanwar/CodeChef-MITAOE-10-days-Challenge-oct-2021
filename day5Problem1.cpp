/*
    Problem statement 1
    Difficulty: Easy

    You have a friend who sends you meme regularly. Today he sent 
    you another meme which consists of lower case English alphabets,
    and now you are deciding how many 😂 emoji you are going to send him.
    But you want to send just the right amount of 😂 emoji. So you 
    devised a plan, you will send 😂 emoji equal to the number of times 
    "fun" occurs as a sub-sequence in the given string. If there is no 
    "fun" print 😶.

    Test case 1

    Input 

    fun

    Output 
    😂

    Test case 2

    Input

    ffun

    Output
    😂😂

    Test case 3

    Input

    fufnun

    Output
    😂😂😂😂

    Test case 4

    Input

    xyz

    Output
    😶

    Constraints:

    Subtask 1
    1 <= n <= 100


    Subtask 2
    1 <= n <= 100000

    Don't know how to put emoji?
    Just copy them 😂😶 from here and paste in your favourite editor.
    Doesn't work?
    Simply use :) and :
*/
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >>s;
    int len = s.length() -2;
    int size = s.length();
    int count = 0;
    for(int i=0;i<len;i++){
        if(s[i] == 'f')
        for(int j=i+1;j<size;j++){
                if(s[j] == 'u'){
                    for(int k=j+1;k<size;k++){
                        if(s[k] == 'n'){
                            count++;
                        }
                    }
                }
            }
        }
        if(count)
        for(int i=0;i<count;i++){
            // cout <<"😂";
            cout <<":)";
        }
        else{
            // cout <<"😶";
            cout <<":";
        }
}
// #include <iostream>
// using namespace std;

// int main(){
//     string s;
//     cin >>s;
//     int len = s.length() -2;
//     int size = s.length();
//     int count = 0;
//     for(int i=0;i<len;i++){
//         // bool u = false;
//         // bool n = false;
//         string temp = s;
//         if(s[i] == 'f')
//         for(int j=i+1;j<size;j++){
//                 if(temp[j] == 'u'){
//                     // if(!n)
//                     // u = true;
//                     // temp[j] = '0';
//                     // int ncount = 0;
//                     for(int k=j+1;k<size;k++){
//                         if(temp[k] == 'n'){
//                             count++;
//                         }
//                     }
//                 }
//                 // if(!n)
//                 // if(temp[j] == 'n'){
//                 //     // temp[j] = '0';
//                 //     if(u)
//                 //     n = true;
//                 // }
//                 // if(u && n) {
//                 //     count++;
//                 //     u =false;
//                 //     n = false;

//                 //     // temp = s;
//                 // }

//             }
//             // s[i] = '0';
//         }
        
//     cout <<count;
    
// }