class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        // vector<int> less , eq , grt;

        // for ( auto it : nums ) {
        //     if ( it > pivot) grt.push_back(it);
        //     else if ( it == pivot ) eq.push_back(it);
        //     else less.push_back(it);
        // }

        // vector<int> answer;

        // for ( auto el : less ) answer.push_back(el);
        // for ( auto el : eq )   answer.push_back(el);
        // for ( auto el : grt )  answer.push_back(el);

        vector<int> answer;

        for ( auto it : nums ) {
            if ( it < pivot )
                answer.push_back(it);
        }
        for ( auto it : nums ) {
            if ( it == pivot )
                answer.push_back(it);
        }
        for ( auto it : nums) {
            if ( it > pivot ) {
                answer.push_back(it);
            }
        }

        return answer;
    }
};