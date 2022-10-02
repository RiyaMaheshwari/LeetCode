class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int c=0;
        expected = heights;
        sort(expected.begin(),expected.end());
        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i]!=expected[i])
                c++;
        }
        return c;
    }
};