class Solution{
	public: 
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > res;
        if(nums.size()<4)
        return res;
        int a,b,c,d,_size=nums.size();
        for(a=0;a<=_size-4;a++){
        	if(a>0&&nums[a]==nums[a-1]) continue;   
        	for(b=a+1;b<=_size-3;b++){
        		if(b>a+1&&nums[b]==nums[b-1])continue; 
        		c=b+1,d=_size-1;
        		while(c<d){
        			if(nums[a]+nums[b]-target<-(nums[c]+nums[d]))
        			    c++;
        			else if(nums[a]+nums[b]-target>-(nums[c]+nums[d]))
        			    d--;
        			else{
        				res.push_back({nums[a],nums[b],nums[c],nums[d]});
        				while(c<d&&nums[c+1]==nums[c])
        				    c++;
        				while(c<d&&nums[d-1]==nums[d])
        				    d--;
        				c++;
        				d--;
					}
				}
			}
		}
		return res;
    }
};
