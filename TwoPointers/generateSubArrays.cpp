// Generate all possible sub arrays (template for generating all subarrays)

#include<iostream>
#include<vector>
using namespace std;

void generateAllSubarrays(vector<int> &arr){

    for(int i=0; i<arr.size(); i++){
        
        for(int j=i; j<arr.size(); j++){
            
            for(int k=i; k<=j; k++) // This extra loop is for printing sub arrays
               cout<<arr[k]<<" ";
            
            cout<<endl;
        }
    }
}

int main(){
    vector<int> arr ={3,5,1,9,2};
    generateAllSubarrays(arr);
}