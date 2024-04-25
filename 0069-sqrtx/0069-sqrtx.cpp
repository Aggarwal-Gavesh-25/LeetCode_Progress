class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) // Base cases
            return x;
        
        long left = 1; // Start from 1
        long right = x; // End at x
        
        while (left <= right) {
            long mid = left + (right - left) / 2; // Calculate mid point
            
            // Check if mid squared is equal to x
            if (mid * mid == x)
                return mid;
            // If mid squared is less than x, search in the right half
            else if (mid * mid < x)
                left = mid + 1;
            // If mid squared is greater than x, search in the left half
            else
                right = mid - 1;
        }
        
        // When the loop exits, 'right' will be the largest integer whose square is less than or equal to x.
        return right;
    }
};
