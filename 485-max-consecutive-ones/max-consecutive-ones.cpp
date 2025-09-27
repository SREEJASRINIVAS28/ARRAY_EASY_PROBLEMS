class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,maxi=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==1){
                i+=1;
            }
            else{
                maxi=max(i,maxi);
                i=0;
            }
        }
        return maxi=max(i,maxi);
    }
};