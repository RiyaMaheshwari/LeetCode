class Solution {
public:
        int MAH(vector<int>& heights) {
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
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            ans = max(ans,(right[i]-left[i]-1)*(heights[i]));
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& m) {
            vector<int> row;
            int maximum=0;
        for(int i=0; i<m[0].size(); i++)
        {
             row.push_back(m[0][i]-'0'); 
        }
            maximum=MAH(row);
            for(int i=1; i<m.size(); i++)
            {
                    for(int j=0; j<m[0].size(); j++)
                    {
                            if(m[i][j]-'0'==0)
                              row[j]=0;
                            else
                                    row[j]++;
                                    
                    }
                    maximum=max(maximum, MAH(row));
            }
            return maximum;
    }
};