class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zeros = 0, n = nums.size();
        vector<int> res(n, 0);
        for(int i:nums) {
            if(i!=0) prod*=i;
            else zeros++;
        }
        if(zeros>1)
        return res;
        for(int i=0; i<n; i++) {
            if(zeros==1) {
                if(nums[i]==0)
                res[i] = prod;
            }
            else 
            res[i] = prod/nums[i];
        }
        return res;
    }
};
