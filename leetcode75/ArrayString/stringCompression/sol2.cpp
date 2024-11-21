#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars)
{
    string s;
    cout << chars.size() << endl;

    int i = 0;
    int j = 0;

    while(j< chars.size())
    {
        while(chars[j] == chars[i] &&  j!=chars.size())
            j++;
        cout << "j: " <<  j << endl;
        s += (chars[i]);
        if(j-i > 1)
            s += ((j-i) + '0');
        i = j;
        if(j==chars.size())
            break;
    }
    cout << s << endl;

    return s.size();
}

int main()
{
    string s;
    cout << "Enter string to compress: " << endl;
    cin >> s;

    vector<char> chars(s.begin(), s.end());

    cout << "Compressed size: " << compress(chars) << endl;
}
