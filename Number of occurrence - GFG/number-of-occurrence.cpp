//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0;
	    int h=n-1;
	    int res=-1, res1=-1;
	    int c=0;
	    while(l<=h)
	    {
	        int mid=l+(h-l)/2;
            if(arr[mid]==x)
            {
                res=mid;
                h=mid-1;
            }
            else if(arr[mid]>x)
                h=mid-1;
            else
                l=mid+1;
	    }
	    
	    l=0;
	    h=n-1;
	    while(l<=h)
	    {
	        int mid=l+(h-l)/2;
	        if(arr[mid]==x)
            {
                res1=mid;
                l=mid+1;
            }
            else if(arr[mid]>x)
                h=mid-1;
            else
                l=mid+1;
	    }
	    if(res==-1 && res1==-1)
	    {
	       return 0;
	    }
	    else if((res==res1) && (res!=-1))
	    return 1;
	    else
	    return res1-res+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends