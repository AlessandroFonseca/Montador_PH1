/*
 * main.c
 *
 *  Created on: 25 de abr de 2020
 *      Author: alessandrofonseca
 */

#include <stdio.h>

int main(int argc,char *argv[]){

	FILE * arq;
	arq = fopen("programa.txt", "r");
	if(arq == NULL) /// se nao conseguiu abrir o arquivo...
	{
		printf("Nao conseguiu Abrir o Arquivo\n");
		return 0;
	}


	printf("Hello World\n");
	return 0;
}
