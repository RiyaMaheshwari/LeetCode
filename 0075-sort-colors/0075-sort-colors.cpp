class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*int i, key, j; 
        for (i = 1; i < nums.size(); i++)
        { 
            key = nums[i]; 
            j = i - 1; 
            while (j >= 0 && nums[j] > key)
            { 
                nums[j + 1] = nums[j]; 
                j = j - 1; 
            } 
            nums[j + 1] = key; 
        } 
        //cout<<nums[j];*/
            int c0, c1, c2;
            c0=0; c1=0; c2=0;
            for(int i=0; i<nums.size(); i++)
            {
                    if(nums[i]==0)
                            c0++;
                    else if(nums[i]==1)
                            c1++;
                    else if(nums[i]==2)
                            c2++;
            }
            int i=0;
                    while(c0>0)
                    {
                            nums[i]=0;
                            i++;
                            c0--;
                    }
                    while(c1>0)
                    {
                            nums[i]=1;
                            i++;
                            c1--;
                    }
                    while(c2>0)
                    {
                            nums[i]=2;
                            i++;
                            c2--;
                    }

    }
};