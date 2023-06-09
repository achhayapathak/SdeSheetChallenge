#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        int start = intervals[0][0], end = intervals[0][1];

        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] <= end) {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
            } else {
                ans.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        ans.push_back({start, end});

        return ans;
}
