#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int miss = -1, repeat= -1, sum = 0;

	for(int i=0; i<n; i++) {
		int num = abs(arr[i]);
		
		sum += num;

		if(arr[num-1] < 0) {
			repeat = num;
		}

		arr[num - 1] *= -1;
	}

	miss = (n * (n+1)) / 2 - sum + repeat;


	return {miss, repeat};
}
