#include<iostream>
#include<conio.h>

using namespace std;

void invertir( int array[],const int longth){
    for(int i=0;i<(longth/2);i++){
        int temp;
        temp = array[i];
        array[i] = array[longth-i-1];
        array[longth-1-i]=temp;
    }
}
    
void imprimir(int array[],const int longth){    
    for(int i=0;i<longth;i++){
        cout<<i<<"->"<<array[i]<<endl;
}
}
void crear_arreglo(int array[],const int longth){
	for(int i=0;i<longth;i++){
        cout<<"Ingrese el digito:";cin>>array[i];
}
}



int main()
{
    int x ;
    cout<<"Ingrese la dimension de su arreglo:";cin>>x;
    int arreglo[x];
    crear_arreglo(arreglo,x);
    cout<<endl;
    imprimir(arreglo,x);
    cout<<endl;
    invertir(arreglo,x);
    cout<<endl;
    imprimir(arreglo,x);
    return 0;

}

