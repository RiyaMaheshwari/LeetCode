//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
         stack<string> st1;

        stack<int> st2;

        string currString="", prevString="";

        int Currnum=0,prevNum;

        

        for(int i=0;i<s.size();i++)

        {

            if(s[i]=='[')

            {

                st1.push(currString);

                st2.push(Currnum);

                currString ="";

                 Currnum=0;

            }

            else if(s[i]==']')

            {

                prevNum = st2.top(); st2.pop();

                prevString = st1.top(); st1.pop();

                

                string tmp="";

                for(int j=0;j<prevNum;j++)

                {

                    tmp += currString;

                }

                

                currString = prevString + tmp;

            }

            else if(s[i]>='0' && s[i]<='9')

            {

                Currnum = Currnum*10+(s[i]-'0');

            }

            else{

                currString += s[i];

            }

        }

        

        return currString;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends