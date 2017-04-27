  cout << "Ingresa el numero A" << endl;
  cin >> number_a;
  cout << "Ingresa el numero B" << endl;
  cin >> number_b;

  cout << "El valor de A es " << number_a << endl;
  cout << "El valor de B es " << number_b << endl;

  //uso de la funcion intercambio con punteros
  int *ptrA = &number_a;
  int *ptrB = &number_b;
  changeNumbers(ptrA, ptrB);

  cout << "El valor de A ahora es " << number_a << endl;
  cout << "El valor de B ahora es " << number_b << endl;

}

//funcion intercambio con punteros
void changeNumbers(int *r, int *s)
  {
     int temp = *r;
     *r = *s;
     *s = temp;
     return;


//9 Reescriba la función de intercambio de dos números, utilice punteros en lugar de paso por referencia.
cout << "Utilizando insertionSort"<< endl;
  cout << "Cuantos elementos ingresaras a la lista: ";
  int lenght; cin >> lenght;
  cout << endl;
  int arreglo[lenght];//declarando el arreglo
  createArreglo(arreglo,lenght);//creando el arreglo
  cout << endl;
  printArreglo(arreglo,lenght);//imprimiendo el arreglo

  insertionSort(arreglo,lenght);// llamando a insertionSort
  printArreglo(arreglo,lenght);// imprimiendo el arreglo ordenando




}

void createArreglo( int arreglo[],int lenght)
{
  //Ingresar los valores de un arreglo pidiendo un lenght
  for( int i = 0 ; i < lenght ; i++)
  {
    int askNumber; cin >> askNumber;
    arreglo[i] = askNumber;
  }


}
void insertionSort( int arreglo[], int lenght)
{

  for( int  i = 1 ; i < lenght ; i++)
  {
    int j = i;
    while ( j > 0 && arreglo[j-1] > arreglo [j])
    {
      int temp = arreglo[j];
      arreglo[j]=arreglo[j-1];
