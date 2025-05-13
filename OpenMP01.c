/**********************************************************************************************************************************
Autor: Samuel Emperador
Tema: Paralelismo en OpenMP
Fecha: 10 de Septiembre de 2025
**********************************************************************************************************************************/
#include <omp.h>
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){
	printf("OpenMP ejecutando con %d hilos \n", omp_get_max_threads());
#pragma omp parallel
	{//Code here will be executed by all threads
		printf("Hello World desde el thread %d\n", omp_get_thread_num());
}

return 0;


}
