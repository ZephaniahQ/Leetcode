#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxOps(vector<int>& nums, int k)
{
    int ops = 0;
    int left = 0;
    int right = nums.size()-1;

    sort(nums.begin(),nums.end());

    while(left<right)
    {
        if(nums[left] + nums[right] < k)
            left++;
        else if(nums[left] + nums[right] > k)
            right--;
        else 
        {
            ops++;
            left++;
            right--;
        }
    }
    return ops;
}
        

int main()
{
    
    vector<int> v1(4);
    vector<int> v2(5);
    int k1 = 5;
    int k2 = 6;

    for(int i = 0; i<5;i++)
        v1[i] = i+1;

    v2[0] = 3;
    v2[1] = 1;
    v2[2] = 3; 
    v2[3] = 4; 
    v2[4] = 3;

    cout <<"v1 k1: " << endl << maxOps(v1, k1) << endl;
    cout << "v2 k2: " << endl << maxOps(v2, k2) << endl;
}


