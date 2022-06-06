class MyCalendarThree {
public:
    unordered_map<int, pair<int, int>> tree;
    MyCalendarThree() {}
    void update(int start, int end, int l, int r, int idx) {
        if(r<start||end<l) return;
        if(start<=l&&r<=end){
            tree[idx].first++;
            tree[idx].second++;
        }else{
            int mid=(l+r)>>1;
            update(start,end,l,mid,2*idx);
            update(start,end,mid+1,r,2*idx+1);
            tree[idx].first=tree[idx].second+max(tree[2*idx].first,tree[2*idx+1].first);
        }
    }
    int book(int start, int end){            
        update(start,end-1,0,1e9,1);
        return tree[1].first;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
