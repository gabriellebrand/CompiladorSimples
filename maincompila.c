#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"compila.h"

int main (void) {
  funcp f;
  FILE *myfp;
  int a;

	if ((myfp = fopen ("menorPositivo", "r")) == NULL) {
    	perror ("nao conseguiu abrir arquivo!");
    	exit(1);
	}

	f = compila(myfp);

	a = (*f)(7,9,3);
	printf("%d", a);


  fclose(myfp);
  return 0;
}
