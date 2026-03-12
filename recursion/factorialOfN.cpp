#include<iostream>
using namespace std;

// Factorial of n using recursion
int factorial_n(int n){                // Functional Way

    if (n==0) return 1;
    return n*factorial_n(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial_n(n);
}