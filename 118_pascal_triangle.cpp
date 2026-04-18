class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector <vector<int>> triangle;

        for (int i=0; i<numRows; i++)
        {
            //initialize with 1
            vector<int> rows(i+1, 1);

            // fill middle values
            for (int j=1; j<i;j++ )
            {
                rows[j]= triangle[i-1][j-1] + triangle[i-1][j];
            }

            //add back to the triangle
            triangle.push_back(rows);
        }

    return triangle;      
    }
};