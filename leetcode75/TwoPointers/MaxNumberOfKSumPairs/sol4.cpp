#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int maxOps(vector<int>&nums, int k)
{
    unordered_map<int, int> freq;
    int count = 0;

    for(auto num : nums)
    {
        int complement = k - num;

        if(freq[complement] > 0)
        {
            freq[complement]--;
            freq[num]--;
            count++;
        }
        else if(freq[num] <= 0)
        {
            freq[num]++;
        }
    }

    return count;
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
