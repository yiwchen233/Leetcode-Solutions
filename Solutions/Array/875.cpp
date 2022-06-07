class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=-1;
        for(auto pile:piles) r=max(r,pile);
        while(l<r){
            int mid=(l+r)/2,tot=0;
            for(auto pile:piles) tot+=(pile+mid-1)/mid;
            if(tot>h) l=mid+1;
            else r=mid;
        }
        return l;
    }
};
