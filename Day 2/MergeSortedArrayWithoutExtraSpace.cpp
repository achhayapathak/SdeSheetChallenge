#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	// Write your code here.
	int k = m, i=0, j = 0;

        while(i < m && j < n) {
            if(k == nums1.size())
                k = 0;

            if(nums1[i] <= nums2[j]) 
                nums1[k++] = nums1[i++];
            else
                nums1[k++] = nums2[j++];
            
        }

        while(j<n){
            if(k == nums1.size())
                k = 0;
            nums1[k++] = nums2[j++];

        }

        while(i < m) {
            if(k == nums1.size())
                k = 0;
            nums1[k++] = nums1[i++];

        }

        reverse(nums1.begin(), nums1.begin()+m);
        reverse(nums1.begin()+(m), nums1.end());
        reverse(nums1.begin(), nums1.end());

		return nums1;
}
