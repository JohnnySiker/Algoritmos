#include <stdio.h>
#include <string.h>

struct Fecha{
	char dia[3];
	char mes[3];
	char anio[5];
};
enum Genero{
	hombre = 1,
	mujer = 2
};

struct Alumno{
	char nombre[40];
	char apellidoPaterno[20];
	char apellidoMaterno[20];
	struct Fecha nacimiento;
	char estado[30];
	enum Genero sexo;
	char RFC[14];
	char CURP[19];
};

void calcularCURP(struct Alumno *a){
	a->CURP[0] = a->apellidoPaterno[0];
	a->CURP[1] = a->apellidoPaterno[1];
	a->CURP[2] = a->apellidoMaterno[0];
	a->CURP[3] = a->nombre[0];

	a->CURP[4] = a->nacimiento.anio[2];
	a->CURP[5] = a->nacimiento.anio[3];

	if (strlen(a->nacimiento.mes) == 1){
		a->CURP[6] = '0';
		a->CURP[7] = a->nacimiento.mes[0];
	}else{
		a->CURP[6] = a->nacimiento.mes[0];
		a->CURP[7] = a->nacimiento.mes[1];
	}

	if (strlen(a->nacimiento.dia) == 1){
		a->CURP[8] = '0';
		a->CURP[9] = a->nacimiento.dia[0];
	}else{
		a->CURP[8] = a->nacimiento.dia[0];
		a->CURP[9] = a->nacimiento.dia[1];
	}

	if(a->sexo == hombre){
		a->CURP[10] = 'H';
	}else{
		a->CURP[10] = 'M';
	}
	
	a->CURP[11] = a->estado[0];

	for (int i = 0; i < strlen(a->estado); i++){
		if (a->estado[i] == 20){
			a->CURP[12] = a->estado[i+1];
		}
	}
	a->CURP[13] = 'N';
	a->CURP[14] = 'L';
	a->CURP[15] = 'S';
	a->CURP[16] = '0';
	a->CURP[17] = '3';
}
void calcularRFC(struct Alumno *a){
	a->RFC[0] = a->apellidoPaterno[0];
	a->RFC[1] = a->apellidoPaterno[1];
	a->RFC[2] = a->apellidoMaterno[0];
	a->RFC[3] = a->nombre[0];

	a->RFC[4] = a->nacimiento.anio[2];
	a->RFC[5] = a->nacimiento.anio[3];

	if (strlen(a->nacimiento.mes) == 1){
		a->RFC[6] = '0';
		a->RFC[7] = a->nacimiento.mes[0];
	}else{
		a->RFC[6] = a->nacimiento.mes[0];
		a->RFC[7] = a->nacimiento.mes[1];
	}

	if (strlen(a->nacimiento.dia) == 1){
		a->RFC[8] = '0';
		a->RFC[9] = a->nacimiento.dia[0];
	}else{
		a->RFC[8] = a->nacimiento.dia[0];
		a->RFC[9] = a->nacimiento.dia[1];
	}

	a->RFC[10] = 'N';
	a->RFC[11] = 'N';
	a->RFC[12] = '0';
}


int main(){
	
	struct Alumno a;

	printf("Ingresa tu nombre\n");
	scanf("%s",a.nombre);
	printf("Ingresa tu apellido paterno\n");
	scanf("%s",a.apellidoPaterno);
	printf("Ingresa tu apellido materno\n");
	scanf("%s",a.apellidoMaterno);
	printf("Ingresa el dia en que naciste\n");
	scanf("%s",a.nacimiento.dia);
	printf("Ingresa el mes en que naciste\n");
	scanf("%s",a.nacimiento.mes);
	printf("Ingresa el año en que naciste\n");
	scanf("%s",a.nacimiento.anio);
	printf("Selecciona un genero\n1)Hombre\n2)Mujer\n");
	scanf("%d",&a.sexo);

	printf("\nEn que estado naciste: ");
	scanf("%s",a.estado);


	calcularCURP(&a);
	calcularRFC(&a);
	printf("CURP: %s\n", a.CURP);
	printf("RFC: %s\n", a.RFC);
	return 0;
}