class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> m;
        for(auto a : nums){
            //if any number less than value of k
            if(a<k){
                return -1;
            }
            m[a]++;
            if((a!=k)&&(m[a]==1)){
                count++;
            }
        }
        return count;
    }
};