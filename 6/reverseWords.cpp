class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int i = s.size()-1, flag = 0;
        string temp = "";
        while(i>=0) {
            while(i>=0 && s[i]!=' ') {
                flag = 1;
                temp+=s[i];
                i--;
            }
            if(flag==1) {
                reverse(temp.begin(), temp.end());
                res+=(temp+" ");
                temp = "";
                flag = 0;
            }
            i--;
        }
        return res.substr(0, res.size()-1);
    }
};
