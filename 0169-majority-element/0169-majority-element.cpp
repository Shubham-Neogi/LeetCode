class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //Majority element always xist at the mid of the sorted version of Array
        int ans=nums[nums.size()/2];
        return ans;
    }
};