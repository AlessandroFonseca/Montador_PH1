/*
 * main.c
 *
 *  Created on: 25 de abr de 2020
 *      Author: alessandrofonseca
 */

#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

	FILE * arq;
	char str[100];// tam buffer temp leitura
	char buff[100][100];// buffer definitivo
	int linha=0;// saber qual linha
	int i;// for

	arq = fopen("programa.txt", "r");
	if(arq == NULL) /// se nao conseguiu abrir o arquivo...
	{
		printf("Nao conseguiu Abrir o Arquivo\n");
		return 0;
	}

	while(!feof(arq)){
		if(fgets(str,100,arq)!=NULL){
			//printf("%s", str);
			for(i=0;i<100;i++){// desartar o comentario, tudo após o ;
				if(str[i]==';' || str[i] == '\n' || str[i] == '\0'){//testar se o char é ; ou se um \n ou \0 que e o fim do string,
					strncpy (&buff[linha][0],str,i);// copia o que está antes do ';'
					buff[linha][i] = '\0';//adicionar manualmente o terminador de string pois o strncpy nao faz isso
					printf("%s\n", &buff[linha][0]);
					linha++;
					break;// sai fora do for quando encontrar o ;
				}
			}
		}
	}
	fclose(arq);
	/*
	 * Ler do buffer cada linha. Desartar as linhas em branco
	 * quando a gente encontrar uma linha com a palavra "'text"', a gente vai fazer uma variavel = 0
	 * quando a gente encontrar uma linha com a palavra "'data"'a gente vai fazer uma varialvel = 128
	 * as demais linhas nos vamos procurar esse padrão "[rotulo :] mnemonico [operando]"
	 *
	 */
	printf("Hello World\n");
	return 0;
}
