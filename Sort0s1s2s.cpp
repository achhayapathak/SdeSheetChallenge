#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   int zero = 0, one = 0, two = n-1;

        while(one <= two) {
            if(nums[one] == 0) {
                swap(nums[one], nums[zero]);
                zero++;
                one++;
            } else if(nums[one] == 2) {
                swap(nums[one], nums[two]);
                two--;
            } else {
                one++;
            }
        }
}
