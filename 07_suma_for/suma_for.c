//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>

int main(){

    int i,j,n;
    long sum=0,temp=0;

    printf("Introduzca un número: ");
    scanf("%d",&n);

    if(n<1){
      printf("El valor de 'n' no puede ser inferior a 1!\n");
      return 0;
    }

    for(i=1;i<=n;i++){
       temp=0;
      for(j=1;j<=i;j++)
	 temp+=j;
	 sum+=temp;
    }

    printf("La suma de la secuencia de %d es %d\n",n,sum);
    getchar();
    getchar();

    return 0;
}
