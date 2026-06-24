class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        int n = temperatures.size();
        vector<int> ans(n);
        int j = n-1;
    
        while(j>=0) {
            while(!st.empty() && temperatures[st.top()] <= temperatures[j])
                st.pop();//pop all temp <= curr temp
            if(st.empty()) ans[j]=0;
            else ans[j]=st.top()-j;
            st.push(j);
            j--;
        }
        return ans;
    }
};