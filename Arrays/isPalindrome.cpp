#include<iostream>
using namespace std;

// Check whether a string is palindrome or not

bool isPalindrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;

    return isPalindrome(i+1,s);
}

int main(){

    string s1 = "MADAM";
    string s2 = "MADaM";
    cout<<isPalindrome(0,s1);
}