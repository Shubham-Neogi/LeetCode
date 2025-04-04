class Solution {
public:
int findPivotIndex(vector<int> &nums ,int n){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(s==e) return s;  //corner case
        if( nums[mid]<nums[mid-1]){
            return mid-1;
        }else if(nums[mid]>nums[mid+1]){
            return mid;
        }else if(nums[s]>nums[mid]){
            e=mid-1;  //shift left
        }else{
            s=mid+1;  //shift right
        }
    }
    return -1;
}

int binarySearch(vector<int> &nums,int s,int e,int target){
     //Binary search
               while(s<=e){
                   int mid=s+(e-s)/2;
                    if(target==nums[mid]){
                    return mid;
                }else if(target>nums[mid]){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }
        return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1;
        int pivotIndex=findPivotIndex(nums,n);  
        int ans=-1;
        //Search in part A
        if(target>=nums[s] && target<=nums[pivotIndex]){
            ans=binarySearch(nums,0,pivotIndex,target);
        }else{  //Search in part B
            ans=binarySearch(nums,pivotIndex+1,n-1,target);
        }
        return ans;
    }
};