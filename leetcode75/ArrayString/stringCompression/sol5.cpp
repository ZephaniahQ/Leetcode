#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compress(vector<char>& chars)
{
    int i = 0;
    int idx = 0;
    int count = 0;

    for(int i = 0; i<chars.size();i++)
    {
       char ch = chars[i]; 
       while(ch == chars[i] && i < chars.size())
       {
           i++;
           count++;
       }

       if(count == 1)
           chars[idx++] = ch;
       else
       {
           chars[idx++] = ch;
           for(auto& c : to_string(count))
               chars[idx++] = c;
       }
       count = 1;
    }

    chars.resize(idx);
    cout << idx << endl;
    
    for(auto& c : chars)
        cout << c;
    cout << endl;
    return idx;
}

int main()
{
    string s;
    cout << "Enter string to compress: " << endl;
    cin >> s;
    vector<char> chars(s.begin(), s.end());
    cout << "Size after compression: " << compress(chars) << endl;
}
