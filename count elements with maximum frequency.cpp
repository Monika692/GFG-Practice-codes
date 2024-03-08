class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int>map;
    int maxi=0,count=0;
    for(int val:nums)
    {
        map[val]++;
        maxi=max(maxi,map[val]);
    }
    for(const auto&pair:map)
    {
        if(pair.second==maxi)
        count+=pair.second;
    }
    return count;
    }
};
