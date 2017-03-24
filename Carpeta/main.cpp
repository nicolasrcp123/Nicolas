#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int a;
    int b;
    int c;
    cout <<"Ingresa el radio del circulo : ";
    cin >>x;
    cout <<"el Area del circulo es : "<<x*3.14 << endl;

    cout <<"Ingresa el lado del cuadrado : ";
    cin >>y;
    cout <<"el Area del cuadrado es: "<<y*y<< endl;

    cout <<"Ingresa la base del triangulo : ";
    cin >>a;
    cout <<"Ingresa la altura del triangulo : ";
    cin >>b;
    cout <<"El Area del triangulo es : "<<a*b/2<<endl;

    int q;
    int w;
    int temp;
    cout<<"ingresa el valor de a :";
    cin >>q;
    cout <<"ingresa el valor de b :";
    cin >>w;
    temp=q;
    q=w;
    w=temp;
    cout <<"a ahora es : "<<q<<" y b ahora es : "<<w<<endl;

    if(q==w){
        cout <<"Los valores son iguales";
    }
    else if(q>w){
        cout <<"El mayor valor es :"<<q<<endl;
    }
    else{
        cout <<"El mayor valor es :"<<w<<endl;
    }
    cout <<"A es :"<<q<< " y B es :"<<w<<endl;
    q=q+w;
    w=q-w;
    q=q-w;
    cout <<"El intercambio A es :"<<q<<" y B es :"<<w<<endl;
    cout <<"Para el mayor de 3 numeros! "<<endl;
    int A;
    int B;
    int C;
    cout <<"Ingresa el valor de A:";
    cin>>A;
    cout <<"Ingresa el valor de B:";
    cin>> B;
    cout <<"Ingresa el valor de C:";
    cin>> C;
    if(A>B&&A>C){
        cout<<"el mayor numero es :"<<A<<endl;
    }
    else if(B>=C&&B>=A){
        cout<<"el mayor numero es :"<<B<<endl;
        }
    else{
        cout<<"el mayor es :"<<C<<endl;
    }









    return 0;
}
