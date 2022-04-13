class RandomizedSet {
public:
    int keys[200005];
    int idx=-1;
    unordered_map<int,int> m;

    RandomizedSet() {}
    
    bool insert(int val) {
        if(m.count(val)!=0) return false;
        keys[++idx]=val;
        m[val]=idx;
        return true;
    }
    
    bool remove(int val) {
        if(m.count(val)==0) return false;
        int loc=m[val];
        m.erase(val);
        if(loc!=idx){
            keys[loc]=keys[idx];
            m[keys[loc]]=loc;
        }
        idx--;
        return true;
    }
    
    int getRandom() {
        int ridx=rand()%(idx+1);
        return keys[ridx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
