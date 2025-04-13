class Solution {
public:
//Custom comparator
static string str;
static bool compare(char char1,char char2){
    //This will return true ,if position of character1 in string str is less than
    //the position of character2 in string str 
    //When true is returned ,then char1 will be placed before char2 in output string
    return (str.find(char1)<str.find(char2));
}
    string customSortString(string order, string s) {
        str=order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
string Solution::str;