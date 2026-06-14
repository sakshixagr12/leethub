class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for ( int i = 0; i < n ; i++ ){
            char c = chars[i];
            int count = 0;
            while ( i < n && c==chars[i]) {
                i++;
                count++;
            }
            if ( count == 1) {
                chars[idx] = c;
                idx++;
            } else {
                string cnt = to_string(count);
                chars[idx] = c;
                idx++;
                for (char dig : cnt) {
                    chars[idx] = dig;
                    idx++;
                }
            }
            i--; 
        }
        return idx;
        
    }
};