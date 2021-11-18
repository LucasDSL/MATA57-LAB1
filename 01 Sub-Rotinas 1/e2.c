//feito por Alan Cristian Nunes da Silva
#include <stdlib.h>
#include <stdio.h>

void semana(int dia){//função que imprime os dias da semana 
	switch(dia){
		case 1:
			printf("1 = Domingo\n");
			break;
		case 2:
			printf("2 = Segunda\n");
			break;
		case 3:
			printf("3 = Terça\n");
			break;
		case 4:
			printf("4 = Quarta\n");
			break;
		case 5:
			printf("5 = Quinta\n");
			break;
		case 6:
			printf("6 = Sexta\n");
			break;
		case 7:
			printf("7 = Sábado\n");
			break;
		default:
			
	}
}

int main(){
	int dia;
	scanf("%d", &dia);
	semana(dia);
    return 0;
}
