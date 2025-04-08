class Solution {
public:

bool checkPalindrome(string s , int start , int end){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }else{
            start++,end--;
        }
    }
    return true;
}
   
    bool validPalindrome(string s) {
        int n=s.length();
        int start=0,end=n-1;
        while(start<=end){
            if(s[start]==s[end]){
                start++,end--;
            }else{
                //if(s[start]!=s[end])
                //only 1 removal allowed
                // check palindrome for remaining string after removal
                //case 1 start charcter -> removed
                bool ans1=checkPalindrome(s,start+1,end);
                //case 2 end charcter -> removed
                bool ans2=checkPalindrome(s,start,end-1);
                return (ans1||ans2);
            }
        }
        return true;
    }
};