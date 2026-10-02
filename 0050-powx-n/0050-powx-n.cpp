class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        long double new_x=(long double)x;

        if(N<0){
            new_x=1.0/new_x;
            N=-N;
        }

        long double ans=1.0L;

        while(N>0){
            if(N%2==1){
                ans*=new_x;
            }
            new_x*=new_x;
            N/=2;
        }

        return ans;
    }
};