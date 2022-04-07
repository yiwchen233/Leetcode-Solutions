class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> primeList = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int ans = 0;
        for(int i=left; i<=right; i++){
            int cnt = 0,x = i;
            while(x!=0){
                x-=(x&-x);
                cnt++;
            }
            if(find(primeList.begin(),primeList.end(),cnt)!=primeList.end()) ans++; 
        }
        return ans;
    }
};
