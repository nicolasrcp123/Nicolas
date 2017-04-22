#include <iostream>

using namespace std;
void insertion_sort(int arr[],int length);
int main()
{
    int x,n[x],s=0;
    cout<<"ingresa longitud de lista";
    cin>>x;
    cout << "Ingresa valores de lista" << endl;


    
    cout<<"lista ordenada"<<s<<endl;


    return 0;
}
void insertion_sort(int arr[],int length){
    int j, temp;

	for (int i = 0; i < length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}


