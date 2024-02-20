class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)      //0 1 3
        {
            if(nums[i]!=i)     //0!=0  1!=0
            return i;           
        }
        return nums.size();
    }
};
