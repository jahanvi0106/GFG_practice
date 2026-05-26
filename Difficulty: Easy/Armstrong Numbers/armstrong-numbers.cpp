// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int sum = 0;
        int temp=n;
        while(n!=0){
            int d = n%10;
            sum += pow(d,3);
            n/=10;
        }
        if(temp==sum)
            return true;
        else
            return false;
        
    }
};