#include <stdio.h>
#include <string.h>

// Uma empresa decidiu fazer um levamento em relação aos candidatos que se apresentarem para o preenchimento de vagas no seu quadro de funcionários. Supondo que você seja programador dessa empresa, faça um programa que:

// entrada de dados:
// idade
// sexo (M ou F)
// experiência (sim ou não)

// mostre as seguintes informações

// o número de candidatos femininos
// o número de candidatos masculinos
// a idade média dos homens que já possuem experiência no serviço
// a porcentagem dos homens com mais de 45 anos entre o total de homens
// o número de mulheres com idade inferior a 35 anos com experiência no serviço 
// a menor idade entre as mulheres que já possuem experiência no serviço

int main()
{
    int idade, i, menorF, num_inferiorF, sair=1, soma;
    float idadeMedia, numF, numM, porcentagemM, somaPorcentagem, somaExperiencia;
    char s while(sair!=0){
        printf("idade\t"); scanf("%d", &idade);
        printf("sexo (M ou F)\t"); scanf("%s", &sexo);
        printf("possui experiencia? (S ou N)\t"); scanf("%s", &experiencia);
        printf("\ndeseja continuar? 0 para sair\t"); scanf("%d", &sair);
        i++;
        
        if(strcmp(sexo,"F") == 0){
            numF++;
            
            if (numF == 1 || strcmp(experiencia,"S")==0) {
                menorF = idade;
            }else if(strcmp(experiencia,"S")==0 && menorF<idade){
                menorF = idade;
            }
            
            if(idade<35 && strcmp(experiencia,"S")==0){
                num_inferiorF++;
            }
            
        }else if(strcmp(sexo,"M") == 0){
            numM++;
            
            if(idade>45){
                somaPorcentagem++;
                porcentagemM=(somaPorcentagem/numM)*100;
            }
            
            if(strcmp(experiencia,"S") == 0){
                somaExperiencia++;
                soma+=idade;
                idadeMedia=soma/somaExperiencia;
            }
        }
        
    }
    printf("\no numero de candidatos femininos e %.1f", numF);
    printf("\no numero de candidatos masculinos e %.1f", numM);
    printf("\na idade media dos homens que já possuem experiência no serviço e %.1f", idadeMedia);
    printf("\na porcentagem dos homens com mais de 45 anos entre o total de homens e %.2f", porcentagemM); 
    printf("\no numero de mulheres com idade inferior a 35 anos com experiencia no serviço e %d", num_inferiorF);
    printf("\na menor idade da mulheres que ja possuem experiencia no servico e %d", menorF);

    return 0;
}