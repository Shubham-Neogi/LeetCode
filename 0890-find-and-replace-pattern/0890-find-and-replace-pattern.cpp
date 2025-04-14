class Solution {
public:
    // This function normalises all the words and patterns into a similar format.
    //So that we can comapre them and find the solution
    void createMapping(string &str){
        char start='a';
        char mapping[280]={0};  //cchar array
        for(auto ch: str){
            if(mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        //And now update the string
        for(int i=0;i<str.length();i++){
            char ch=str[i];  //current charcter
            str[i]=mapping[ch];   //mee-->abb
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        //first normalise the pattern
        createMapping(pattern);
        //Now play with words(given)
        for(string s : words){
            string temp=s;  //temp string
            //Normalise temp string
            createMapping(temp);
            if(temp==pattern){
                //It means thet 's' string was a valid match (valid answer)
                ans.push_back(s);
            }
        }
        return ans;
    }
};