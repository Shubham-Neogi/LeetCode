class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string str=to_string(i);
            int leng=str.length();
            if(leng%2!=0){
                continue;  //odd length
            } 
            //even length
            int part=leng/2;  //Divide into 2 parts(2 halves)
            int leftSum=0,rightSum=0;
            for(int i=0;i<part;i++){
                leftSum+=str[i]-'0';
            }
            for(int i=part;i<leng;i++){
                rightSum+=str[i]-'0';
            }
            if(leftSum==rightSum){
                count++;
            }
        }
        return count;
    }
};