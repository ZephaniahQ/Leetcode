#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;


vector<int> prodExceptSelf(vector<int> nums)
{
    size_t size = nums.size();
    vector<int> prodVec(size);
    int prod = 1;
    for(int i = 0; i<size; i++)
    {
        if(i == 0)
        {
            size_t c = 1;
            while(c < size)
            {
                prod *= nums[c];
                c++;
            }
            prodVec[0] = prod;
        }
        else
        {
            prod 


    }
}

int main()
{
    vector<int> arr1(4);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;

    // {1,2,3,4}

    prodExceptSelf(arr1);

}

