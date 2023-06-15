class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;

        for(int i=0; i<n-3; i++) {
            for(int j=i+1; j<n-2; j++) {
                int k = j+1, l = n-1;
                while(k < l) {
                    long long val = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];
                    if(val == target) {
                        s.insert({nums[i] , nums[j] , nums[k] , nums[l]});
                        k++;
                        l--;
                    } 
                    else if(val <= target) {
                        k++;
                    }
                    else
                        l--;
                }
            }
        }

        for (auto x : s) {
            ans.push_back(x);
        }

        return ans;
    }
};
