#include<iostream>
using namespace std;
int main()
{
    string str;
    char c;
    cout<<"Enter a String ";
    cin>>str;
    int m=str.length();
    for(int i=0;i<m;i++)
    {
        c=str[i];
        str[i]=str[m-1];
        str[m-1]=c;
        m--;
    }
    cout<<"The reverse of string is ";
    cout<<str;
    return 0;
}
