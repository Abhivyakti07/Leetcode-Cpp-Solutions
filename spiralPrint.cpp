class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count =0;
        int total = row*col;

        //index
        int starting_row = 0;
        int starting_col = 0;
        int end_row = row-1;
        int end_col = col-1;
        

        while(count < total){
            // first row;
            for(int i =starting_col; count < total && i <= end_col; i++){
                ans.push_back(matrix[starting_row][i]);
                count ++;
            }
            starting_row ++;

            // last col;
            for(int i =starting_row; count < total && i <= end_row; i++){
                ans.push_back(matrix[i][end_col]);
                count ++;
            }
            end_col --;

            // last row;
            for(int i =end_col; count < total && i >= starting_col ; i--){
                ans.push_back(matrix[end_row][i]);
                count ++;
            }
            end_row --;

            // fst col;
            for(int i =end_row; count < total && i >= starting_row; i--){
                ans.push_back(matrix[i][starting_col]);
                count ++;
            }
            starting_col ++;

        }

        
        return ans;
        
    }
};
