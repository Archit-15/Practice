//1752. Check if Array Is Sorted and Rotated
#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>& nums){
    for(int i=1;i<nums.size();++i){
        if(nums[i] < nums[i-1]){
            return false;
        }
    }
    return true;
}

bool check(vector<int>& nums){

    if(isSorted(nums)){
        cout<<"Program ended at first fucntion\n";
        return true;
    }

    int pivot;
    int n = nums.size();
    for(int i=1;i<n;++i){
        if(nums[i] < nums[i-1]){
            pivot = i;
            break;
        }
    }

    for(int i=0;i<pivot;++i){
        int first = nums[0];
        for(int j=1;j<n-1;++j){
            nums[j-1] = nums[j];
        }
        nums[n-1] = first;
    }

    if(!isSorted(nums)){
        return false;
    }
    cout<<"Pogram ended after last function\n";
    return true;

}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    //vector<int> nums = {3,4,5};
    //vector<int> nums = {2,1,3,4};
    if(check(nums)){
        cout<<"Yes this is a sorted array that may have been rotated";
    }
    else{
        cout<<"This is not a sorted array";
    }

    return 0;
}