class Solution {
public:
    int expand(string s , int i ,int j){
        int count=0;
        while((i>=0) && (j<s.length()) && (s[i]==s[j])){
            count++;
            i--,j++; //expanding
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount=0;
        for(int center=0;center<s.length();center++){
            //Case1:Odd length
            int OddCount=expand(s,center,center);
            //Case2:Even length
            int EvenCount=expand(s,center,center+1);
            totalCount=totalCount+OddCount+EvenCount; 
        }
        return totalCount;
    }
};