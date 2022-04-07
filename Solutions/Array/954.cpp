class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int N=100010, M=2*N;
        vector<int> cnt(M*2),in(M*2);
        vector<int> larr;
        queue<int> q;
        for(int i=0; i<arr.size(); i++){
            cnt[arr[i]+M]++;
            if(cnt[arr[i]+M]==1 && arr[i]!=0) larr.push_back(arr[i]);
        }
        if(cnt[M]%2!=0) return false;
        for(int i=0; i<larr.size(); i++){
            int x = larr[i];
            if(x%2!=0) q.push(x);
            else{
                in[x+M]=cnt[x/2+M];
                if(in[x+M]==0) q.push(x);
            }
        }
        while(!q.empty()){
            int tx = q.front(); 
            q.pop();
            if(cnt[tx*2+M]<cnt[tx+M]) return false;
            cnt[tx*2+M]-=cnt[tx+M];
            in[tx*2+M]-=cnt[tx+M];
            if(in[tx*2+M]==0 && cnt[tx*2+M]>0) q.push(tx*2);
            in[tx*4+M]-=cnt[tx+M];
            if(in[tx*4+M]==0 && cnt[tx*4+M]>0) q.push(tx*4);
        }
        return true;
    }
};
