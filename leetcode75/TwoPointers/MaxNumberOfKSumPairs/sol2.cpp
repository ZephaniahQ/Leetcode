#include<iostream>
#include<vector>
using namespace std;

int maxOps(vector<int>& v, int k)
{
    int p1 = 0;
    int p2 = 1;
    int ops = 0;

    for(auto& num : v)
        cout << num << " ";
    cout << endl;

    while(p2 < v.size() && p1<v.size())
    {
        if(v[p1]+v[p2] == k)
        {
            v.erase(v.begin() + p1);
            v.erase(v.begin() + p2);
            ops++;
        }
        else
            p2++;
        if(p2 == v.size())
        {
            p1++;
            p2 = p1+1;
        }

        cout << "p1: "<< p1 << " => " <<  v[p1] << " p2: " << p2 << " => " << v[p2] << endl;
        
        for(auto& num : v)
            cout << num << " ";
        cout << endl;
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

