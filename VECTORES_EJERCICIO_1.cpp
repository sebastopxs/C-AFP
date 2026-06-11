#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cantidad;
    double suma=0;
    cout<<"INGRESE LA CANTIDAD DE NUMEROS PARA TU VECTOR: "<<endl;
    cin>>cantidad;
    
    vector <int> a(cantidad);
    
    //En este apartado tambien calculamos la media
    for(int i=0;i<cantidad;i++){
        cout<<"DIGITE EL NUMERO EN LA POSICIÓN ["<< i <<"] : ";
        cin>>a[i];
        suma += (double) a[i]/cantidad;
    }
    cout<<endl;
    
    //Imprimimos los vectores
    cout<<"SU VECTOR ES: "<<endl;
    for(int elementos: a){
        cout<<elementos<<" ";
    }
    cout<<endl;
    
    cout<<"\nLA MEDIO DE LOS ELEMENTOS DEL VECTOR ES: "<<endl;
    cout<<suma;

    return 0;
}
