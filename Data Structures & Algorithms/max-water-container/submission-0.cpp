class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        int i = 0, j=n-1;
        while(i<j){
            int d = j-i;
            if(heights[i]<=heights[j]){
                maxi = max(maxi, d*heights[i]);
                i++;
            }
            else{
                maxi = max(maxi, d*heights[j]);
                j--;
            }
        }
        return maxi;
    }
};
