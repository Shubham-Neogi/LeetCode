class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)!=string::npos){
            //if foumd
           int found=s.find(part);
           //Now remove
           string LP=s.substr(0,found);
           string RP=s.substr(found+part.length(),s.size());
           //Now concat both parts
           s=LP+RP;
        }
        return s;
    }
};