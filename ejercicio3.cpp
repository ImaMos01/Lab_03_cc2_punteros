#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void buble_sort(int *ptr, int tam){ //usamoes el ordenamiento burbuja 
    bool cambiar=false;

    do
    {
        cambiar=false;
        for(int i=0; i<tam; i++){
            if(*(ptr+i)>*(ptr+1+i)){
                swap(ptr+i,ptr+1+i);
                cambiar=true;
            }
        }
    } while (cambiar==true);
    
}

void mostrar(const int a[], int t){
    for(int i=0; i<t; i++)
        cout<<*a++<<"\t";
}

int main(){
    int arreglo[]={5,9,8,7,4,10,5,2,1};
    int *ptr=arreglo;
    int tam=sizeof(arreglo)/sizeof(arreglo[0]);
    cout<<"arreglo: \n";
    mostrar(arreglo,tam);
    cout<<"\n";

    buble_sort(ptr,tam);
    cout<<"ascendente: \n";
    mostrar(arreglo,tam);
    return 0;
}