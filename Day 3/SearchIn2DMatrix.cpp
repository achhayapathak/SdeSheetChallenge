bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(), m = matrix[0].size();
        int start = 0, end = n-1, row = -1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(matrix[mid][0] <= target) {
                row = mid;
                start = mid+1;
            } else {
                end = mid-1;
            }
        }

        if(row == -1)
            return false;

        start = 0, end = m-1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(matrix[row][mid] == target) 
                return true;
            else if(matrix[row][mid] < target) 
                start = mid+1;
            else
                end = mid-1;
        }

        return false;
}
