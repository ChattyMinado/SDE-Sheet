// q->https://leetcode.com/problems/maximum-subarray/submissions/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int max_val=INT_MIN;
        int Curr_Sum=0;
        
        
        for(int i=0;i<n;i++){
            
            Curr_Sum+=nums[i];
            max_val=max(max_val,Curr_Sum);
            
            if(Curr_Sum<0){
                Curr_Sum=0;
            }
            
        }
        
        
        return max_val;
    }
};
