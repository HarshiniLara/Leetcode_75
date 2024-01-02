class Solution {
public:
    string reverseVowels(string s) {
        int l = 0, r = s.size()-1;
        while(l<r) {
            bool flag0 = false, flag1=false;
            char c1 = tolower(s[l]), c2 = tolower(s[r]);
            if(c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u')
            flag0 = true;
            if(c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u')
            flag1 = true;
            if(flag0 && flag1) {
                swap(s[l], s[r]);
                l++; r--;
            }
            else {
                if(flag0==false)
                l++;
                if(flag1==false)
                r--;
            }
        }
        return s;
    }
};
