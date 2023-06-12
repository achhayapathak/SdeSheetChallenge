#include <bits/stdc++.h>

int findMajorityElement(int nums[], int n) {
	// Write your code here.
	int cand = nums[0], vote = 1;

	for(int i=1; i<n; i++) {
		if(nums[i] == cand)
			vote++;
		else
			vote--;
		
		if(vote == 0) {
			cand = nums[i];
			vote = 1;
		}
	}

	vote = 0;
	for(int i=0; i<n; i++) {
		if(cand == nums[i])
			vote++;
	}

    return vote > floor(n/2) ? cand : -1;
}
