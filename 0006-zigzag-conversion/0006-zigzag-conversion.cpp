class Solution {
public:
    string convert(string s, int Rows) {
            if(Rows==1)
                    return s;
        int n = s.length();
            string res="";
        for(int r=0; r<Rows; r++)
        {
                int inc =2*(Rows-1);
                for(int i=r; i<n; i=i+inc)
                {
                        res+=s[i];
                        if((r>0) && r<(Rows-1) && (i+inc-2*r)<n)
                                res+=s[i+inc-2*r];
                }
        }
        return res;
    }
};