class Solution {
public:
    string licenseKeyFormatting(string S, int k) {
    	int cnt=0;
    	string str="";
    	for(int i=S.length()-1; i>=0; i--)
    	{
    	    if(S[i]!='-')
    	    {
    	        str+=toupper(S[i]);
    	        if(++cnt==k)
    	        {
    	            str+='-';
    	            cnt=0;
    	        }
    	    }
    	}
    	if(str.back()=='-')
    	str.pop_back();
    	reverse(str.begin(), str.end());
    	return str;
    }
};