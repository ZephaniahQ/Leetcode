#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<string> getCombinations(string str, int width)
{
    vector<string>combinations;
    string combination;
    int start = 0;
    for(int i = 0; i< str.size() - width + 1; i++)
    {
        combination = str.substr(start, width);
        start++;
        combinations.push_back(combination);
    }

    return combinations;
}

int main()
{
    
    int t;
    cout << "Enter test cases: " << endl;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        string str1;
        string str2;

        cout << "Enter str1: ";
        cin >> str1;
        cout << "Enter str2: ";
        cin >> str2;

        string& smaller = (str1.size() < str2.size())? str1 : str2;
        string& larger = (str1.size() > str2.size())? str1 : str2;
        map<int, string> map; 
        vector<string> comb;

        for(int i = 1; i<=smaller.size(); i++)
        {
            comb = getCombinations(smaller, i);

            for(auto& s : comb)
            {
                if(larger.find(s) != string::npos)
                {
                    map[s.size()] = s;
                }
            }
        }
        cout << map.rbegin()->second<< endl;
    }

}
        
        

