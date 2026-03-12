// Find the most consecutive ones with k zeroes replacement

#include<iostream>
#include<vector>
using namespace std;

int find_most_consecutive_ones(vector<int> &arr,int k ){  // Brute Force
    int noOfZeroes, cnt=0;
    for(int i=0; i<arr.size();i++){
        noOfZeroes=0;
        for(int j=i; j<arr.size(); j++){
            if (arr[j]==0) noOfZeroes++;

            if(noOfZeroes<=k){
                 cnt  = max(cnt, j-i+1);
            }
            else break; // For breaking innerloop whenever number of zeroes greater than k
        }
    }
    return cnt;
}

int optimal_find_most_consecutive_ones(vector<int> &arr, int k){
    int l=0, r=0, noOfZeroes=0, cnt=0;

    while(r<arr.size()){

        if (arr[r]==0) noOfZeroes++;

        while(noOfZeroes>k){              // Eliminating zeroes whenever greater than k
            if (arr[l]==0) noOfZeroes--;
            l++;
        }

        if(noOfZeroes<=k) cnt= max(cnt, r-l+1);

        r++;
            
    }

    return cnt;
}


int main(){
    
    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<"Brute Alg : "<<find_most_consecutive_ones(arr, k)<<endl;
    cout<<"Optimal Alg : "<<optimal_find_most_consecutive_ones(arr, k);
}