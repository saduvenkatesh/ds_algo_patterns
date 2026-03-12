#include<bits/stdc++.h>
using namespace std;

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num : s)
        {
            if(!s.count(num - 1))
            {
                int current = num;
                int len = 1;

                while(s.count(current + 1))
                {
                    current++;
                    len++;
                }

                longest = max(longest, len);
            }
        }

        return longest;
    }
};