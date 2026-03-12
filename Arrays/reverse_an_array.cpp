#include<iostream>
using namespace std;

void reverse_array(int arr[], int n){// Reverse an array using two pointer technique

    int i=0;
    while(i<n)
       swap(arr[i++],arr[n--]);
}
void reverse_array(int arr[],int l,int r){ // Using Two pointer with Recursion
    
    
    if (l>=r) return;
    swap(arr[l],arr[r]);
    reverse_array(arr,++l,--r);


}

void printArray(int arr[],int n){
    for (int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    
}

int main(){
    int arr[]={2,4,1,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before : ";
    printArray(arr,n);

    reverse_array(arr,n-1);

    cout<<endl<<"After  : ";
    printArray(arr,n);
    
}