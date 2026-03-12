// Find the length longest palindromic substring 

#include<iostream>
using namespace std;

bool check_palindrome(string &s){  // Here we use &s , it will copy the original string, so it takes O(n) time and O(n) space
    int l=0, r=s.length()-1;
    while(l<r){
        if (s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}

void longest_palindrome(string &s, int n ){
    
    
    string longest_substr;
    for(int i=0; i<n; i++){
        string substr;
        
        for(int j=i; j<n; j++){
            substr = substr+s[j];
             
            // Check Palindrome condition
            if (check_palindrome(substr)){
                 if (substr.length()>longest_substr.length())
                    longest_substr = substr;
            }
            
            
        }
    }

    cout<<"Longest palindromic substring : "<<longest_substr<<endl;
    cout<<"Length of longest palindromic substring : "<< longest_substr.length();
}

int main(){
    string s = "saduabbbba";
    int size = s.length();
    longest_palindrome(s, size);
}