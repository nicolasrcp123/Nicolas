#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    cout << "Ingresa numero: " << endl;
    cin>>x;
    if(x%2==0){
        cout<<"EL NUMERO INGRESADO ES PAR"<<endl;
        main();
    }
    else if(x==-1){
        return 0;
    }
    else{
        cout<<"EL NUMERO INGRESADO ES IMPAR"<<endl;
        main();
    }
    return 0;
}
