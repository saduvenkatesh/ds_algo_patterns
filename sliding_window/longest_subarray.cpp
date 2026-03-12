
#include<iostream>
#include<vector>
using namespace std;

// Brute force approach for finding the length and elements of subarray whose sum is less than or equal to k
void length_longest_subarray(int arr[], int n, int max_sum){    
    int  max_len=0;
    pair<int,int> idx;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if (sum<=max_sum){  // To find the indices of subarray for purpose of printing subarray
                
                if (j-i+1>max_len){ 
                    idx.first=i;
                    idx.second=j;
                }
                max_len = max(max_len, j-i+1);
            }
        }
    }
    cout<<"Brute Force alg : max len = "<<max_len<<endl;

    cout<<"sub array : ";
    for(int i=idx.first; i<=idx.second; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// sliding window (better solution)
void better_longest_subarray(int arr[], int n, int max_sum){
    int l=0, r=0, sum=0, max_len=0;

    while(r<n){
        sum = sum + arr[r];
        while(sum>max_sum){
            sum = sum - arr[l];  // shrink
            l++;
        }

        if (sum<=max_sum){
            
            max_len = max(r-l+1, max_len);  // Expand
            r++;
        }
    }

    cout<<"Better alg : max len = "<<max_len<<endl;
}

// sliding window (optimal solution)
void optimal_longest_subarray(int arr[], int n, int max_sum){
    int l=0, r=0, sum=0, max_len=0;

    while(r<n){
        sum = sum + arr[r];
        if(sum>max_sum){            // Only "while" is replaced with "if"
            sum = sum - arr[l];
            l++;
        }

        if (sum<=max_sum){
            
            max_len = max(r-l+1, max_len);
            r++;
        }
    }

    cout<<"optimal alg : max len = "<<max_len<<endl;
}


int main(){
    int arr[]={1,2,3,4,5}, max_sum = 15;
    int size = sizeof(arr)/sizeof(arr[0]);
    length_longest_subarray(arr,size, max_sum);
    better_longest_subarray(arr, size, max_sum);
    optimal_longest_subarray(arr, size, max_sum);
}

