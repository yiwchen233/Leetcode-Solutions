class RecentCounter {
public:
    int st,ed,times[10005];
    RecentCounter() {
        st=0,ed=0;
    }
    
    int ping(int t) {
        times[ed++]=t;
        while(times[st]<t-3000) st++;
        return ed-st;
    }
};


/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
