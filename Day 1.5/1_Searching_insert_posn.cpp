#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        while ( i <= j){
            int mid = i + (j-i)/2;
            if(nums[mid] == target){
                return mid;
            }else if(target > nums[mid]){ 
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return i;
    }
};