// Find the longest substring without repeating characters

#include<iostream>
using namespace std;

// Brute Force
void longest_substr(string &s){ 
    int max_len=0;
    for(int i=0;i<s.length(); i++){
        string substr="";
        int hash[255]={0}, len=0;
        for(int j=i; j<s.length(); j++){
             if(hash[s[j]] == 1) break;
             len = j-i+1;
             max_len = max(len, max_len);
             hash[s[j]]=1;
        }
    }

    cout<<"The length of longest substring without repeating characters : "<<max_len;
}

//Optimal alg
void optimal_longest_substr(string &s){
    int hash[256] = {-1};
    int n=s.length(), l=0, r=0, max_len =0;
    int len=0;
    while(r<n){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l = hash[s[r]]+1;
            }
            len = r-l+1;
            max_len = max(len, max_len);
            hash[s[r]]=r;
            r++;

        }
    }

    cout<<"The length of longest substring without repeating characters : "<<max_len;
}

int main(){
    string s ="sadusaduvenkyvenky"; 
    optimal_longest_substr(s); // saduvenky , length = 9
}