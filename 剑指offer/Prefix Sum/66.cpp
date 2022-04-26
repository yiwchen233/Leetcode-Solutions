class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        int n=a.size();
        vector<int> b(n);
        for(int i=0,prod=1; i<n; prod*=a[i],i++) b[i]=prod;
        for(int i=n-1,prod=1; i>=0; prod*=a[i],i--) b[i]*=prod;
        return b;
    }
};
