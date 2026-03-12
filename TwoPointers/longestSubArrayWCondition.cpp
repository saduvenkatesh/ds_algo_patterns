// Find the longest subarray with sum less than or equal to k=14 (pattern : Lognest sub array problem with condition )

#include<iostream>
#include<vector>
using namespace std;

void longestSubArray(vector<int> &arr,int k){
    int maxlen=0;
    for(int i=0; i<arr.size(); i++){
        
        int sum=0;
        
        for(int j=i; j<arr.size(); j++){

            sum = sum + arr[j];
            
            if(sum<=k)
              maxlen = max(maxlen,j-i+1);
            else 
                break; // optimization for : if sum > k , loop will break out and same time
        }
    }

    cout<<maxlen<<endl;
}

int main (){
    vector<int> arr = {12,4,2,-2,4};
    int k=14;

    longestSubArray(arr,k);
}