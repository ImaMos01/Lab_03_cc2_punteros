#include <iostream> //invertir

using namespace std;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void invertir_iteracion(int *a, int *ptr){
    while(ptr>a)
        swap(a++,ptr--);
} 

int invertir_recursiva(int *a, int *ptr){
    if(ptr<a){
        swap(a++,ptr--);
        return *a;
    }
    swap(a++,ptr--);
    return invertir_recursiva(++a,--ptr);

}   

void mostrar(int a[], int t){
    for(int i=0; i<t; i++)
        cout<<*(a+i)<<"\t";
}

int main(){
    int arreglo[]={1,2,3,4,5,6};
    int *a=arreglo; 
    int t= sizeof(arreglo)/sizeof(arreglo[0]);
    int *ptr=a+t-1;

    cout<<"arreglo:   ";
    mostrar(arreglo, t);
    cout<<"\n";

    invertir_iteracion(a,ptr);
    cout<<"iterativa: ";
    mostrar(arreglo,t);
    cout<<"\n";

    invertir_recursiva(a,ptr);
    cout<<"recursica: ";
    mostrar(arreglo,t);

    return 0;
}