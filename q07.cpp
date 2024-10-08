// 485. Max Consecutive Ones

#include<iostream>
#include<vector>

using namespace std;

int max(int a , int b){
    if(a<b){
        return b;
    }
    return a;
}

int MaxOnes(vector<int> nums){
    int one = 0;
    int maxOne = 0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==1){
            one++;
        }
        else{
            one = 0;
        }
        maxOne = max(one,maxOne);
    }
    return maxOne;
}

int main()
{
    vector<int> nums = {1,1,0,0,2,1,1,1,0,1};
    int ans = MaxOnes(nums);
    cout<<ans;
    return 0;
}