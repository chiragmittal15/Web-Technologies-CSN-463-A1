#include<bits/stdc++.h>
using namespace std;
  
int count(string &main_string, string &str_to_find)
{
    int n = main_string.length();
    sort(str_to_find.begin(),str_to_find.end());
    int count=0;
   
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            string s = main_string.substr(i,j-i+1);
            sort(s.begin(),s.end());
            if(s==str_to_find)
            count++;
        }

    }
    return count;
}
   

int main()
{
   string main_string  = "chirag";
   string str_to_find = "rahi";
   cout << count(main_string, str_to_find);
   return 0;
}
