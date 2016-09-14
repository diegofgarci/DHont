#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 128
#define MAX_NUMBER_ELECTION 50


int main (void){

typedef struct {
	int day;
	int month;
	int year;
} tDate;

typedef struct {
	tDate date;
	char name [MAX_NAME_LENGTH];	
} tElection;

tElection election [MAX_NUMBER_ELECTION];	
int select;
	
	

	printf ("D'hont v 0.1\n");

	printf ("\nPlease, choose an option:\n");
	
	printf ("\n1. NUEVO\n");

	printf ("\n2. CONSULTAR\n");

	printf ("\n3. SALIR\n");

	
	scanf ("%i", &select);

	switch (select){
		case 1:
			printf("\nNUEVO\n");
			printf ("\n Please, choose an option:\n");
			printf ("\n1. Crear\n");
			printf ("\n2. Salir\n");
			break;
		case 2:
			printf("\nCONSULTAR\n");
			break;
		default:
			printf ("\nSALIR\n");
			break;
	}
		
return 0;
}
