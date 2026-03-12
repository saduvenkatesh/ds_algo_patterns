#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v ={10,20,30,40,50};

    for(auto it =v.begin(); it!=v.end();++it) // prints all elements of vector
        cout<<*it<<" ";

    cout<<endl;

    for(auto it=v.rbegin(); it!=v.rend();++it) // prints reverse order of elements in vector
        cout<<*(it)<<" ";
    cout<<endl;

    for(auto it : v)  // for each loop , prints all elements in vector
       cout<<it<<" ";
    return 0;
}