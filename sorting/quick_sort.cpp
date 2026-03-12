#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> quickSort(vector<int>& nums)
    {
        int low=0, high = nums.size()-1;
        quicksortHelper(nums,low,high);

        return nums;
    }

    void quicksortHelper(vector<int>& nums,int low, int high)
    {
        if(low<high)
        {
            int pindex = partition(nums,low,high);

            quicksortHelper(nums,low,pindex-1);
            quicksortHelper(nums,pindex+1, high);
        }
    }

    int partition(vector<int>& nums, int low, int high)
    {
        int pivot = nums[low];

        int i=low, j=high;

        while(i<j)
        {
            while(nums[i]<=pivot && i<=high-1) i++;

            while(nums[j]>pivot && j>=low+1) j--;

            if (i<j) swap(nums[i], nums[j]);
        }

        swap(nums[low],nums[j]);

        return j;
    }
};
