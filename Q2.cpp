#include<bits/stdc++.h>
using namespace std;
int main()
{
    string para = "I am an Electrical Engineer.";
    vector<string> word={ "am","Engineer", "chirag"};
    string s;
    
    for(int i=0;i<word.size();i++)
    {
        size_t found = para.find(word[i]);
        if (found != string::npos)
        {
            for(int j=1;j<word[i].size();j++)
            {
                para[found+j]='*';
            }
        }
    }
    cout<<para;
    return 0;
}