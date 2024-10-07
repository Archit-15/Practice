// Intersection of 2 arrrays

#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> nums){
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

vector<int> intersection(vector<int> nums1 , vector<int> nums2){
    int n = nums1.size();
    int m = nums2.size();

    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < n && j < m){
        if(nums1[i] < nums2[j]){
            ++i;
        }
        else if(nums2[j] < nums1[i]){
            ++j;
        }
        else{
            ans.push_back(nums1[i]);
            ++i;
            ++j;   
        }
    }

    return ans;
}

int main()
{
    vector<int> nums1 = {1,1,2,3,4,4,4,5,6,7,7};
    vector<int> nums2 = {3,4,5,5,6,7,8};

    vector<int> ans = intersection(nums1,nums2);
    display(ans);

    return 0;
}