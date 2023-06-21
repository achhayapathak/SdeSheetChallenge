#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
        vector<vector<long long int>> ans;
        vector<long long int> arr1, arr2;

        arr1.push_back(1);
        ans.push_back(arr1);

        if(n == 1) {
            return ans;
        }

        arr1.push_back(1);
        ans.push_back(arr1);

        if(n == 2)
            return ans;

        for(int i=3; i<=n; i++) {
            arr2.push_back(1);

            for(int j=0; j<arr1.size()-1; j++)
                arr2.push_back(arr1[j] + arr1[j+1]);

            arr2.push_back(1);

            ans.push_back(arr2);

            arr1 = arr2;
            arr2.clear();
        }

        return ans;
}
