class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=i){
                return i;
            }
            i+=1;
        }
        return i;
    }
};