#include<iostream>
#include<set>
#include<map>

using namespace std;

int main(){

    // set<int> nums = {1,2,1,1,2,2,3,3,3};

    // for(int val : nums) cout<<val<<endl;
    // cout<<"The size of nums set is "<<nums.size()<<endl;
    // nums.insert(3);
    // cout<<"The new size of nums set is "<<nums.size()<<endl;

    map <int , string> basket;

    basket[2];

    for(auto freq : basket) cout<<freq.first<<","<<freq.second;
}