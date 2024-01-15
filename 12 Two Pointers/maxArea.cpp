class Solution {
public:
    int maxArea(vector<int>& height) {
        int cap = 0, l = 0, r = height.size()-1;
        while(l<r) {
            int unit = min(height[l], height[r]);
            cap = max(cap, unit*(r-l));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return cap;
    }
};
