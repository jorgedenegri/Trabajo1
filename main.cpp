#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"ingrese a: "<<endl;cin>>a;
    cout<<"ingrese b: "<<endl;cin>>b;
    cout<<"ingrese c: "<<endl;cin>>c;
    if((a>b)&&(a>c)){
       cout<<a;
       }
    if((b>a)&&(b>c)){
        cout<<b;
    }
    else{
        cout<<c;
    }
    return 0;
}
