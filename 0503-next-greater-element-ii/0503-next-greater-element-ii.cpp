class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    //    vector<int>ans;
    //    int n = nums.size();
    //    if (n==0) return {};
    //    for(int i = 0; i<n; i++) {
    //     bool found = false;
    //     for (int j = i+1; j<i+n; j++) {
    //         int idx = j % n;
    //         if (nums[idx]>nums[i]) {
    //             ans.push_back(nums[idx]);
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (found == false) ans.push_back(-1);
    //    } 
    //    return ans;
    stack<int> st;
    int n = nums.size();
    vector<int>ans(n); 
    for ( int i = 2*n-1 ; i>=0 ; i--) {
        while (!st.empty() && st.top()<=nums[i%n]) {
            st.pop();
        }
        if ( i<n ) {
            if (st.empty()) ans[i]=-1;
            else ans[i]=st.top();
        }
        st.push(nums[i%n]);
    }
    return ans;
    }
};