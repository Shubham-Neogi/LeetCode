class Solution {
public:
double SlidingWindow(vector<int>& nums, int k){
    int i=0,j=k;
    int sum=0;
    //first window
    for(int y=0;y<j;y++){
        sum+=nums[y];
    }
    //Now move the window...
    int maxSum=sum;
    while(j<nums.size()){
        sum-=nums[i];
        sum+=nums[j];
        i++,j++;
        maxSum=max(maxSum,sum);
    }
    double maxAvg=(double(maxSum))/k;
    return maxAvg;

}
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=SlidingWindow(nums,k);
        return ans;
    }
};