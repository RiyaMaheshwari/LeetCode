class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> v;
        stack<pair<int,int>>st;
        
        for(int i=temp.size()-1; i>=0; i--){
            if(st.size()==0)
                v.push_back(0);
            else if(st.size()>0 && st.top().first>temp[i])
                v.push_back(st.top().second-i);
            else if(st.size()>0 && st.top().first<=temp[i])
            {
                while(st.size()>0 && st.top().first<=temp[i])
                    st.pop();
                if(st.size()==0)
                    v.push_back(0);
                else
                    v.push_back(st.top().second-i);
            }
            st.push({temp[i], i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
};