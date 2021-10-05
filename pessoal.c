#include <stdio.h>
#include<string.h>

void Quests();

// Formulário teste
void Data(){
    printf("***PREENCHA O FORMULARIO***\n");
    Quests();
};

    char pnome[] = {};
    char snome[] = {};
    char dnascimento[] = {};
    int idade;
    double altura;

void Quests() {
    

    printf("Qual e o seu primerio nome:\n");
    scanf("%s", &pnome);

    system("cls");
    printf("Qual e o seu sobrenome: \n");
    scanf("%s", &snome);

    system("cls");
    printf("Qual sua data de nascimento: \n");
    scanf("%s", &dnascimento);

    system("cls");
    printf("Qual e o sua idade: \n");
    scanf("%d", &idade);

    system("cls");
    printf("Qual sua altura: \n");
    scanf("%d", &altura);

    FormPrint();

};

void FormPrint(){
    printf("****FICHA PESSOAL****\n");
    printf("* nome: %s %s\n", pnome, snome);
    printf("* d.n: %s %s\n", dnascimento);
    printf("* d.n: %s %s\n", dnascimento);


    system("pause");
};