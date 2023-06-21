#include <bits/stdc++.h>

int findDuplicate(vector<int> &nums, int n){
	for(auto i : nums) {
			i = abs(i);
            if(nums[i-1] < 0)
                return i;

                nums[i-1] *= -1;

        }

        return -1;
}
