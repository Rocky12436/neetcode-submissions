class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0 ;
        int left = 0 ;
        int right = heights.size()-1;
        while(left < right )
        {
            int h = min(heights[left],heights[right]);
            int w = right - left ;
            int area = h*w;
            maxArea = max(maxArea,area);
            if(heights[left]<=heights[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};
