/*
    Problem statement 2
    You have recently joined the office. And Michael has given you your 
    first task. You have to make a digital clock. It's upto you how you 
    want to do it. There is only one condition it has to look cool.
    Input
    you will be given a 4 letter string, describing the 24 hours format.

    Output
    Return output in the seven segment format
    ....  ....  ....  ....
    .  .  .  .  .  .  .  .
    .  .  .  .  .  .  .  .
    ....  ....  ....  ....
    .  .  .  .  .  .  .  .
    .  .  .  .  .  .  .  .
    ....  ....  ....  ....

    Test case 1
    Input
    1900

    Output
    1234567891123456789012
    .  ....   ....  .... 1
    .  .  .   .  .  .  . 2
    .  .  .   .  .  .  . 3
    .  ....   .  .  .  . 4
    .     .   .  .  .  . 5
    .     .   .  .  .  . 6
    .  ....   ....  .... 7 

    Explanation
    In the input you are given 7pm in 24 hours format.
*/
#include <iostream>
using namespace std;

// int main(){
//     string s;
//     cin >>s;
    
//     for(int i=1;i<=7;i++){
//         for(int j=1;j<=23;j++){
//             if(j == 5 || j == 6 || j == 11 || j == 12 || j == 13 || j == 18 || j == 19){
//                 cout <<" ";
//             }
//             else{
//                 if(i == 1 || i == 4 || i == 7){
//                     cout <<".";
//                 }
//                 else{
//                     if(j == 1 ||j == 4 || j == 7 || j== 10 || j == 14 || j == 17 || j == 20 || j == 23)
//                     cout <<".";
//                     else cout <<" ";
//                 }
//             }
            
//         }
//         cout <<endl;
//     }
// }

void s1(int num)
{
	if(num==1)
		cout<<"   . ";
	else if(num==4||num==6)
		cout<<".    ";
	else	
		cout<<".... "; 
}

void s23(int num)
{
	if(num==0||num==8||num==9)
		cout<<".  . ";
	else if(num==2||num==3||num==7||num==1)
		cout<<"   . ";
	else
		cout<<".    ";
}

void s4(int num)
{
	if(num==1||num==7)
		cout<<"   . ";
	else if(num==0)
		cout<<".  . ";
	else
		cout<<".... "; 
}

void s56(int num)
{
	if(num==2)
		cout<<".    ";
	else if(num==6||num==8||num==0)
		cout<<".  . ";
	else
		cout<<"   . ";
}

void s7(int num)
{
	if(num==1||num==4||num==7||num==9)
		cout<<"   . ";
	else 
		cout<<".... ";
}

int main()
{
	string str;
  	cin>>str;
  	for(int i=0;i<str.size();i++)
  		s1(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s23(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s23(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s4(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s56(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s56(str[i]-'0');
  	cout<<endl;
  	for(int i=0;i<str.size();i++)
  		s7(str[i]-'0');
}