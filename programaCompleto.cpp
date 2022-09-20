#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void telaInicial();//declaração de escopo de função
void menuPrincipal();
void operacoesComplexas();
void operacoesAritmeticas();
void configuracoes();
void creditos();
void soma();
void subtracao();
void multiplicacao();
void divisao();
void parouImpar();
int op=0;
int main(){
	system("chcp 65001");
	system("cls");
	setlocale(LC_ALL,"Portguese");
	telaInicial();
	return 0;
}

void telaInicial(){
	printf("Programa de operações Matemáticas");
	printf("\n---------------------------------\n\n\n\n\n");
	printf("Seja bem vindo.....");
	printf("\n\n\n\n\n---------------------------------\n");
	printf("Criado por: Vinicius Aguiar\n\n\n\n\n");
	printf("Digite qualquer tecla para entrar no programa...");
	getchar();
	system("cls");	
	menuPrincipal();
}

void menuPrincipal(){
	system("cls");
	while(op!=5){
		printf("---------Menu Principal----------");
		printf("\n---------------------------------\n\n");
		printf("1 - Operações Aritméticas\n");
		printf("2 - Operações Complexas\n");
		printf("3 - Configurações\n");
		printf("4 - Créditos\n");
		printf("5 - Sair\n\n\n\n\n\n\n");
		printf("\n---------------------------------\n");
		printf("Digite uma das opções acima...");
		scanf("%d",&op);
		switch(op){
			case 1:
				operacoesAritmeticas();
				break;
			case 2:
				operacoesComplexas();
				break;
			case 3:
				configuracoes();
				break;
			case 4:
				creditos();
				break;
			case 5:
				telaInicial();
			default:
				printf("Entre com uma opção válida...");
		}
	}
}

void operacoesAritmeticas(){
	system("cls");
	while(op!=5){
		printf("------Operações Aritméticas-----");
		printf("\n---------------------------------\n\n");
		printf("1 - Soma\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("9 - Voltar\n\n\n\n\n\n\n");
		printf("\n---------------------------------\n");
		printf("Digite uma das opções acima...");
		scanf("%d",&op);
		switch(op){
			case 1:
				soma();
				break;
			case 2:
				subtracao();
				break;
			case 3:
				multiplicacao();
				break;
			case 4:
				divisao();
				break;
			case 9:
				menuPrincipal();
			default:
				printf("Entre com uma opção válida...");
		}
	}
}

void operacoesComplexas(){
	system("cls");
	while(op!=5){
		printf("------Operações Complexas-----");
		printf("\n---------------------------------\n\n");
		printf("1 - Par ou Ímpar\n");
		printf("2 - Número Primo\n");
		printf("3 - Fatorial\n");
		printf("4 - Potência\n");
		printf("9 - Voltar\n\n\n\n\n\n\n");
		printf("\n---------------------------------\n");
		printf("Digite uma das opções acima...");
		scanf("%d",&op);
		switch(op){
			case 1:
				parouImpar();
				break;
			case 2:
				printf("Número Primo");
				break;
			case 3:
				printf("Fatorial");
				break;
			case 4:
				printf("Potência");
				break;
			case 9:
				menuPrincipal();
			default:
				printf("Entre com uma opção válida...");
		}
	}
}

void configuracoes(){
	system("cls");
	while(op!=5){
		printf("------Configurações-----");
		printf("\n---------------------------------\n\n");
		printf("1 - Alterar Cor\n");
		printf("9 - Voltar\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n---------------------------------\n");
		printf("Digite uma das opções acima...");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Alterar cor");
				break;
			case 9:
				menuPrincipal();
			default:
				printf("Entre com uma opção válida...");
		}
	}
}

void creditos(){
	system("cls");
	while(op!=5){
		printf("Programa de operações Matemáticas");
		printf("\n---------------------------------\n\n\n\n\n");
		printf("Criado em 19/09/2022\n");
		printf("\n\n\n\n\n---------------------------------\n");
		printf("(Criado por: Vinicius Aguiar)\n\n\n\n\n");
		printf("Digite 9 para voltar ao programa...");
		scanf("%d",&op);
		menuPrincipal();
	}
}

void soma(){
	int n1,n2,total;
	system("cls");
	printf("Digite o primeiro valor da soma:");
	scanf("%d",&n1);
	printf("Digite o segundo valor da soma:");
	scanf("%d",&n2);
	total=n1+n2;
	printf("O total da soma é: %d", total);
	printf("\n\n\n\nDigite 9 para voltar ao programa...");
	scanf("%d",&op);
	system("cls");
}

void subtracao(){
	int n1,n2,total;
	system("cls");
	printf("Digite o primeiro valor da subtração:");
	scanf("%d",&n1);
	printf("Digite o segundo valor da subtração:");
	scanf("%d",&n2);
	total=n1-n2;
	printf("O total da subtração é: %d", total);
	printf("\n\n\n\nDigite 9 para voltar ao programa...");
	scanf("%d",&op);
	system("cls");
}

void multiplicacao(){
	int n1,n2,total;
	system("cls");
	printf("Digite o primeiro valor da multiplicação:");
	scanf("%d",&n1);
	printf("Digite o segundo valor da multiplicação:");
	scanf("%d",&n2);
	total=n1*n2;
	printf("O total da multiplicação é: %d", total);
	printf("\n\n\n\nDigite 9 para voltar ao programa...");
	scanf("%d",&op);
	system("cls");
}

void divisao(){
	int n1,n2,total;
	system("cls");
	printf("Digite o primeiro valor da divisão:");
	scanf("%d",&n1);
	printf("Digite o segundo valor da divisão:");
	scanf("%d",&n2);
	total=n1/n2;
	printf("O total da divisão é: %d", total);
	printf("\n\n\n\nDigite 9 para voltar ao programa...");
	scanf("%d",&op);
	system("cls");
}
void parouImpar(){
	int n;
	system("cls");
	printf("Digite um número:");
	scanf("%d",&n);
	if(n%2==0){
		printf("O número %d é Par.", n);
	}else{
		printf("O número %d é Impar.", n);
	}
	printf("\n\n\n\nDigite 9 para voltar ao programa...");
	scanf("%d",&op);
	system("cls");
}