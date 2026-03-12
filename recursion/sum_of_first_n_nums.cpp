#include<iostream>
using namespace std;

// sum of firs 'n' numbers from 1
void sumOfNumbers(int sum, int n){  // Parameterised way 
    if (n<1){
        cout<<sum;
        return;
    }
    
    sumOfNumbers(sum+n,n-1);
}

int sumOfNumbers(int n){   // Functional Way => function itself return the answer, sum of first n numbers

    if (n==0) return 0;
    
    return n + sumOfNumbers(n-1);

}

int main(){
    int n;
    cin>>n;
    cout<<sumOfNumbers(n);
}