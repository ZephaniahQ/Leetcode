#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxArea(vector<int>& arr) 
{
    
    int maxArea = 0;

    int idx1 = 0;
    int idx2 = arr.size()-1;

    while(idx2>idx1)
    {
        int area = min(arr[idx2],arr[idx1]) * (idx2-idx1);
        if(area>maxArea)
            maxArea = area;
        if(arr[idx1]<arr[idx2])
            idx1++;
        else idx2--;
    }

    return maxArea;
}


int main()
{
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;

    vector<int> arr(size);

    for(int i = 0; i< size; i++)
    {
        int temp = 0;
        cin >> temp;
        arr[i] = temp;
    }
        
    cout << maxArea(arr) << endl;

    return 0;
}
