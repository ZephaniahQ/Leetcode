#include<iostream>
#include<string>
using namespace std;

string getSubStr(string& s, int ind1, int ind2)
{
    cout << "ind1: " << ind1 << " ind2: " << ind2 << endl;
    string retStr = s.substr(ind1, ind2-ind1);
    cout << "returning: " << retStr << endl;
    return retStr; 
}

int main()
{
    string str;
    getline(cin,str);

    int l1,l2,r1,r2;
    l1 = l2 = 0;
    r1 = r2 = str.size();
    bool w1Found = false;
    bool w2Found = false;


    while(l2<r1)
    {
        string w1,w2;
        if(str[l2] != ' ')
            l2++;
        else
        {
            w1 = getSubStr(str,l1,l2);
            w1Found = true;

        }

        if(str[r1] != ' ')
            r1--;
        else{
            w2 = getSubStr(str,r1,r2);
            w2Found = true;
        }

        if(w1Found && w2Found)
        {
            //erase w1
            str.erase(l1,w1.length());
            l2 = l1 + w2.length();
            //erase w2
            str.erase(r1,w2.length());
            //put w2 in start;
            str = w2 + str;
            //put w1 at end;
            str += w1;

            cout << "updated: " << str << endl;
            
            //fix l and r 
            //move to next word skipping one space
            l2 += 2;
            l1 = l2;
            //same but in reverse
            r1 = r2 - w1.length();
            r1-= 2;
            r2 = r1; 
        }
    }
    cout << str << endl;

}
