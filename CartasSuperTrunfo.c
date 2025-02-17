#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char letra;
    int cod1 = 1;
    int cod2 = 2;
    int cod3 = 3;
    int cod4 = 4;
    
    char pais[50];
    
    char estadoA[50], estadoB[50], estadoC[50], estadoD[50], estadoE[50], estadoF[50], estadoG[50], estadoH[50];

    char letraA = 'A', letraB = 'B', letraoC = 'C', letraD = 'D', letraE = 'E', eletraF = 'F', eletraG  = 'G', eletraH = 'H';
    
    char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50], cidadeB01[50], cidadeAB02[50], cidadeB03[50], cidadeB04[50], cidadeC01[50], cidadeC02[50], cidadeC03[50], cidadeC04[50], cidadeD01[50], cidadeD02[50], cidadeD03[50], cidadeD04[50];
    char cidadeE01[50], cidadeE02[50], cidadeE03[50], cidadeE04[50], cidadeF01[50], cidadeFB02[50], cidadeF03[50], cidadeF04[50], cidadeG01[50], cidadeG02[50],cidadeG03[50], cidadeG04[50], cidadeH01[50], cidadeH02[50], cidadeH03[50], cidadeH04[50];
    
    int populacaoA01, populacaoA02, populacaoA03, populacaoA04, populacaoB01, populacaoB02, populacaoB03, populacaoB04,populacaoC01,populacaoC02,populacaoC03, populacaoC04, populacaoD01, populacaoD02,populacaoD03, populacaoD04;
    int populacaoE01, populacaoE02, populacaoE03, populacaoE04, populacaoF01, populacaoF02, populacaoF03, populacaoF04, populacaoG01, populacaoG02, populacaoG03, populacaoG04, populacaoH01, populacaoH02, populacaoH03, populacaoH04;
    
    int areaA01, areaA02, areaA03,areaA04, areaB01, areaB02, areaB03, areaB04, areaC1, areaC02, areaC03, areaC04, areaD01, areaD02, areaD03, areaD04, areaE01, areaE02, areaE03, areaE04, areaF01, areaF02, areaF03, areaF04, areaG01, areaG02, areaG03, areaG04, areaH01, areaH02, areaH03, areaH04;
    
    int pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04, pibC01, pibC02, pibC03, pibC04, pibD01, pibD02, pibD03, pibD04, pibE01, pibE02, pibE03, pibE04, pibF01, pibF02, pibF03, pibF04, pibG01, pibG02, pibG03, pibG04, pibH01, pibH02, pibH03, pibH04;
    
    int pontoA01, pontoA02, pontoA03, pontoA04, pontoB01, pontoB02, pontoB03, pontoB04, pontoC01, pontoC02, pontoC03, pontoC04, pontoD01, pontoD02, pontoD03, pontoD04, pontoE01, pontoE02, pontoE03, pontoE04, pontoF01, pontoF02, pontoF03, pontoF04, pontoG01, pontoG02, pontoG03, pontoG04, pontoH01, pontoH02, pontoH03, pontH04;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    
    printf("               SUPER TRUNFO\n\n");
    printf("Vamos iniciar o cadastro das cartas do jogo\n");

    printf("- Digite o nome do pais que vamos escolher para esse jogo -\n");
    scanf("%s", &pais);

    printf("- Digite o nome de um estado do pais escolhido -\n");
    scanf("%s", &estadoA);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    scanf("%s", &cidadeA01);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoA01); 

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaA01); 

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibA01);

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoA01);

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA01);
    printf("População: %d\n", populacaoA01);
    printf("Área em metros quadrados: %d\n", areaA01);
    printf("PIB da cidade: %d\n", pibA01);
    printf("Número de pontos turisticos: %d\n", pontoA01);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
