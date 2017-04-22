#include <iostream>

using namespace std;

void cambiar(int &num1,int &num2);
int main()
{
    int a,b;
    cout << "A :" << endl;
    cin>>a;
    cout << "B :" << endl;
    cin>>b;
    cambiar(a,b);
    cout<<"A :"<<a<<"y B :"<<b<<endl;
    return 0;
}
void cambiar(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;

}
