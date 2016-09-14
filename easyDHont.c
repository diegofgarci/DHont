
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	
	char name[256];
	char province [256];
	int day;
	int month;
	int year;
	
	int votes;
	int seats;
	
	int select;
	

	printf ("\n ***DHONT CALCULATOR*** \n"); 
	
	printf ("\n Choose a type:\n");
	printf ("\n 1. Elecciones Generales\n");
	printf ("\n 2. Elecciones Autonómicas\n");
	printf ("\n 3. Elecciones Europeas\n");
	 
	scanf ("%i", &select);
	switch (select){
		
		case 1: 
			strcpy (name,"Elecciones Generales");
			break;
		
		case 2:
			strcpy (name, "Autonómicas");
			break;
		
		case 3: 
			strcpy (name,"Europeas");
			break;
	}
	
	
	printf ("\n Day:");
	scanf ("%i", &day);
	
	printf ("\n Month:");
	scanf ("%i", &month);
	
	printf ("\n Year:");
	scanf ("%i", &year);
	
	system("clear");
	
	printf ("%s %i/%i/%i\n", name, day, month, year); 
	
	printf ("\nPlease, introduce a province:");
	scanf ("%s", province);
	system("clear");
	
	printf ("\n Let's calculate!!\n");
	
	printf ("\n Total valid votes:");
	scanf ("%i", &votes);
	printf ("\n Total seats to distribute:\n");
	scanf ("%i", &seats);
	
	
	
	return 0;
}

