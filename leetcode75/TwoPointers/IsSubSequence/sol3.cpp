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

    for(int i = 0; i<s.size();i++)
    {
        int c = i;
        cout << "i: " << i << endl; 
        while(c<t.size() && s[i] != t[c])
        {
            cout << "looking for: " << s[i] << endl;
            cout << " c: " << c << endl;
            cout << "erasing: " << t[c] << endl;
            t.erase(c,1);
        }
    }

    cout << t << endl;

    if(t.find(s) != string::npos)
        cout << "true" << endl;
    else cout << "false" << endl;
}


