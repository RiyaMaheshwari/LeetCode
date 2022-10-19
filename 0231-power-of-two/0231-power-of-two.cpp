class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n<0)
        return false;
          while(n!=1)
         {

           if(n%2!=0)
          {
            return false;
            break;
          }
           n=n/2;
        
    }
    return true;
    }
};