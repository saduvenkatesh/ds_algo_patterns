#include<iostream>
#include<vector>
using namespace std;

void generate_subArrays(int arr[], int n){    // Total no.of subarrays of array containg 'n' elements = n(n+1)/2
    int cnt=0;
    for(int i=0; i<n; i++){
        vector<int> sub_array;
        for(int j=i; j<n; j++){
            sub_array.push_back(arr[j]);
            cnt++;
            for(int k=0; k<sub_array.size(); k++){  // This for loop is used for printing subarrays, not for generating subarrays
                cout<<sub_array[k];
            }
            cout<<endl;
        }
    }
    cout<<"Number of sub arrays formed = "<<cnt;
}

int main(){
    int arr[]={1,2,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    generate_subArrays(arr,size);
}