// Find the number of sub arrays with sum equal to k

#include<iostream>
using namespace std;

// Brute Force : generate all sub arrrays and find number of sub arrays whose sum equal to k
void noOfsubarrays(int arr[], int n, int k){
    int sum, cnt=0;
    for(int i=0; i<n; i++){
        sum =0;
        for(int j=i; j<n; j++){
             sum = sum + arr[j];
             if(sum==k)
                cnt++;
        }
    }
    cout<<"Brute : no of sub arrays with sum equal to k : "<<cnt<<endl;
}

int noOfSubarraysLessThanOrEqualToK(int arr[], int n, int k){  // Better solution
    int l=0, r=0, sum=0,cnt=0; 
    while(r<n){
        sum = sum + arr[r];
        if(sum>k){
            sum = sum - arr[l];
            l++;
        }
        if (sum<=k){
            
            cnt++;
            r++;
        }                              
    }
    return cnt;
}

void optimalAlg(int arr[], int n, int k){
      int noOfSubarrays = noOfSubarraysLessThanOrEqualToK(arr,n,k) - noOfSubarraysLessThanOrEqualToK(arr,n,k-1);
      cout<<"Optimal : No of sub arrays with sum equal to k : "<<noOfSubarrays<<endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    noOfsubarrays(arr, size, k);
    optimalAlg(arr, size, k);
}