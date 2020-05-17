#include <iostream>

using namespace std;

int suma_iteracion(const int a[], int t){
    int suma=0;
    for (int i=0; i<t;i++)
        suma+=*a++;

    return suma;
}

int suma_recursiva(const int a[], int t){
    if (t==0){
        return 0;
    }
        return *a + suma_recursiva(++a,--t);

}

int main(){
    int a[]={2,4,1,3,5,7,6};
    int t = sizeof(a) / sizeof(a[0]);
    cout<<"la suma iterativa es: "<<suma_iteracion(a,t)<<"\n";
    cout<<"la suma recursiva es: "<<suma_recursiva(a,t);
    
    return 0;
}