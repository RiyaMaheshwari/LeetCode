class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int value;
        while(i<j)
        {
           value = numbers[i]+numbers[j];
           if(value>target) 
               j--;
            else if(value<target)
                i++;
            else
                return {i+1,j+1};
        }
        return {};
    }
};