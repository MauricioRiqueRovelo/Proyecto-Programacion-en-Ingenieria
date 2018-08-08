#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "time.h"

//Arreglo de rondas y tiros.
struct Rondas{
	int Nrondas[12][2];
	int primertiro, segundotiro;
};

//Función para identificar chuza o semipleno.
void StrikeOrSpare(int a, int b){
	
	if (a == 10){
		printf ("Chuza! Excelentisimo. \n");
	} else if (a != 10 && a + b == 10){
		printf ("Semipleno, tumbaste los diez! Aunque pudiste haberlo hecho a la primera. \n");
	}
}

//Función para mostrar los mensajes de cada ronda.
void Mensaje(int a, int b){
	char caracter;
	
	switch (a){
		case 0:
			printf ("No tiraste ningun bolo! Suerte para el proximo tiro. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 1:
			printf ("Solo uno! A eso llamo mala suerte. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 2:
			printf ("Derribaste dos bolos! Mejora a la siguiente. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 3:
			printf ("Tumbaste tres bolos! Pudo ser peor. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 4:
			printf ("Tiraste cuatro bolos! Ni PEMEX. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 5:
			printf ("Se cayo la mitad! No esta mal. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 6:
			printf ("Derribaste seis bolos! Echale mas ganas. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 7:
			printf ("Tiraste siete bolos! Buena esa. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 8:
			printf ("Se cayeron ocho! Excelente. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 9:
			printf ("Derribaste nueve! Esto se esta poniendo mas que interesante. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 10:
			printf ("Tumbaste los diez! Genial! \n");
			StrikeOrSpare(a, b);
			break;
	}

	switch (b){
		case 0:
			if (a == 10){
				printf ("Presione cualquier caracter para ver los resultados! \n \n");
				caracter = getch();
				break;
			} else {
			printf ("Fallaste! No tiraste nada mas! \n");
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		}
		
		case 1:
			printf ("Solo tiraste un bolo mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 2:
			printf ("Derribaste dos bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		case 3:
			printf ("Se cayeron tres bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		case 4:
			printf ("Tiraste cuatro bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 5:
			printf ("Se derrumbaron cinco bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 6:
			printf ("Seis bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 7:
			printf ("Derribaste siete bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 8:
			printf ("Tiraste ocho bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 9:
			printf ("Tumbaste nueve bolos mas! \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 10:
			printf ("Tiraste los diez! Felicidades. \n");
			
			StrikeOrSpare(a, b);
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
	}
}

//Función para mostrar los mensajes de los tiros extra.
void MensajeTiroExtra(int tiroextra1, int tiroextra2){
	char caracter;
	
	switch (tiroextra1){
		case 0:
			printf ("No tiraste ningun bolo! Suerte para el proximo tiro. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 1:
			printf ("Solo uno! A eso llamo mala suerte. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 2:
			printf ("Derribaste dos bolos! Mejora a la siguiente. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 3:
			printf ("Tumbaste tres bolos! Pudo ser peor. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 4:
			printf ("Tiraste cuatro bolos! Ni PEMEX. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 5:
			printf ("Se cayo la mitad! No esta mal. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 6:
			printf ("Derribaste seis bolos! Echale mas ganas. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 7:
			printf ("Tiraste siete bolos! Buena esa. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 8:
			printf ("Se cayeron ocho! Excelente. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 9:
			printf ("Derribaste nueve! Esto se esta poniendo mas que interesante. \n");
			printf ("Presione cualquier caracter para el siguiente tiro! \n");
			caracter = getch();
			break;
		case 10:
			printf ("Tumbaste los diez! Genial! \n");
			break;
	}

	switch (tiroextra2){
		case 0:
			printf ("Fallaste! No tiraste nada mas! \n");
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		
		case 1:
			printf ("Solo tiraste un bolo mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 2:
			printf ("Derribaste dos bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		case 3:
			printf ("Se cayeron tres bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
		case 4:
			printf ("Tiraste cuatro bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 5:
			printf ("Se derrumbaron cinco bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 6:
			printf ("Seis bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 7:
			printf ("Derribaste siete bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 8:
			printf ("Tiraste ocho bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 9:
			printf ("Tumbaste nueve bolos mas! \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
			
		case 10:
			printf ("Tiraste los diez! Felicidades. \n");
			
			printf ("Presione cualquier caracter para ver los resultados! \n \n");
			caracter = getch();
			break;
	}
}

int a, b;
int i;
int x, x2, x3;
int y, z;
int resultado;

int main(){
	int tiroextra1, tiroextra2;
	int c, d, e, f, g;
	struct Rondas rondas;
	char caracter;
	
	printf ("Presione cualquier caracter para iniciar el juego! \n \n");
	caracter = getch();
	
do{

 for (i = 1; i <= 10; i ++){
	
	//Generación al azar del valor del primer tiro.
	srand (time(NULL));
	a = rand() % 11;
	
	//Generación al azar del valor del segundo tiro (dependiendo del valor del primero).
	srand (time(NULL));
	b = rand() % ((10 - a) + 1 - 0) + 0;
 
	rondas.Nrondas[i][1] = a;
	rondas.Nrondas[i][2] = b;
	
	rondas.primertiro = a;
	rondas.segundotiro = b;
	
	Mensaje(a, b);
	
	//Mensajes de cada tiro como se muestra en el juego de boliche original.
	if (a == 10){
		printf ("Resultado del primer tiro: X \n");
	} else if (a == 0){
		printf ("Resultado del primer tiro: - \n");
	} else {
	printf ("Resultado del primer tiro: %d \n", rondas.primertiro);
	}
	
	if (b == 10){
		printf ("Resultado del segundo tiro: / \n \n");
	} else if (a != 10 && a + b == 10){
		printf ("Resultado del segundo tiro: / \n \n");
	} else if (b == 0){
		printf ("Resultado del segundo tiro: - \n \n");
	} else {
	printf ("Resultado del segundo tiro: %d \n \n", rondas.segundotiro);
	}
	
	//Variable para poder verificar si la última ronda es chuza.
	z = rondas.Nrondas[10][1];
	
	//Mensajes para proseguir con el programa.
	if (i == 10){
		if (z != 10){
		printf ("Presione cualquier caracter para ver la puntuacion! \n \n");
		caracter = getch();
	} else if (z == 10){
		printf ("Presione cualquier caracter para los dos tiros extra! \n \n");
		caracter = getch();
	}
	} else {
	printf ("Presione cualquier caracter para la siguiente ronda! \n \n");
	caracter = getch();
}
	
	//Operaciones correpondientes a los tiros extra.
	if (z == 10){
			srand (time(NULL));
			tiroextra1 = rand() % 11;
			
			srand (time(NULL));
			tiroextra2 = rand() % 11;
			
			rondas.Nrondas[11][1] = tiroextra1;
			rondas.Nrondas[11][2] = tiroextra2;
	
			rondas.primertiro = tiroextra1;
			rondas.segundotiro = tiroextra2;
			
			MensajeTiroExtra(tiroextra1, tiroextra2);
			
			if (tiroextra1 == 10){
				printf ("Resultado del primer tiro: X \n");
			} else if (tiroextra1 == 0){
				printf ("Resultado del primer tiro: - \n");
			} else {
			printf ("Resultado del primer tiro: %d \n", rondas.primertiro);
			}
	
			if (tiroextra2 == 10){
				printf ("Resultado del segundo tiro: X \n \n");
			} else if (tiroextra2 == 0){
				printf ("Resultado del segundo tiro: - \n \n");
			} else {
				printf ("Resultado del segundo tiro: %d \n \n", rondas.segundotiro);
			}
		}
	}
 
	}while (i < 10);  		

	//Resultados.
	resultado = 0;
	
	do{
	for (y = 1; y <= 10; y++){
		x = y;
		x2 = y + 1;
		x3 = y + 2;
		
		c = rondas.Nrondas[x][1];
		d = rondas.Nrondas[x][2];
		e = rondas.Nrondas[x2][1];
		f = rondas.Nrondas[x2][2];
		g = rondas.Nrondas[x3][1];
		
		if (c == 10){
			if (e == 10){
				resultado = resultado + c + e + g;
			
				printf ("Puntaje de la ronda %d es: %d \n", x, resultado);
			} else if (e != 10){
				resultado = resultado + c + e + f;
			
				printf ("Puntaje de la ronda %d es: %d \n", x, resultado);
			}
			
		} else if (c != 10 && c + d == 10){
			resultado = resultado + c + d + e;
		
			printf ("Puntaje de la ronda %d es: %d \n", x, resultado);
		} else if (c + d != 10){
			resultado = resultado + c + d;
		
			printf ("Puntaje de la ronda %d es: %d \n", x, resultado);
		} else if (z == 10){
			resultado = resultado + tiroextra1 + tiroextra2;
			
			printf ("Puntaje de la ronda 10 es: %d \n", resultado);
		}
	}
	
} while (y < 10);


	printf ("Presiona cualquier tecla para salir");
	caracter = getch();
	
	return 0;
 }
 
 
 
