#include<iostream>
#include<conio.h>

using namespace std;

void invertir_punteros(int *elemento,int length){
	for(int i=0;i<(length/2);i++){
        int temp;
        temp = *(elemento+i);
        *(elemento+i) = *(elemento+length-i-1);
       *(elemento+length-1-i)=temp;
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
    invertir_punteros(arreglo,x);
    imprimir(arreglo,x);
    return 0;
    
    }
