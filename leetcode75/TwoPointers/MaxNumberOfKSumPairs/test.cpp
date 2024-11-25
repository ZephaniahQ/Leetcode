#include<iostream>
#include<vector>
using namespace std;

int getOps(vector<int>& v, int k)
{
    int p1 = 0;
    int p2 = 0;
    int ops = 0;

    for(int i=0; i<v.size(); i++)
    {
        for(int j = i; j<v.size(); j++)
        {
            cout << i << " + " << j << " = " <<  v[i] + v[j] << endl;
            if(v[i]+v[j] == k)
                ops++;
        }
    }
    
    return ops;
}

int main()
{
    int n,k;

    cout << "Enter vec size: " << endl;
    cin >> n;

    cout << "Enter elements: " << endl;
    vector<int> v(n);

    for(int i =0; i< n; i++)
        cin >> v[i];
    
    cout << "Enter max sum k: " << endl;
    cin >> k;

    cout << "max ops: " << getOps(v, k) << endl;

}
