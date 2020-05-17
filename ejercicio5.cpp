#include <iostream>

using namespace std;

void concatenar(char *ptr, char *ptr2){
    while(*ptr++);
    *--ptr;
    *ptr++=' ';
    while(*ptr2++)
        *ptr++ = *ptr2;
}

int main(){
    char b[100]="hola";
    char a[100]="mundo";
    char *ptr=b;
    char *ptr2=a;
    concatenar(ptr,ptr2);
    cout<<b;

    return 0;
}