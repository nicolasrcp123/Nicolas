#include <iostream>

using namespace std;
void cambio(int *a,int *b);
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
    cambio(*p1,*p2);

    return 0;
}
void cambio(int *a,int *b){
    int *c;
    *c=a;
    *a=b;
    *b=c;


}
