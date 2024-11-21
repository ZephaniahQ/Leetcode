#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;


vector<int> prodExceptSelf(vector<int> nums)
{
    for(auto& n : nums)
    {
        cout << n << " ";
    }
    cout << endl;
    int totProd = 1;

    size_t size = nums.size();
    for(int i = 0; i<size; i++) 
    {
        //get prev prod:
        
        int prevInd = i;
        int prevProd = 1;
        while(prevInd >0 &&  i != 0)
        {
            prevInd--;
            prevProd *= nums[prevInd];  
        }
        cout << "prev prod: " << prevProd << endl;

        int nextInd = i;
        int nextProd = 1;
        
        while(nextInd < size)
        {
            nextInd++;
            nextProd *= nums[nextInd];
        }
        cout << "next prod: " << nextProd << endl;

        totProd *=  prevProd * nextProd;
    }
    return {1,0};
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
