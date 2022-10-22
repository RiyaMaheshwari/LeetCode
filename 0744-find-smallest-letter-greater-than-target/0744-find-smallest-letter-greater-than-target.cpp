class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0,h=letters.size()-1;
        char res=letters[0];
        int mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            char mid1=letters[mid];
            if(letters[mid]>target)
            {
                res=mid1;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }
};