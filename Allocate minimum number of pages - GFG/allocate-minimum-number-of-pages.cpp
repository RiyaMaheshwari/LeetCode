//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool isvalid(int A[], int M, int max , int N)
    {
        int curr_days =1;
        int sum=0;
        for(int i=0; i<N; i++)
        {
            sum=sum+A[i];
            if(sum>max)
            {
                curr_days++;
                sum=A[i];
            }
            if(curr_days>M)
                return false;
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int start;
        int end=0;
        int max=A[0];
        for(int i=0; i<N; i++)
        {
            if(A[i]>max)
            max=A[i];
        }
        start = max;
        for(int i=0; i<N; i++)
        {
            end=end+A[i];
        }
        if(N<M)
            return -1;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(A,M,mid,N)==true)
            {
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends