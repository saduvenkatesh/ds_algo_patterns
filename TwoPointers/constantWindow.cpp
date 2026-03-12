// Find max sum of constant window with contigous elements  (pattern : Two Pinter / Sliding Window, shrink & expansion)

#include<iostream>
#include<vector>
using namespace std;

void findMaxSum(vector<int> &arr, int k){
    int l=0, r=k-1;
    int n = arr.size();

    // Find sum of elements in first window
    int sum = 0;
    for(int i=l;i<=r;i++)
       sum = sum +arr[i];
    
    // Find sum of elemnets in other windows and compare to find maxSum
    int maxSum = 0;
    while(r<n){
        sum = sum - arr[l]; // Shrink array from left
        l++;
        sum = sum + arr[r]; // expand array from right
        r++;

        maxSum = max(maxSum, sum);
    }

    cout<<"max Sum = "<<maxSum<<endl;
}

int main (){
    vector<int> arr= {-1,2,3,3,4,5,10};
    int k=4;
    findMaxSum(arr,k);
}