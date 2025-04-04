class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;  //Total elements
        int s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            int rowIndex=m/col;
            int colIndex=m%col;
            int currentNum=matrix[rowIndex][colIndex];
            if(currentNum==target){
                return true;
            }else if(currentNum<target){
                //Shift Right
                s=m+1;
            }else{
                //Shift left
                e=m-1;
            }
        }
        return false;
    }
};