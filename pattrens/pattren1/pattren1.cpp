// Rectangle pattern 

#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout <<"Enter the rows and cols" << endl;
    cin >> rows >> cols;
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}