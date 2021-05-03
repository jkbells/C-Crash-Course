#include<iostream>
using namespace std;
int countpathmaza(int n,int i,int j){
    if(i==n && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return countpathmaza(n,i+1,j) + countpathmaza(n,i,j+1);
}
int main()
{
    cout  << countpathmaza(3,0,0) << endl;
    return 0;
}