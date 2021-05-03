#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n == 0){
        return 1;
    }

    int prevfact = factorial(n-1);
    return n*prevfact;
}
int main()
{
    cout << factorial(4) << endl;
    return 0;
}