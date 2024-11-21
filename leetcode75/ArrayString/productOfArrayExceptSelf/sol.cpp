#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> nums = { 1,2,3,4};
    vector<int> prods(nums.size(), 1);
    int finalNum = 1;

    for(int i = 0; i<nums.size(); i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout << prods[i] << " * " << nums[i] << " = ";
            prods[i] *= nums[i];
            cout << prods[i] << endl;
        }
        cout << "itter: " << i << " end" << endl;
    }

    for(auto& num : prods)
    {
        cout << num << endl;
    }




}
    
