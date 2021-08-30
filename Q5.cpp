#include<bits/stdc++.h>
using namespace std;
int main()
{
    string para=" i am from Meerut";
    if(int(para[0])>=97&&int(para[0])<=122)
    {
        para[0]=para[0]-32;
    }
    for(int i=1;i<para.size();i++)
    {
        if(para[i-1]==' ' && (int(para[i])>=97&&int(para[i])<=122))
        para[i]=para[i]-32;
    }
    cout<<para;
    return 0;
}