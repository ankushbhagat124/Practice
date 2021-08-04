#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
int maximum(int a,int b,int c,int d,int e)
{
    int x=max(a,b);
    int y=max(c,d);
    int z=max(x,y);
    int p=max(z,e);
    return p;
}
int main()
{
    init_code();
    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    //left alignment
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e;
    
    cout<<"\n\n";

    //top alignment
    int length=maximum(a.length(),b.length(),c.length(),d.length(),e.length());
    for(int i=0;i<length;i++)
    {
        if(i<a.length())
            cout<<a[i]<<" ";
        else
            cout<<"  ";
        if(i<b.length())
            cout<<b[i]<<" ";
        else
            cout<<"  ";
        if(i<c.length())
            cout<<c[i]<<" ";
        else
            cout<<"  ";
        if(i<d.length())
            cout<<d[i]<<" ";
        else
            cout<<"  ";
        if(i<e.length())
            cout<<e[i]<<" ";
        else
            cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";

    //bottom alignment
    for(int i=length-1;i>=0;i--)
    {
        if(i<a.length())
            cout<<a[a.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<b.length())
            cout<<b[b.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<c.length())
            cout<<c[c.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<d.length())
            cout<<d[d.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<e.length())
            cout<<e[e.length()-i-1]<<" ";
        else
            cout<<"  ";
       
        cout<<"\n";
    }
    cout<<"\n";
    
    //right alignment
    cout.width(length);
    cout<<a<<"\n";
    cout.width(length);
    cout<<b<<"\n";
    cout.width(length);
    cout<<c<<"\n";
    cout.width(length);
    cout<<d<<"\n";
    cout.width(length);
    cout<<e<<"\n";
    return 0;
}