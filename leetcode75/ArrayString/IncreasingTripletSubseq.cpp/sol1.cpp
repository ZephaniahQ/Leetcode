#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

bool hasTriplet(vector<int>& nums)
{
    for(int i = 0; i< nums.size(); i++)
    {
        for(int j = 0; j<nums.size(); j++)
        {
            for(int k = 0; k<nums.size(); k++)
            {
                if(i<j && j<k && nums[i] < nums[j] && nums[j] << nums[k])
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> nums(5);
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[4] = 5;

    bool hasTrip = hasTriplet(nums);
    cout << boolalpha << "Ans: " << hasTrip;

}
