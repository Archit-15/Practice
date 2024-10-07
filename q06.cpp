// 268. Missing Number

#include<iostream>
#include<vector>

using namespace std;

int misssingNumber(vector<int> nums){
    int n = nums.size();
    int sum = n*(n+1)/2;    //Sum of n natural numbers
    int actualSum = 0;

    for(int i=0;i<n;++i){
        actualSum = actualSum + nums[i];
    }

    return sum - actualSum;

}

int main()
{
    vector<int> nums = {1,0,3};
    //vector<int> nums =  {1,2,3,0,5};

    int ans = misssingNumber(nums);
    cout<<ans;
    return 0;
}
