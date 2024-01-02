class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max_candies = 0;
        for(int i:candies)
        max_candies = max(max_candies, i);
        for(int i:candies) {
            bool isMax = (i+extraCandies)>=max_candies?true:false;
            res.push_back(isMax);
        }
        return res;
    }
};
