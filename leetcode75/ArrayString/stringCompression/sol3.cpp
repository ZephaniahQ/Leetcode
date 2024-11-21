#include<iostream>
#include<vector>
#include<string>
using namespace std;

string getNum(int i, int j)
{
    string number;
    int count = j-i;
    if(count < 10)
    {
        number += (count +'0');
        return number;
    }

    while(count >9)
    {
        char digit = (count % 10) + '0';
        count /= 10;
        number = digit + number;
    }
    number = static_cast<char>(count + '0') + number;
    cout << "digit: " << number << endl;
    return number;
}
int compress(vector<char>& chars) {

    int i = 0;
    int j = 0;
    string s;

    while(i<chars.size()-1)
    {
        if(chars[i] == chars[j] && j<chars.size()-1) 
            j++;
        else
        {
            if(j== chars.size()-1)
            {
                j++;
            }
            s += chars[i];
            if(j-i >1)
                s+= getNum(i,j);
            i = j;
        }
    }
    cout << s << endl;

    if(chars.size() != 1)
        chars = vector<char>(s.begin(), s.end());
    return chars.size();
}

int main()
{
    string s;
    cout << "Enter string to compress: " << endl;
    cin >> s;

    vector<char> chars(s.begin(), s.end());

    cout << "Compressed size: " << compress(chars) << endl;
}
