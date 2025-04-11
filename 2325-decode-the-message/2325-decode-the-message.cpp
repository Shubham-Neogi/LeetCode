class Solution {
public:
    string decodeMessage(string key, string message) {
       char start='a';
       char mapping[280]={0};    //0 represents null

       for(auto ch:key){
           if(ch!=' ' && mapping[ch]==0){
               mapping[ch]=start;
               start++;
           }
       } 

       string ans;
       for(int i=0;i<message.length();i++){
           char ch=message[i];
           if(ch==' '){
               ans.push_back(' ');
           }else{
               char decodeChar=mapping[ch];
               ans.push_back(decodeChar);
           }
       }
       return ans;
    }
};