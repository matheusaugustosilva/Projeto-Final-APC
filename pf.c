#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

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

    float ge = 0;
    char teste;
    char teste2;
    teste = 'M';
    teste2 = 'F';
    if ((sex == teste) && (age >= 0) && (age <= 3))
    {
        ge = (59.512 * weight) - 30.4;
    }
    else if ((sex == teste) && (age > 3) && (age <= 10))
    {
        ge = (22.706 * weight) + 504.3;
    }
    else if ((sex == teste) && (age > 10) && (age <= 18))
    {
        ge = (17.686 * weight) + 658.2;
    }
    else if ((sex == teste) && (age > 18) && (age <= 30))
    {
        ge = (15.057 * weight) + 692.2;
    }
    else if ((sex == teste) && (age > 30) && (age <= 60))
    {
        ge = (11.472 * weight) + 873.1;
    }
    else if ((sex == teste) && (age > 60))
    {
        ge = (11.711 * weight) + 587.7;
    }
    else if ((sex == teste2) && (age > 0) && (age <= 3))
    {
        ge = (58.317 * weight) - 31.1;
    }
    else if ((sex == teste2) && (age > 3) && (age <= 10))
    {
        ge = (20.315 * weight) + 485.9;
    }
    else if ((sex == teste2) && (age > 10) && (age <= 18))
    {
        ge = (13.384 * weight) + 692.6;
    }
    else if ((sex == teste2) && (age > 18) && (age <= 30))
    {
        ge = (14.818 * weight) + 486.6;
    }
    else if ((sex == teste2) && (age > 30) && (age <= 60))
    {
        ge = (8.126 * weight) + 845.6;
    }
    else if ((sex == teste2) && (age > 60))
    {
        ge = (9.082 * weight) + 658.5;
    }
    return ge;
}
float consumoKcal(float ge, float fator)
{
    return ge * fator;
}
float reducaopeso(float kgperder, int tempo, float gasto)
{
    float kcalEmagrecer = kgperder * 7700; // calorias necessária para emagrecerm, vai pegar qts kgs a pessoa quer perder e multiplicar por 7700
    float defcitdiario = kcalEmagrecer / tempo;
    float resultado = gasto - defcitdiario;
    return resultado;
}

int main()
{
    char sexo, exefis, maiusculo;
    int idade, escolha, opcao, temp;
    float peso, kcal, fatoratv, energia, reducao, aumento, CR;
    setlocale(LC_ALL, "portuguese");

    printf("=============== Contador de caloridas ===============");

    do
    {
        printf("\n=====================================================");
        printf("\n[1]- Inserir dados");
        printf("\n[2]- Saber mais sobre o programa");
        printf("\n[0]- Sair\n");
        scanf("%d", &escolha);
        switch (escolha)

        {
        case 0:
            limparTela();
            printf("  ___  _   _   ___    _    \n");
            printf(" | _ \\| | | | / _ \\  /_\\   \n");
            printf(" |  _/| |_| || (_) |/ _ \\  \n");
            printf(" |_|   \\___/  \\___//_/ \\_\\   +VIDA\n");

            break;

        case 1:
            limparTela();
            printf("\n================================================");
            printf("\n==== Vamos digitar alguns dados               ====");
            printf("\n**** Digite seu sexo:                         ****\n");
            scanf(" %c", &sexo);

            printf("**** Digite sua idade:                          ****\n");
            scanf("%d", &idade);

            printf("**** Digite seu peso:                           ****\n");
            scanf("%f", &peso);
            gastoenergiaM(sexo, idade, peso);

            break;
        case 2:
            limparTela();
            printf("\n================================================");
            printf("\nO objetivo do contador de calorias é ajudar a entender a quantidade de calorias diárias necessária para emagrecer, engordar ou manter seu peso");
            printf("\nO cálculo de calorias diária funciona com base no gasto energético multiplicado pelo fator atividade");
            printf("\n[I]- Gasto energético = valor que muda conforme a idade x kg +/- valor que muda conforme a idade");
            printf("\n[II]- Fator atividade é calculado de acordo com a quantidade de atividades físicas praticádas pelo indivíduo");
            break;

        default:
            printf("Digite uma opção válida para prosseguir com o programa");
            break;
        }

    } while ((escolha != 0) && (escolha != 1));
    limparTela();
    if (escolha == 1)
    {
        printf("\n================================================");
        printf("\nAgora vamos calcular o fator energético");
        printf("\n[A]- 1 hora de esforço físico semanal");
        printf("\n[B]- 2 horas de esforço físico semanal");
        printf("\n[C]- 5 horas de esforço físico semanal");
        printf("\n[D]- 7 horas ou mais de esforço físico semanal\n");
        scanf(" %c", &exefis);
        maiusculo = toupper(exefis);
        limparTela();

        printf("\n================================================");
        switch (maiusculo)
        {
        case 'A':
            fatoratv = 1.55;
            break;
        case 'B':
            fatoratv = 1.55;
            break;
        case 'C':
            fatoratv = 1.84;
            break;
        case 'D':
            fatoratv = 2.2;
            break;
        default:
            printf("Insira um caracter válido");
        }
        limparTela();
        printf("\n================================================");
        energia = gastoenergiaM(sexo, peso, idade);
        kcal = energia * fatoratv; // calorias que deverão ser ingeridas diariamente
        printf("\nVocê deseja?");
        printf("\n[1]- Manter seu peso");
        printf("\n[2]- Diminuir seu peso");
        printf("\n[3]- Aumentar seu peso\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            limparTela();
            printf("\n================================================");
            printf("\nVocê deseja mantar seu peso");
            printf("\n--------------------------------------> %.2f", kcal);
            printf("\n essa é quantidade de calorias que você deve ingerir diariamente");
            break;
        case 2:
            limparTela();
            printf("\n================================================");
            printf("\nQuantos kg você deseja perder?\n");
            scanf("%f", &reducao);

            printf("Digite em quanto tempo você deseja obter esse resultado\n");
            scanf("%d", &temp);
            CR = reducaopeso(reducao, temp, kcal);
            limparTela();
            printf("%fkcal/dia", CR);
            if (sexo == 'F' && CR < 1200)
            {
                printf("\nEssa qtd de kcal/dia não é recomendada, busque um médico");
            }
            else if (sexo == 'M' && CR < 1500)
            {
                printf("\nEssa qtd de kcal/dia não é recomendada, busque um médico");
            }

            break;
        default:
            break;
        }
    }
}
