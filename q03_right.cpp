// 189. Rotate Array to right by k steps , Whenever rotating an array to the right  we reverse the whole
// array and then reverse the first k elements and then reverse the remaining k->n elements. This is a 
// O(n) apporach there can be another approach of O(k.n) where we manually rotate the array right
// once for k times.

#include<iostream>
#include<vector>

using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(vector<int>& nums){
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}   

void reverse(vector<int>& nums , int left , int right){
    while(left < right){
        swap(nums[left] , nums[right]);
        ++left;
        --right;
    }
}

void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k%n;
    if(n==0 || n==1){
        return;
    }

    reverse(nums , 0 , n-1);
    reverse(nums , 0 , k-1);
    reverse(nums , k ,n-1);

    display(nums);
}

int main()
{
    int k = 2;
    vector<int> nums = {1,2,3,4};
    rotate(nums , 2);
    return 0;
}
