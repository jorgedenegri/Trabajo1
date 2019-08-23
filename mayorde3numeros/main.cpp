#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"ingrese a: "<<endl;cin>>a;
    cout<<"ingrese b: "<<endl;cin>>b;
    cout<<"ingrese c: "<<endl;cin>>c;
    if((a>b)&&(a>c)){
       cout<<a<<endl;
       }
    if((b>a)&&(b>c)){
        cout<<b<<endl;
    }
    if((c>a)&&(c>b)){
        cout<<b<<endl;
    }
    return 0;
}
