class Solution {
public:
    
    int optimalStrategy(vector<int>& nums, int i, int j){
        
        if(i > j)
            return 0;
        
        int c1 = 0;
        int c2 = 0;
        
        c1 = nums[i] + min(optimalStrategy(nums,i+2,j),optimalStrategy(nums,i+1,j-1));
        c2 = nums[j] + min(optimalStrategy(nums,i,j-2),optimalStrategy(nums,i+1,j-1));
       
        int ans = max(c1,c2);
        return ans;
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        int sum = 0;
        
        int myScore = optimalStrategy(nums, i, j);
        
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        
        if(myScore >= sum-myScore)
            return true;
        return false;
    }
};
