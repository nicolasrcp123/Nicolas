#include <iostream>

using namespace std;

void punter(int *q,int *w);
int main()
{
    int const *p1,*p2;
    int a,b;

    cout<<"A :";
    cin>>a;
    cout<<"B :";
    cin>>b;

    p2=&b;
    p1=&a;
    cout<<"Valor original de A :"<<*p1<<" y el valor original de B:"<<*p2<<endl;
    p2=&a;
    p1=&b;
    cout<<"Cambio de A :"<<*p1<<" y el cambio de B:"<<*p2<<endl;
    return 0;
}


