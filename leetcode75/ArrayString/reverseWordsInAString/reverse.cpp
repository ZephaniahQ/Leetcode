#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()

{

    string s;
    getline(cin,s);

    string delim = " ";
    stack<string> w;
    string retString = "";

    while(s.find(delim) != string::npos)
    {

        int index = s.find(delim); 

        if(index == 0)
        {
            s.erase(0,1);
            continue;
        }

        string word = s.substr(0, index);
        w.push(word);
        s.erase(0,index);
    }
    
    if(!s.empty())
        w.push(s);

    cout << w.size() << endl;
    while(!w.empty())
    {
        retString += w.top();
        w.pop();

        if(!w.empty())
            retString += " ";
    } 

    cout << retString << endl;

}


