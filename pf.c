#include <stdio.h>
#include <locale.h>
#include <windows.h>

float gastoenergiaM(char sex[1], float weight, int age){
    float ge;
    if((sex == "M") && (age >= 0) && (age <= 3)){
        ge = (59.512* weight)- 30.4;
    }   else if((sex == "M") && (age >3) && (age <=10)){
        ge = (22.706* weight)+ 504.3;
        }   else if((sex == "M") && (age > 10) && (age <= 18)){
            ge = (17.686* weight) +658.2;
            }   else if((sex == "M") && (age > 18) && (age <= 30)){
                ge = (15.057 * weight) + 692.2;
                }   else if((sex == "M") && (age > 30) && (age <= 60)){
                    ge = (11.472 * weight) + 873.1;
                    }   else if((sex == "M") && (age > 60)){
                        ge = (11.711 * weight) + 587.7;
                        }
    return ge;
}
int main(){
    char sexo[1];
    int idade;
    float peso, resultado;
    printf("Digite seu sexo");
    scanf("%c", &sexo);
    printf("Digite sua idade");
    scanf("%d", &idade);
    printf("Digite seu peso");
    scanf("%f", &peso);

    resultado = gastoenergiaM(sexo, peso, idade);
    printf("%f", resultado);
}

