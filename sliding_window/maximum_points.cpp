// Find the maximum points either from left or right consecutively with "k" number of elements

#include<iostream>
using namespace std;

void find_maximum_points(int arr[], int n, int k){
    
    int lsum=0, rsum=0, maxSum=0;
    // Find the sum of first "k" elements
    for(int i=0; i<k; i++)
       lsum = lsum + arr[i];
    maxSum = lsum;
    
    int rindex=n-1;
    for(int i=k-1; i>=0; i--){
         
        lsum = lsum - arr[i];
        rsum = rsum + arr[rindex];

        maxSum = max(maxSum, lsum + rsum);

        rindex--;

    }

    cout<<"Maximum points : "<<maxSum;
       
}

int main (){
    int arr[]={6,2,3,4,7,2,1,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=4;

    find_maximum_points(arr, size, k);
}