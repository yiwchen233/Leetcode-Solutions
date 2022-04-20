class Solution {
public:
    int lengthLongestPath(string input) {
        int n = input.size(),pos = 0,ans = 0;
        stack<int> st;
        while(pos<n){
            int depth=1;
            while(pos<n&&input[pos]=='\t'){
                pos++;
                depth++;
            }
            int len=0; 
            bool isFile=false;     
            while(pos<n&&input[pos]!='\n'){
                if(input[pos]=='.') isFile = true;
                len++;
                pos++;
            }
            pos++;
            while(st.size()>=depth) st.pop();
            if(!st.empty()) len+=st.top()+1;
            if(isFile) ans = max(ans, len);
            else st.emplace(len);
        }
        return ans;
    }
};
