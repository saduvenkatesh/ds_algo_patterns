#include<iostream>
using namespace std;

// Prints 1 to n using back tracking
void one_to_num(int i, int num){ // i=num

    if(i<1) // Base condition
       return;
    one_to_num(i-1,num); // Recursion
    cout<<i<<" ";
}

// prints n to 1 using back tracking

void num_to_one(int i, int num){ // i=1

    if(i>num) // Base condition
       return;
    num_to_one(i+1,num); // Recursion
    cout<<i<<" ";
}

int main(){
    int num;
    cin>>num;
    one_to_num(num,num); 
    cout<<endl;
    num_to_one(1,num);

    return 0;
}