#include <stdio.h>

struct Fecha{
	int dia;
	int mes;
	int anio;
};
enum Genero{
	hombre = 1,
	mujer = 2
};

struct Alumno{
	char nombre[20];
	char apellidoPaterno[20];
	char apellidoMaterno[20];
	struct Fecha nacimiento;
	char estado[20];
	enum Genero sexo;
	char RFC[12];
	char CURP[18];
};

char * calcularCURP(struct Alumno *a){
	a->CURP[0] = a->apellidoPaterno[0];
	a->CURP[1] = a->apellidoPaterno[1];
	a->CURP[2] = a->apellidoMaterno[0];
	a->CURP[3] = a->nombre[0];
	if(a->sexo == Hombre){
		a->CURP[4] = 'H'
	}else{
		a->CURP[4] = 'M'
	}
	
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
	scanf("%d",&a.nacimiento.dia);
	printf("Ingresa el mes en que naciste\n");
	scanf("%d",&a.nacimiento.mes);
	printf("Ingresa el año en que naciste\n");
	scanf("%d",&a.nacimiento.anio);
	printf("Selecciona un genero\n1)Hombre\n2)Mujer");
	scanf("%d",&a.sexo);

	char algo = calcularCURP(&a);


	return 0;
}