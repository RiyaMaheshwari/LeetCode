class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
        int n=h.size();
            stack<int> st;
            vector<int> v(n,0);
            for(int i=n-1; i>=0; i--)
            {
                  while(!st.empty() && st.top()<=h[i])
                  {
                          v[i]++;
                          st.pop();
                  }
                  if(!st.empty())
                  {
                          v[i]++;
                  }
                    st.push(h[i]);
            }
            return v;
    }
};