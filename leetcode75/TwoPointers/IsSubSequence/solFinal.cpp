#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

bool isSubStr(string s, string t)
{
    int sptr = 0;
    int tptr = 0;

    if(s.size() == 0)
        return true;
    if(t.size() == 0)
        return (s.size() == 0);

    while(sptr < s.size())
    {
        cout << "sptr: " << sptr << " s[sptr]: " << s[sptr] << endl;
        cout << "tptr: " << tptr << " t[tptr]: " << t[tptr] << endl;

        if(t[tptr] == s[sptr])
        {
            if(sptr == s.size()-1)
                return true;
            cout << "\ts++ && t++!" << endl;
            sptr++;
            tptr++;
        }
        else
        {
            cout << "\tt++!" << endl;
            tptr++;
        }
        if(tptr == t.size())
            return false;
    }

    cout << "sptr: " << sptr << endl;
    return true;
}


int main()
{
    string s, t;
    cout << "Enter s:" << endl;
    cin >> s;
    cout << "Enter t:" << endl;
    cin >> t;

    //new approach use 2 ptrs, 
    //keep one on s, and go through t
    //if t[tptr] != s[sptr] inc tptr
    //  if while doing this we reach t.size() return fale
    //or if t[tptr] = s[sptr] then we inc sptr
    //  loop runs while sptr < s.size()
    //      and on loop end we ret true;

    cout << boolalpha << isSubStr(s,t) << endl;
}


