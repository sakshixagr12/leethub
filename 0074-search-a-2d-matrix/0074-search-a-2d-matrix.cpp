class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //bool ans ;
        for(int i = 0 ; i < matrix.size(); i++){
            
                int beg = 0;
                int end = matrix[i].size() -1;

                while ( beg <= end){
                    int mid = beg + (end - beg)/2;
                    if(matrix[i][mid]==target){
                        return true;
                    }else if (matrix[i][mid] > target){
                        end = mid -1 ;

                    }else beg = mid + 1;
                }
            
        }
        return false;
    }
};