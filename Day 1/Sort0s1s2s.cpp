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



#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{

      int zero = 0, one = 0, two = 0, i = 0;

        for(int nu=0; nu<n; nu++) {
            int num = nums[nu];
            if(num == 0)    zero++;
            else if(num == 1)   one++;
            else two++;
        }

        while(i<zero) 
            nums[i++] = 0;

        while(one--)
            nums[i++] = 1;

        while(two--)
            nums[i++] = 2;
}
