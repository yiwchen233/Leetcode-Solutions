class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        if(k==0) return {};
        vector<int> res;
        priority_queue<int> q;
        for(int i=0; i<k; i++) q.push(arr[i]);
        for(int i=k; i<arr.size(); i++){
            int tnum=arr[i];
            if(tnum<q.top()){
                q.pop();
                q.push(tnum);
            }
        }
        for(int i=0; i<k; i++){
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};
