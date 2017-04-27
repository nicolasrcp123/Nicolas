#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	float f,c;
	cout<<"Tabla de Fahrenheit a Celsius"<<endl;
	for(f=0;f<=300;f+=20){
		c = (f-32)*5/9;
		cout<<f<<"-------------->"<<c<<endl;
	} 
	
	getch();
	return 0;
}
