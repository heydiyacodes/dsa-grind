class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> restr;

        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1); //initialise all to 1 for simplicity
            for(int j=1;j<i;j++){
                row[j] = restr[i-1][j-1] + restr[i-1][j];
            }
            restr.push_back(row);
        }
        return restr;
    }
};