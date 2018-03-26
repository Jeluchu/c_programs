//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>

int main(){

   float x,y,c;				
   
   printf("Introduce el valor de 'x' e 'y': ");	
   scanf("%f%f",&x,&y);
   c=x>y?x:y;				
   printf("El mayor entre %.2lf y %.2lf es %.2lf\n",x,y,c);	
}
