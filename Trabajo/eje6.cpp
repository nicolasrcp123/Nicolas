#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,n;
    char x;
    int y;
    cout << "Ingresa Operando" << endl;
    cin>>x;
    if(x=='+'){
        n=1;
    }
    if(x=='-'){
        n=2;
    }
    if(x=='*'){
        n=3;
    }
    if(x=='/'){
        n=4;
    }
    if(x=='^'){
        n=5;
    }
    if(x=='%'){
        n=6;
    }

    cout << "Ingresa A :" << endl;
    cin>>a;
    cout << "Ingresa B :" << endl;
    cin>>b;

    switch(n){
        case 1:
            y=a+b;
            break;
        case 2:
            y=a-b;
            break;
        case 3:
            y=a*b;
            break;
        case 4:
            y=a/b;
            break;
        case 5:
            y=pow(a,b);
            break;
        case 6:
            y=a%b;
            break;
    }

    cout<<"Resultado :"<<y<<endl;
    return 0;
}
