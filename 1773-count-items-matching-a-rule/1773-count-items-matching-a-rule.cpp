class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int c=0;
       if(ruleKey=="type")
       {
           for(int i=0; i<items.size(); i++)
           {
               int j=0;
               if(items[i][j]==ruleValue)
               {
                   c++;
               }
           }
           return c;
       }
        else if(ruleKey=="color")
        {
            for(int i=0; i<items.size(); i++)
           {
               int j=1;
               if(items[i][j]==ruleValue)
               {
                   c++;
               }
           }
            return c;
        }
        else if(ruleKey=="name")
        {
            for(int i=0; i<items.size(); i++)
           {
               int j=2;
               if(items[i][j]==ruleValue)
               {
                   c++;
               }
           }
            return c;
        }
        return c;
    }
};