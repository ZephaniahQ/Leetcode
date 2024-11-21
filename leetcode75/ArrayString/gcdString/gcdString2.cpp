#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

int main()
{
    string str1,str2;

    cin >> str1;
    cin >> str2;

    int s1 = str1.size();
    int s2 = str2.size();

    if(str1 + str2 != str2 + str1)
    {
        cout << " " << endl;
    }
    else
    {
        string& smaller = (s1 < s2)? str1 : str2;
        string& larger = (s1 > s2)? str1 : str2;
        string temp = smaller;

        for(int i = smaller.length(); i>0; i--)
        {
            if(smaller.size() % i == 0 && larger.size() % i == 0)
            {
                cout << temp << endl;
                break;
            }
            else
            {
                temp.pop_back();
            }

        }

    }

}
