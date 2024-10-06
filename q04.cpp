// 283. Move Zeroes

#include<iostream>
#include<vector>

using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(vector<int> nums){
    for(int i=0;i<nums.size();++i){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void MoveZeroes(vector<int>& nums){
    int ini = 0;
    for(int i=0;i<nums.size();++i){
        if(nums[i] ==  0){
            continue;
        }
        swap(nums[i] , nums[ini]);
        ini++;
    }

    display(nums);

}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    MoveZeroes(nums);
    return 0;
}