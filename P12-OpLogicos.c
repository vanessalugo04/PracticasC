/*Ingresar una fecha MMDDYY,si es del primer semestre se imprime
Indicar si el dato es incorrecto*/
#include<stdio.h>
int main(){
	int month, day, year;
	printf("Prgram to print a date if it corresponds to the first quarter of year.\n");
	
	printf("MONTH: ");
	scanf("%i", &month);
	if(month<1 || month>12){
		printf("ERROR");
		return 1; //terminar el programa por error
	}
	
	printf("DAY: ");
	scanf("%i", &day);
	if(day<1 || day>31){
		printf("ERROR");
		return 1;
	}
		
	printf("YEAR: ");
	scanf("%i", &year);
	if(year<1800 || year>2024){
		printf("ERROR");
		return 1;
	}
		
	if(month==1 || month==2 || month==3){
		printf("DATE: %i/%i/%i", month, day, year);
	} else {
		printf("Try again");
	}
	
	return 0;
}
