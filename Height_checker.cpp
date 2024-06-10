class Solution {
public:
    int heightChecker(vector<int>& heights) {
    int count=0;   
     vector<int>newHeight = heights;
     sort(newHeight.begin(),newHeight.end());

     for(int i=0;i<=heights.size()-1;i++)
     {
        if(heights[i]!=newHeight[i])
            count++;
     }
     return count;
    }
};
