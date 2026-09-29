class Solution {
public: // [1,8,6,2,5,4,8,3,7]
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int width=0, i=0, j=height.size()-1;
        int area=0;
        while(left<right)
        {
            int cheight,cwidth,carea;
            cwidth=right-left;
            cheight=min(height[right],height[left]);
            carea= cwidth*cheight;
            if(carea>area)
            {
                area=carea;
                i=left;
                j=right;
            }
            (height[left]<height[right])?++left:--right;
        }
        return area;
    }
};