class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;  //for traversing the whole array
        int j=0;  //for storing unique elements
        while(i<nums.size()){
            if(nums[i]==nums[j]){
                i++;
            }else{
                j++;
                nums[j]=nums[i];
                i++;
            }
        }
        return j+1;
    }
};