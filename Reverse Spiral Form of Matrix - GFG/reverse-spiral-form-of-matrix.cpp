//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&a)  {
        // code here
        vector<int> v;
        if((r&1) !=0)
        {
	        for(int i=0;i<=r/2;i++)
	        {
	        	for(int j=i;j<=c-1-i;j++)
	        		v.push_back(a[i][j]); if(v.size()==r*c) break;
	        	for(int k=i+1;k<=r-1-i;k++)
	        		v.push_back(a[k][c-1-i]); if(v.size()==r*c) break;
	        	for(int l=c-2-i;l>=i;l--)
	        		v.push_back(a[r-1-i][l]); if(v.size()==r*c) break;
	        	for(int m=r-2-i;m>i;m--)
	        		v.push_back(a[m][i]);		if(v.size()==r*c) break;	
	        		
	        }
	        reverse(v.begin(),v.end());
	        
        }
        else
        {
	        for(int i=0;i<r/2;i++)
	        {
	        	for(int j=i;j<c-i;j++)
	        		v.push_back(a[i][j]); if(v.size()==r*c) break;
	        	for(int k=i+1;k<r-i;k++)
	        		v.push_back(a[k][c-1-i]); if(v.size()==r*c) break;
	        	for(int l=c-2-i;l>=i;l--)
	        		v.push_back(a[r-1-i][l]); if(v.size()==r*c) break;
	        	for(int m=r-2-i;m>i;m--)
	        		v.push_back(a[m][i]);			if(v.size()==r*c) break;
	        		
	        }
	        reverse(v.begin(),v.end());
	        
        }
        

        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends