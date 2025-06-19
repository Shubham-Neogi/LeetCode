class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int count=0;
        int start=0;
        for(int i=1;i<nums.size();i++){
            if(nums[start]-nums[i]>k){
                count++;
                start=i; //update the start
            }
        }
        return count+1;
    }
};