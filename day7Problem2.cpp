/*
    Day 7

    Problem Statement 2
    There are N Points in 2d Cartesian Plane You Have To Calculate The Area Of 
    largest Triangle In The Cartesian Plane and also calculate the largest perimeter 
    of triangle formed in the plane

    Cartesian Plane is Given in form of 2d arrray with n  rows and 2 column where
    first column is for x coordinate and second row is for y coordinate

    Input Format:
    Take input for n rows and in each row take input for x and y coordinate.

    Output Format:
    first line of output contains the largest area and second line contains largest perimeter.

    Constraints:
    N>=3 and N<=100
    coordinate values can also have negative values because we are considering 
    cartesian plane

    Test Cases:

    Input: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
    Output: Area:2.00 and Perimter:4+2*(underroot 2)
*/
#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    float pts[n][2];
    for(int i=0;i<n;i++){
        cin >>pts[i][0]>>pts[i][1];
    }
    float tr[3][2];
    float area,perimeter;
    if(n == 3){
        for(int i=0;i<3;i++){
            tr[i][0] = pts[i][0];
            tr[i][1] = pts[i][1];
        }
        area = (1/2)*(tr[0][0]*(tr[1][1] - tr[1][2]) + tr[0][1]*(tr[1][2] - tr[1][0]) + tr[0][2]*(tr[1][0] - tr[1][1]));
        perimeter = sqrt((tr[0][0]*tr[0][0] - tr[1][0]*tr[1][0])) + sqrt((tr[0][0]*tr[0][0] - tr[1][0]*tr[1][0])) + sqrt((tr[0][0]*tr[0][0] - tr[1][0]*tr[1][0]));
        cout <<area;
    }
}