//26. Remove Duplicates from Sorted Array
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> nums){
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

int removeDuplicates(vector<int> nums){
    int left = 1;
    int right = 1;
    int n = nums.size();
    while(right<n){
        if(nums[right] == nums[right-1]){
            ++right;
        }
        else{
            nums[left] = nums[right];
            ++left;
            ++right;
        }
    }

    for(int i = left ; i < n;++i){
        nums[i] = 0;
    }
    display(nums);

    return left;
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates(nums);
    cout<<"The number of unique elements in this array were "<<ans;
    return 0;
}