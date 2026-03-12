// Find the maximum length of subarray at most two types of numbers

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int find_length(vector<int> &arr, int k){  // Brute
    
    
    int max_len=0;
    for(int i=0; i<arr.size();i++){
        
        set<int> st;
        for(int j=i; j<arr.size(); j++){
            st.insert(arr[j]);

            if(st.size()<=k){
               max_len = max(max_len, j-i+1);
            }
            else break;
        }
    }

    return max_len;
}

int main(){

    vector<int> arr= {3,3,3,1,2,1,1,2,3,3,4};
    int k=2;

    cout<<find_length(arr, k);
}