#include <iostream>
using namespace std;
int main(void) {
    float a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b; 
    if(a==0)
        if(b==0)
            cout<<"Identity Equation";
        else
            cout<<"Contrary Equaiton";
    else{
        float x;
        x=-b/a;
        cout<<"x = "<<x;
    };
    cout<<endl;
    char c;
    cin>>c;
}
