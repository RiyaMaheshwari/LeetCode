class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> left;
        stack<pair<int, int>>st;
        int pseudo_index=-1;
        // nearest smaller to left
        for(int i=0; i<heights.size(); i++)
        {
            if(st.size()==0)
                left.push_back(pseudo_index);
            else if(st.size()>0 && st.top().first<heights[i])
                left.push_back(st.top().second);
            else if(st.size()>0 && st.top().first>=heights[i])
            {
                while(st.size()>0 && st.top().first>=heights[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                    left.push_back(-1);
                else
                    left.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        vector<int> right;
        stack<pair<int, int>>st2;
        pseudo_index=n;
        // nearest smaller to right
        for(int i=heights.size()-1; i>=0; i--)
        {
            if(st2.size()==0)
                right.push_back(pseudo_index);
            else if(st2.size()>0 && st2.top().first<heights[i])
                right.push_back(st2.top().second);
            else if(st2.size()>0 && st2.top().first>=heights[i])
            {
                while(st2.size()>0 && st2.top().first>=heights[i])
                {
                    st2.pop();
                }
                if(st2.size()==0)
                    right.push_back(pseudo_index);
                else
                    right.push_back(st2.top().second);
            }
            st2.push({heights[i], i});
        }
         reverse(right.begin(), right.end());
        
        //width
        /*vector<int> width;
        for(int i=0; i<heights.size(); i++)
            width[i]=right[i]-left[i]-1;
        //area
         vector<int> area;
        for(int i=0; i<heights.size(); i++)
            area[i]=width[i]*heights[i];
        
        int max=INT_MIN;
        for(int i=0; i<area.size(); i++)
        {
            if(area[i]>max)
                max=area[i];
        }*/
        
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            ans = max(ans,(right[i]-left[i]-1)*(heights[i]));
        }
        return ans;
    }
};