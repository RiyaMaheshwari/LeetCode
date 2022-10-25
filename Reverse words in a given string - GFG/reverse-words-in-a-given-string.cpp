//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector<string> v;
        string ans="";
        int i;
        int n=s.size();
        for(i=0; i<n; i++)
        {
            if(s[i]=='.')
                continue;
            string temp;
            while(i<n && s[i]!='.')
            {
                temp=temp+s[i];
                i++;
            }
            v.push_back(temp);
        }
        
        reverse(v.begin(), v.end());
        
        for(i=0; i<v.size(); i++)
        {
            ans=ans+v[i];
            ans=ans+'.';
        }
        ans.pop_back();
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends