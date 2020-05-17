#include <iostream>

using namespace std;

void copiar(char *ptr, char *ptr2){
    while((*ptr2++=*ptr++)!='\0'); //while((ptr2[i]=ptr[i])!='\0')i++;
}

int main(){
    char A[]="Procrastinar", B[]="Estudiar"; 
    char *ptr=A, *ptr2=B;
    cout<<"cadena A: "<<A<<"\n"<<"cadena B: "<<B<<"\n";
    copiar(ptr, ptr2);
    cout<<B;

    return 0; 
}