//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>

int main(){

    printf("Los 'bytes' de las variables son:\n\n");

    printf("Longitud de 'int': %d bytes\n",sizeof(int));
    printf("Longitud de 'char': %d byte\n",sizeof(char));
    printf("Longitud de 'short': %d bytes\n",sizeof(short));
    printf("Longitud de 'long': %d bytes\n",sizeof(long));
    printf("Longitud de 'float': %d bytes\n",sizeof(float));
    printf("Longitud de 'double': %d bytes\n",sizeof(double));
    printf("Longitud de 'long double': %d bytes\n",sizeof(long double));

    getchar();

    return 0;

}

