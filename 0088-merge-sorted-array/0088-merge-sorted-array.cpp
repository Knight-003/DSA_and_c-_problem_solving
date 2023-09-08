#include <bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         
        int sz1 = m;
    int sz2 = n;
    
    vector<int> nv;
    int s = min(sz1, sz2);
    int i = 0;
    int j = 0;

    while (i < sz1 && j < sz2)
    {

        if (nums1[i] <= nums2[j])
        {
            nv.push_back(nums1[i]);
            i++;
        }
        else
        {
            nv.push_back(nums2[j]);
            j++;
        }
    }

    if (i >= sz1)
    {
        // nv.insert(nv.end(), nums2.begin() + j, nums2.end());
        while(j!=sz2){
            
            nv.push_back(nums2[j]);
          
            j++;

        }
    }
    else if (j >= sz2)
    {
       
        // nv.insert(nv.end(), nums1.begin() + i, nums1.end());
        while(i!=sz1){
           
            nv.push_back(nums1[i]);
           
            i++;

        }
       
    }
    

    nums1=nv;
    }
};