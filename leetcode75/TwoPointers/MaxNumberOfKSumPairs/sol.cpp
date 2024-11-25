#include<iostream>
#include<vector>
using namespace std;

int maxOps(vector<int>& v, int k)
{
    
    int ptr1 = 0;
    int ptr2 = 1;
    int ops = 0;

    while(ptr1 < v.size() && ptr2<v.size())
    {
        cout << "v["<< ptr1 << "]: " << v[ptr1] << " v[" << ptr2 << "]: " << v[ptr2] << endl;
        if(v[ptr1] + v[ptr2] == k)
        {
            v.erase(v.begin() + ptr2);
            v.erase(v.begin() + ptr1);
            cout << "sum!" << endl;
            ops++;
        }

        ptr2++;

        if(ptr2 == v.size())
        {
            ptr1++;
            ptr2 = ptr1+1;
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
