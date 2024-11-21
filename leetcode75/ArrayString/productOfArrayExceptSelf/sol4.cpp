#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;


vector<int> prodExceptSelf(vector<int> nums)
{
    size_t size = nums.size();
    vector<int> prefVec(size,1);
    vector<int> postVec(size,1);
    vector<int> prodVec(size);

    //get prefix:
    int prefix = 1;
    for(int i = 0; i<size; i++)
    {
        if(i == 0)
        {
            continue;
        }
        prefix *= nums[i-1];
        prefVec[i] = prefix;
    }

    cout << "pref vec:" << endl;
    for(auto& pref : prefVec)
        cout << pref << " ";
    cout << endl;

    //get postfix:
    int postfix = 1;
    for(int i = size-1; i>=0; i--)
    {
        if(i == size-1)
        {
            continue;
        }
        postfix *= nums[i+1];
        postVec[i] = postfix;
    }


    cout << "post vec:" << endl;
    for(auto& post : postVec)
        cout << post << " ";
    cout << endl;

    for(int i = 0; i<size; i++)
        prodVec[i] = prefVec[i]*postVec[i];

    return prodVec;
}

int main()
{
    vector<int> arr1(4);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;

    // {1,2,3,4}
    
    cout << "input vec: " << endl;
    for(auto& inp : arr1)
        cout << inp << " ";
    cout << endl;

    vector<int> prodVec = prodExceptSelf(arr1);


    cout << "res vec: " << endl;
    for(auto& res : prodVec)
        cout << res << " ";
    cout << endl;
}


