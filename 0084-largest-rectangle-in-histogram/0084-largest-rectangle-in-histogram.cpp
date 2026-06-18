class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            ans[i] = st.top();
        }

        st.push(i);
    }

    return ans;
}
    vector<int> previousSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        if (!st.empty()) {
            ans[i] = st.top();
        }

        st.push(i);
    }

    return ans;
}
    int largestRectangleArea(vector<int>& heights) {
        vector<int>nse=nextSmallerElement(heights);
        vector<int>pse=previousSmallerElement(heights);
        int maxi = 0;

        for(int i = 0 ; i<heights.size() ; i++) {
            maxi = max(maxi,heights[i]*(nse[i]-pse[i]-1));
        }
        return maxi;
    }
};