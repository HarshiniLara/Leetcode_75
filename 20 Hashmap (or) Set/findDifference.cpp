class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end()), set2(nums2.begin(), nums2.end());
        vector<vector<int>> answer(2);
        for(auto it=set1.begin(); it!=set1.end(); ++it) {
            if(set2.find(*it)==set2.end())
            answer[0].push_back(*it);
        }
        for(auto it=set2.begin(); it!=set2.end(); ++it) {
            if(set1.find(*it)==set1.end())
            answer[1].push_back(*it);
        }
        return answer;
    }
};
