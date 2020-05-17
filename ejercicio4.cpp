#include <iostream>
#include <string.h>

using namespace std;

int tamano_iterativo(char *ptr){
    int i=0;
    while(*ptr++){//mientras sea diferente a cero \0.
        i++;
    } 
    return i;
}

int tamano_recursivo(char *ptr, int c){
    if(*ptr++)
        return c + tamano_recursivo(ptr,c++);
    else 
        return 0;
}

int main(){
    char palabra[]="holamundo";
    char *ptr=palabra;
    int c=0;
    cout<<"el tamano de la cadena es(iterativo): "<<tamano_iterativo(ptr)<<"\n";
    cout<<"el tamano de la cadena es(recursivo): "<<tamano_recursivo(ptr,c);
    return 0;
}