// Find the subarray with maximum sum with k elements

#include<iostream>
using namespace std;

// optimal solution
void maxSum_subArray(int arr[], int n, int k){
    
    int max_sum=0,sum=0;
    int l=0, r=k-1;
    for(int i=l; i<=r; i++) // Find sum of first k elements
      sum = sum +arr[i];
    max_sum = sum;
    cout<<sum<<endl;
    
    while(r<n-1){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        
        cout<<sum<<endl;
        max_sum = max(sum, max_sum);
        
    }

    cout<<"max sum = "<<max_sum;
      
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    maxSum_subArray(arr,size,k);
}