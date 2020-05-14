#include<bits/stdc++.h>
using namespace std;

void fun1(string str)
{
    int n=str.size();
    if(n>10)
    {
    cout<<str[0]<<n-2<<str[n-1]<<endl;
    }
    else{
        cout<<str<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string str;
    cin>>str;
    fun1(str);
    }

    return 0;
}
