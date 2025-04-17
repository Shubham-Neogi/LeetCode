class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(1){
           int found=s.find(part);
           if(found==string::npos)  break;
           //Now remove
           string LP=s.substr(0,found);
           string RP=s.substr(found+part.length(),s.size());
           //Now concat both parts
           s=LP+RP;
        }
        return s;
    }
};