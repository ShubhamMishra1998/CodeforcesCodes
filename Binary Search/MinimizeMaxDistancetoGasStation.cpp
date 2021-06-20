class Solution {
public:
    bool isValid(vector<int> &v,int k,double x,int n){
        int count=0;
        for(int i=0;i<n-1;i++){
            count+=ceil((v[i + 1] - v[i]) / x) - 1;
        }
        if(count<=k)
        return true;
        return false;
    }
    double minmaxGasDist(vector<int> &s, int k) {
        int n=s.size();
        double l=0,h=(s[n-1]-s[0]),mid;
        while(h-l>=1e-6){
            mid=(l+h)/2;
            if(isValid(s,k,mid,n))
            h=mid;
            else
            l=mid;
        }
        return h;
    }
};