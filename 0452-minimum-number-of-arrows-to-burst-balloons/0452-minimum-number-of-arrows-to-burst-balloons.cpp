class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
            
           //  priority_queue<int, vector<int>, greater<int> > q;
           // q.push(points[0][1]);
            int c=1;
            int mini=points[0][1];
            for(int j=1;j<points.size();j++){
                
                    if(mini<points[j][0]){
                            c++;
                            mini=points[j][1];
                           } 
                    
                   else mini=min(mini,points[j][1]);
                    }
            return c;
    }
};