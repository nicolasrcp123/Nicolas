#include <iostream>
#include <conio.h>
using namespace std;
void cambio(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int *p1,*p2;
    int a,b;
    cout<<"A :";
    cin>>a;
    p1=&a;
    cout<<"B :";
    cin>>b;
    p2=&b;
    cambio(p1,p2);
    cout<<"Nuevo A : "<<*p1<<"Nuevo B : "<<*p2;

    return 0;
}
