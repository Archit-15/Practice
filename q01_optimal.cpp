#include<iostream>
#include<vector>

using namespace std;

bool check(vector<int> &nums){
    int count = 0;
    int n = nums.size();
    for(int i=0;i<n;++i){
        if(nums[i] > nums[(i+1)%n]){
            count++;
        }
    }

    if(count>1){
        return false;
    }

    return true;

}

int main()
{
    //vector<int> nums = {3,4,5,1,2};
    //vector<int> nums = {3,4,5};
    vector<int> nums = {2,1,3,4};
    if(check(nums)){
        cout<<"Yes this is a sorted array that may have been rotated";
    }
    else{
        cout<<"This is not a sorted array";
    }

    return 0;
}