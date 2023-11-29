#include<iostream>
using namespace std;
string removedupli(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string rem = removedupli(s.substr(1));
    if(ch == rem[0])
    {
        return rem;
    }
    return ch+rem;
}
// remove all x to the end of string
string removeXatend(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string rem = removeXatend(s.substr(1));
    if(ch == 'x')
    {
        return rem+ch;
    }
    return ch+rem;
}
main()
{
    string s = removedupli("aasdffhjkkf");
    cout<<s<<endl;
     string s1 = removeXatend("axsdxfxxjxkf");
    cout<<s1;
}