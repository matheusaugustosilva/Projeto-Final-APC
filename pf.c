#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void limparTela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
float gastoenergiaM(char sex, float weight, int age)
{
    float ge;
    char teste;
    char teste2;
    teste = 'M';
    if ((sex == teste) && (age >= 0) && (age < 3))
    {
        ge = (59.512 * weight) - 30.4;
    }
    else if ((sex == teste) && (age >= 3) && (age < 10))
    {
        ge = (22.706 * weight) + 504.3;
    }
    else if ((sex == teste) && (age >= 10) && (age < 18))
    {
        ge = (17.686 * weight) + 658.2;
    }
    else if ((sex == teste) && (age >= 18) && (age < 30))
    {
        ge = (15.057 * weight) + 692.2;
    }
    else if ((sex == teste) && (age >= 30) && (age < 60))
    {
        ge = (11.472 * weight) + 873.1;
    }
    else if ((sex == teste) && (age >= 60))
    {
        ge = (11.711 * weight) + 587.7;
    }
    else if ((sex == teste2) && (age >= 0) && (age < 3))
    {
        ge = (58.317 * weight) - 31.1;
    }
    else if ((sex == teste2) && (age >= 3) && (age < 10))
    {
        ge = (20.315 * weight) + 485.9;
    }
    else if ((sex == teste2) && (age >= 10) && (age < 18))
    {
        ge = (13.384 * weight) + 692.6;
    }
    else if ((sex == teste2) && (age >= 18) && (age < 30))
    {
        ge = (14.818 * weight) + 486.6;
    }
    else if ((sex == teste2) && (age >= 30) && (age < 60))
    {
        ge = (8.126 * weight) + 845.6;
    }
    else if ((sex == teste2) && (age >= 60))
    {
        ge = (9.082 * weight) + 658.5;
    }
    return ge;
}
int main()
{
    char sexo;
    int idade, escolha, fator1, fator2;
    float peso, resultado, fatoratv;
    setlocale(LC_ALL, "portuguese");
    printf("-------------> Contador de caloridas <-------------");
    printf("\n---------------------------------------------------");
    printf("\n**** Vamos digitar alguns dados               ****");
    printf("\n**** Digite seu sexo:                         ****\n");
    scanf(" %c", &sexo);

    printf("**** Digite sua idade:                          ****\n");
    scanf("%d", &idade);

    printf("**** Digite seu peso:                           ****\n");
    scanf("%f", &peso);
    limparTela();

    printf("\n---------------------------------------------------");

    printf("\nAgora digite uma opção para cálculo: \n1- Manter seu peso \n2- Engordar \n3- Emagrecer \n0-Sair\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        /* code */
        break;
    case 2:
        break;
    case 3:
        break;

    default:
        break;
    }
}
