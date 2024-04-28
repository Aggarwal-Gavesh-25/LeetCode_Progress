#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> triangle;
        
        // Handle numRows = 0 case
        if (numRows == 0) return triangle;
        
        // First row is always [1]
        triangle.push_back({1});
        
        // Generate subsequent rows based on previous row
        for (int i = 1; i < numRows; ++i) {
            std::vector<int> row;
            // First element of each row is always 1
            row.push_back(1);
            // Generate inner elements of the row based on the previous row
            for (int j = 1; j < i; ++j) {
                row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
            }
            // Last element of each row is always 1
            row.push_back(1);
            // Add the generated row to the triangle
            triangle.push_back(row);
        }
        
        return triangle;
    }
};
