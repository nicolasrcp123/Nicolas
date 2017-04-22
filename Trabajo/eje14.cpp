#include <iostream>
using namespace std;

using namespace std;

int sumaArreglo(int array[], int length){
	int r = 0;
	
	if(length==0){
		r += array[0];
	}else{
		r = array[length] + sumaArreglo(array,length-1);
	}
	return r;
}

int main()
{
	
	int x = 3;
	int arreglo[] = {2,6,4,9};
	
	cout << "Resultado de la suma recursiva: " << sumaArreglo(arreglo,x);
	return 0;
	
}
    
