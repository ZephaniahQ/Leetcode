#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;


int main()
{
    string s, t;
    cout << "Enter s:" << endl;
    cin >> s;
    cout << "Enter t:" << endl;
    cin >> t;

    cout << s << endl << t << endl;

    for(int i = 0;i<t.size(); i++)
    {
        if(s.find(t[i]) == string::npos)
        {
            t.erase(i,1);
            i--;
        }
    }
    cout << t << endl;
}

