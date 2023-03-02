#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct lista {
	float nota[4];
	float media;
	char nome[50];

};

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int i;
	int j;
	float soma;
	soma = 0;
	i=0;
	j=0;
	
	struct lista list[5];
	struct lista listprov;
	
	for (i=0;i<5;i++)
	{
		printf ("\nEscreva o nome do aluno %d: \n", i+1);
		scanf ("%s", list[i].nome);
		fflush(stdin);
		for (j=0; j<4; j++){
			printf ("Digite a nota %d:\n", j+1);
			scanf ("%f", &list[i].nota[j]);
			fflush(stdin);
		soma = soma + list[i].nota[j];
		}
		list[i].media = soma/4;
		soma = 0;
		printf ("\nO aluno %s teve a média de %.2f.\n", list[i].nome, list[i].media);
	}
	printf ("\n\n");
	for (i=0; i<4; i++){
		for (j=i+1; j<5; j++){
			if (list[i].media > list[j].media){
				listprov = list[i];
				list[i]= list[j];
				list[j]=listprov;

	}
	}	
}
	system ("cls");
	printf ("\n NOTA DOS ALUNOS \n\n");
	for (i=0;i<5;i++){
		printf ("\nO aluno %s ficou em %d com média %.2f\n", list[i].nome, i+1, list[i].media);
	}
	return (0);
}
