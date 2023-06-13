vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> p;
        for(int i=0; i<nums.size(); i++) {
            if(p.find(target - nums[i]) != p.end()) 
                return {p[target-nums[i]], i};

            p[nums[i]] = i;
        }

        return {-1, -1};
    }
