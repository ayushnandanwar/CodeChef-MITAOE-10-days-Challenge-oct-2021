/*
    Question :
    Print the total number of combination that is possible 
    with 1s and 2s such that it sums up to n

    Example:
    Input 
    3
    Output 
    3

    Explanation: 
    1 1 1 
    1 2 
    2 1 

    Hence the total is 3 
    ........................................................
    Happy coding ! 🤗
*/

// #include <iostream>
// using namespace std;

// int sum(int a[],int n){
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//         sum += a[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     int count = 0;
//     cin >> n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         a[i] = 1;
//     }
//     count++;
//     int size = n;
//     for(int i = 0;i<size;i++){
//         a[size -2] += a[size - 1]; 
//         a[size-1] = 0;
//         count += size;
//         size -= 2;;
//     }
//     cout <<count-1;
// }

#include<bits/stdc++.h>
using namespace std;


int sum = 0;


// For explaination purpose
void printSeq(int N, vector<int> v){
	if(N==0){
		for(int i=0; i<v.size(); i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(N<0){
		return;
	}
	v.push_back(1);
	printSeq(N-1,  v);
	
	if(N<2){
		return;
	}
	v.pop_back();
	v.push_back(2);
	printSeq(N-2, v);
}

// Count the number of combination by recursion 
void countSeq(int N){
	if(N==0){
		sum+=1;
		return;
	}
	if(N<0){
		return;
	}
	countSeq(N-1);
	if(N<2){
		return;
	}
	countSeq(N-2);
}

int fact(int n){
	if(n<=1){
		return 1;
	}
	int ans=1;
	for(int i=1; i<=n; i++){
		ans*=i;
	}
	return ans;
}


// Solution by permutation and combination 
int combSeq(int n){
	cout<<endl;
	int ans = 0;
	int till = (n/2);
	if(n%2 != 0){
		till++;
	}
	for(int i=0; i<=n-till; i++){
		ans += fact(n-i) / ( fact(n-(2*i)) * fact(i) );
		cout<<"("<<n-i<<"/("<<n-(2*i)<<"*"<<i<<"))";
		cout<<"("<<fact(n-i)<<"/("<<fact(n-(2*i))<<"*"<<fact(i)<<"))"<<endl;
		cout<<"ans = "<<ans<<endl;
	}
	return ans;
}

int main(){
	vector<int> v;
	printSeq(5, v);
	countSeq(5);
	cout<<"Total count by recursion  = "<<sum<<endl;
	cout<<"Total numbers of seq = "<<combSeq(5)<<endl;
}