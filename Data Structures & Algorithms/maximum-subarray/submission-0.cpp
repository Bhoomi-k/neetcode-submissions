class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = INT_MIN;
        int i=0;
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += nums[j];
            maxsum = max(maxsum, sum);
            if(sum<0){
                i = j+1;
                sum = 0;
            }
        }
        return maxsum;
    }
};
