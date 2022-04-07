class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int len=letters.size();
        int l=0,r=len-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(target<letters[mid]) r=mid-1;
            else l=mid+1;
        }
        return letters[l%len];
    }
};
