// GFG Longest Sub-Array with Sum K

#include<iostream>
#include<vector>

using namespace std;

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int lenOfLongSubarr(vector<int> nums , int K){
    int len = 0;
    for(int i=0;i<nums.size();++i){
        int sum = 0;
        for(int j=i;j<nums.size();++j){
            sum = sum + nums[j];
            if(sum==K){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}

int main()
{
    vector<int> nums = {1,4,3,3,5,5};
    int k = 16;

    int ans  = lenOfLongSubarr(nums , k);
    cout<<ans;

    return 0;
}