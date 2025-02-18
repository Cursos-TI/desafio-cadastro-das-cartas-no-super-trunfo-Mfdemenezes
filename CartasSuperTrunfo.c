#include <stdio.h>


int main(){
    

    char letra;
    int carta1 = 1;
    int carta2 = 2;
    int carta3 = 3;
    int carta4 = 4;
    
    char pais[50];
    
    char estadoA[50], estadoB[50], estadoC[50], estadoD[50], estadoE[50], estadoF[50], estadoG[50], estadoH[50];

    char estA = "A0", estB = "B0", estC = "C0", estD = "D0", estE = "E0", estF = "F0", estG  = "G0", estH = "H0";
    
    char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50], cidadeB01[50], cidadeB02[50], cidadeB03[50], cidadeB04[50], cidadeC01[50], cidadeC02[50], cidadeC03[50], cidadeC04[50], cidadeD01[50], cidadeD02[50], cidadeD03[50], cidadeD04[50];
    char cidadeE01[50], cidadeE02[50], cidadeE03[50], cidadeE04[50], cidadeF01[50], cidadeF02[50], cidadeF03[50], cidadeF04[50], cidadeG01[50], cidadeG02[50],cidadeG03[50], cidadeG04[50], cidadeH01[50], cidadeH02[50], cidadeH03[50], cidadeH04[50];
    
    int populacaoA01, populacaoA02, populacaoA03, populacaoA04, populacaoB01, populacaoB02, populacaoB03, populacaoB04,populacaoC01,populacaoC02,populacaoC03, populacaoC04, populacaoD01, populacaoD02,populacaoD03, populacaoD04;
    int populacaoE01, populacaoE02, populacaoE03, populacaoE04, populacaoF01, populacaoF02, populacaoF03, populacaoF04, populacaoG01, populacaoG02, populacaoG03, populacaoG04, populacaoH01, populacaoH02, populacaoH03, populacaoH04;
    
    int areaA01, areaA02, areaA03,areaA04, areaB01, areaB02, areaB03, areaB04, areaC01, areaC02, areaC03, areaC04, areaD01, areaD02, areaD03, areaD04, areaE01, areaE02, areaE03, areaE04, areaF01, areaF02, areaF03, areaF04, areaG01, areaG02, areaG03, areaG04, areaH01, areaH02, areaH03, areaH04;
    
    int pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04, pibC01, pibC02, pibC03, pibC04, pibD01, pibD02, pibD03, pibD04, pibE01, pibE02, pibE03, pibE04, pibF01, pibF02, pibF03, pibF04, pibG01, pibG02, pibG03, pibG04, pibH01, pibH02, pibH03, pibH04;
    
    int pontoA01, pontoA02, pontoA03, pontoA04, pontoB01, pontoB02, pontoB03, pontoB04, pontoC01, pontoC02, pontoC03, pontoC04, pontoD01, pontoD02, pontoD03, pontoD04, pontoE01, pontoE02, pontoE03, pontoE04, pontoF01, pontoF02, pontoF03, pontoF04, pontoG01, pontoG02, pontoG03, pontoG04, pontoH01, pontoH02, pontoH03, pontoH04;


        
    
    

    
    printf("            *** SUPER TRUNFO ***\n\n");
    printf("Vamos iniciar o cadastro das cartas do jogo\n");
    printf("Essa etapa é muito importante e pesso que tenham bastante atenção no preenchimento \n");
    printf("As etapas do cadastro serão um total de 8 estados com 4 cidades cada, conforme srá pedido.\n");
    printf("Se possivel antes de iniciar essa etapa faça um rascunho com todos os dados para evitar erros de digitação.\n");
    printf("Contendo a escolha de um pais, 8 estados desse pais e 4 cidades de cada estado.\n");
    printf("Para as caracteristicas das cidades tem população, área, PIB, quantidade de pontos turisticos.\n\n");

    //Cadastro estado A


    printf("Cadastro 1/32\n");

    printf("- Digite o nome do pais que vamos escolher para esse jogo -\n");
    fgets(pais, sizeof(pais), stdin);

    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoA, sizeof(estadoA), stdin);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeA01, sizeof(cidadeA01), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf(" %d", &populacaoA01); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf(" %d", &areaA01); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf(" %d", &pibA01);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf(" %d", &pontoA01);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA01);
    printf("População: %d\n", populacaoA01);
    printf("Área em metros quadrados: %d\n", areaA01);
    printf("PIB da cidade: %d\n", pibA01);
    printf("Número de pontos turisticos: %d\n\n", pontoA01);


    printf("Cadastro 2/32\n");

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeA02, sizeof(cidadeA02), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf(" %d", &populacaoA02);
    getchar(); 

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf(" %d", &areaA02); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf(" %d", &pibA02);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf(" %d", &pontoA02);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA02);
    printf("População: %d\n", populacaoA02);
    printf("Área em metros quadrados: %d\n", areaA02);
    printf("PIB da cidade: %d\n", pibA02);
    printf("Número de pontos turisticos: %d\n\n", pontoA02);


    printf("Cadastro 3/32\n");

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeA03, sizeof(cidadeA03), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoA03); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaA03); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibA03);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoA03);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA03);
    printf("População: %d\n", populacaoA03);
    printf("Área em metros quadrados: %d\n", areaA03);
    printf("PIB da cidade: %d\n", pibA03);
    printf("Número de pontos turisticos: %d\n\n", pontoA03);

    printf("Cadastro 4/32\n");

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeA04, sizeof(cidadeA04), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoA04); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaA04); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibA04);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoA04);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", cidadeA04);
    printf("População: %d\n", populacaoA04);
    printf("Área em metros quadrados: %d\n", areaA04);
    printf("PIB da cidade: %d\n", pibA04);
    printf("Número de pontos turisticos: %d\n\n", pontoA04);


    //Cadastro estado B

    
    
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O SEGUNDO ESTADO\n\n");
    
    printf("Cadastro 5/32\n");

    printf("Pais: %s\n", pais);
    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoB, sizeof(estadoB), stdin);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeB01, sizeof(cidadeB01), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoB01); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaB01); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibB01);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n\n");
    scanf("%d", &pontoB01);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB01);
    printf("População: %d\n", populacaoB01);
    printf("Área em metros quadrados: %d\n", areaB01);
    printf("PIB da cidade: %d\n", pibB01);
    printf("Número de pontos turisticos: %d\n\n", pontoB01);

   
    printf("Cadastro 6/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeB02, sizeof(cidadeB02), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoB02); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaB02); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibB02);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoB02);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB02);
    printf("População: %d\n", populacaoB02);
    printf("Área em metros quadrados: %d\n", areaB02);
    printf("PIB da cidade: %d\n", pibB02);
    printf("Número de pontos turisticos: %d\n\n", pontoB02);

    printf("Cadastro 7/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeB03, sizeof(cidadeB03), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoB03); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaB03); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibB03);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoB03);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB03);
    printf("População: %d\n", populacaoB03);
    printf("Área em metros quadrados: %d\n", areaB03);
    printf("PIB da cidade: %d\n", pibB03);
    printf("Número de pontos turisticos: %d\n\n", pontoB03);


    printf("Cadastro 8/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeB04, sizeof(cidadeB04), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoB04); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaB04); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibB04);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoB04);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", cidadeB04);
    printf("População: %d\n", populacaoB04);
    printf("Área em metros quadrados: %d\n", areaB04);
    printf("PIB da cidade: %d\n", pibB04);
    printf("Número de pontos turisticos: %d\n\n", pontoB04);


    //Cadastro estado C

    
    
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O TERCEIRO ESTADO\n\n");
    printf("Cadastro 9/24\n");

    printf("Pais: %s\n", pais);

    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoC, sizeof(estadoC), stdin);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeC01, sizeof(cidadeC01), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoC01); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaC01); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibC01);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoC01);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoC);
    printf("Cidade: %s\n", cidadeC01);
    printf("População: %d\n", populacaoC01);
    printf("Área em metros quadrados: %d\n", areaC01);
    printf("PIB da cidade: %d\n", pibC01);
    printf("Número de pontos turisticos: %d\n\n", pontoC01);



    printf("Cadastro 10/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeC02, sizeof(cidadeC02), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoC02); 

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaC02); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibC02);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoC02);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoC);
    printf("Cidade: %s\n", cidadeC02);
    printf("População: %d\n", populacaoC02);
    printf("Área em metros quadrados: %d\n", areaC02);
    printf("PIB da cidade: %d\n", pibC02);
    printf("Número de pontos turisticos: %d\n\n", pontoC02);


    printf("Cadastro 11/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeC03, sizeof(cidadeC03), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoC03); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaC03); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibC03);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoC03);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoC);
    printf("Cidade: %s\n", cidadeC03);
    printf("População: %d\n", populacaoC03);
    printf("Área em metros quadrados: %d\n", areaC03);
    printf("PIB da cidade: %d\n", pibC03);
    printf("Número de pontos turisticos: %d\n\n", pontoC03);

    
    printf("Cadastro 12/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeC04, sizeof(cidadeC04), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoC04); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaC04); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibC04);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoC04);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoC);
    printf("Cidade: %s\n", cidadeC04);
    printf("População: %d\n", populacaoC04);
    printf("Área em metros quadrados: %d\n", areaC04);
    printf("PIB da cidade: %d\n", pibC04);
    printf("Número de pontos turisticos: %d\n\n", pontoC04);
    
    
    //Cadastro estado D
    
    
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O QUARTO ESTADO\n\n");
    printf("Cadastro 13/32\n");

    printf("Pais: %s\n", pais);
    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoD, sizeof(estadoD), stdin);

    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeD01, sizeof(cidadeD01), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoD01); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaD01); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibD01);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoD01);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoD);
    printf("Cidade: %s\n", cidadeD01);
    printf("População: %d\n", populacaoD01);
    printf("Área em metros quadrados: %d\n", areaD01);
    printf("PIB da cidade: %d\n", pibD01);
    printf("Número de pontos turisticos: %d\n\n", pontoD01);


    printf("Cadastro 14/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeD02, sizeof(cidadeD02), stdin);  

    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoD02); 
    getchar();

    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaD02); 
    getchar();

    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibD02);
    getchar();

    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoD02);
    getchar();

    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoD);
    printf("Cidade: %s\n", cidadeD02);
    printf("População: %d\n", populacaoD02);
    printf("Área em metros quadrados: %d\n", areaD02);
    printf("PIB da cidade: %d\n", pibD02);
    printf("Número de pontos turisticos: %d\n\n", pontoD02);
    

    printf("Cadastro 15/32\n");
   
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeD03, sizeof(cidadeD03), stdin);  
    
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoD03); 
    getchar();
    
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaD03); 
    getchar();
    
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibD03);
    getchar();
    
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoD03);
    getchar();
    
    printf("Pais: %s\n",     pais);
    printf("Estado: %s\n", estadoD);
    printf("Cidade: %s\n", cidadeD03);
    printf("População: %d\n", populacaoD03);
    printf("Área em metros quadrados: %d\n", areaD03);
    printf("PIB da cidade: %d\n", pibD03);
    printf("Número de pontos turisticos: %d\n\n", pontoD03);
        
    
    printf("Cadastro 16/32\n");
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeD03, sizeof(cidadeD03), stdin);  
        
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoD04); 
    getchar();
        
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaD04); 
    getchar();
        
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibD04);
    getchar();
        
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoD04);
    getchar();
        
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoD);
    printf("Cidade: %s\n", cidadeD04);
    printf("População: %d\n", populacaoD04);
    printf("Área em metros quadrados: %d\n", areaD03);
    printf("PIB da cidade: %d\n", pibD04);
    printf("Número de pontos turisticos: %d\n\n", pontoD04);
            
    
    //Cadastro estado E

                   
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O QUINTO ESTADO\n\n");
    printf("Cadastro 17/32\n");

    printf("Pais: %s\n", pais);     
    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoE, sizeof(estadoE), stdin);
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeE01, sizeof(cidadeE01), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoE01); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaE01); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibE01);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoE01);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoE);
    printf("Cidade: %s\n", cidadeE01);
    printf("População: %d\n", populacaoE01);
    printf("Área em metros quadrados: %d\n", areaE01);
    printf("PIB da cidade: %d\n", pibE01);
    printf("Número de pontos turisticos: %d\n\n", pontoE01);
            
            
    printf("Cadastro 18/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeE02, sizeof(cidadeE02), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoE02); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaE02); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibE02);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoE02);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoE);
    printf("Cidade: %s\n", cidadeE02);
    printf("População: %d\n", populacaoE02);
    printf("Área em metros quadrados: %d\n", areaE02);
    printf("PIB da cidade: %d\n", pibE02);
    printf("Número de pontos turisticos: %d\n\n", pontoE02);


    printf("Cadastro 19/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeE03, sizeof(cidadeE03), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoE03); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaE03); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibE03);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoE03);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoE);
    printf("Cidade: %s\n", cidadeE03);
    printf("População: %d\n", populacaoE03);
    printf("Área em metros quadrados: %d\n", areaE03);
    printf("PIB da cidade: %d\n", pibE03);
    printf("Número de pontos turisticos: %d\n\n", pontoE03);


    printf("Cadastro 20/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeE04, sizeof(cidadeE04), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoE04); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaE04);
    getchar(); 
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibE04);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoE04);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoE);
    printf("Cidade: %s\n", cidadeE04);
    printf("População: %d\n", populacaoE04);
    printf("Área em metros quadrados: %d\n", areaE04);
    printf("PIB da cidade: %d\n", pibE04);
    printf("Número de pontos turisticos: %d\n\n", pontoE04);


    //Cadastro estado F

   
                
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O SEXTO ESTADO\n\n");
    printf("Cadastro 21/32\n");

    printf("Pais: %s\n", pais);    
    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoF, sizeof(estadoF), stdin);
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeF01, sizeof(cidadeF01), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoF01); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaF01); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibF01);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoF01);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoF);
    printf("Cidade: %s\n", cidadeF01);
    printf("População: %d\n", populacaoF01);
    printf("Área em metros quadrados: %d\n", areaF01);
    printf("PIB da cidade: %d\n", pibF01);
    printf("Número de pontos turisticos: %d\n\n", pontoF01);


    printf("Cadastro 22/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeF02, sizeof(cidadeF02), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoF02); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaF02); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibF02);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoF02);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoF);
    printf("Cidade: %s\n", cidadeF02);
    printf("População: %d\n", populacaoF02);
    printf("Área em metros quadrados: %d\n", areaF02);
    printf("PIB da cidade: %d\n", pibF02);
    printf("Número de pontos turisticos: %d\n\n", pontoF02);
            

    printf("Cadastro 23/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeF03, sizeof(cidadeF03), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoF03); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaF03); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibF03);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoF03);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoF);
    printf("Cidade: %s\n", cidadeF03);
    printf("População: %d\n", populacaoF03);
    printf("Área em metros quadrados: %d\n", areaF03);
    printf("PIB da cidade: %d\n", pibF03);
    printf("Número de pontos turisticos: %d\n\n", pontoF03);



    printf("Cadastro 24/32\n");
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeF04, sizeof(cidadeF04), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoF04); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaF04); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibF04);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoF04);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoF);
    printf("Cidade: %s\n", cidadeF04);
    printf("População: %d\n", populacaoF04);
    printf("Área em metros quadrados: %d\n", areaF04);
    printf("PIB da cidade: %d\n", pibF04);
    printf("Número de pontos turisticos: %d\n\n", pontoF04);


    //Cadastro estado G

    
    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O SEXTO ESTADO\n\n");
    printf("Cadastro 25/32\n"); 

    printf("Pais: %s\n", pais);
    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoG, sizeof(estadoG), stdin);
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeG01, sizeof(cidadeG01), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoG01); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaG01); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibG01);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoG01);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoG);
    printf("Cidade: %s\n", cidadeG01);
    printf("População: %d\n", populacaoG01);
    printf("Área em metros quadrados: %d\n", areaG01);
    printf("PIB da cidade: %d\n", pibG01);
    printf("Número de pontos turisticos: %d\n\n", pontoG01);


    printf("Cadastro 26/32\n");

  
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeG02, sizeof(cidadeG02), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoG02); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaG02); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibG02);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoG02);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoG);
    printf("Cidade: %s\n", cidadeG02);
    printf("População: %d\n", populacaoG02);
    printf("Área em metros quadrados: %d\n", areaG02);
    printf("PIB da cidade: %d\n", pibG02);
    printf("Número de pontos turisticos: %d\n\n", pontoG02);



    printf("Cadastro 27/32\n");

  
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeG03, sizeof(cidadeG03), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoG03); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaG03); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibG03);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoG03);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoG);
    printf("Cidade: %s\n", cidadeG03);
    printf("População: %d\n", populacaoG03);
    printf("Área em metros quadrados: %d\n", areaG03);
    printf("PIB da cidade: %d\n", pibG03);
    printf("Número de pontos turisticos: %d\n\n", pontoG03);


    printf("Cadastro 28/32\n");

  
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeG04, sizeof(cidadeG04), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoG04); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaG04); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibG04);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoG04);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoG);
    printf("Cidade: %s\n", cidadeG04);
    printf("População: %d\n", populacaoG04);
    printf("Área em metros quadrados: %d\n", areaG04);
    printf("PIB da cidade: %d\n", pibG04);
    printf("Número de pontos turisticos: %d\n\n", pontoG04);

    
    //Cadastro estado H


    printf("        **ATENÇAO**\n\n");
    printf("VAMOS CADASTRAR O OITAVO E ÚLTIMO ESTADO\n\n");
    printf("Cadastro 29/32\n");   
    
    printf("Pais: %s\n", pais);

    printf("- Digite o nome de um estado do pais escolhido -\n");
    fgets(estadoH, sizeof(estadoH), stdin);
            
    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeH01, sizeof(cidadeH01), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoH01); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaH01); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibH01);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoH01);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoH);
    printf("Cidade: %s\n", cidadeH01);
    printf("População: %d\n", populacaoH01);
    printf("Área em metros quadrados: %d\n", areaH01);
    printf("PIB da cidade: %d\n", pibH01);
    printf("Número de pontos turisticos: %d\n\n", pontoH01);


    printf("Cadastro 30/32\n");


    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeH02, sizeof(cidadeH02), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoH02); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaH02); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibH02);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoH02);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoH);
    printf("Cidade: %s\n", cidadeH02);
    printf("População: %d\n", populacaoH02);
    printf("Área em metros quadrados: %d\n", areaH02);
    printf("PIB da cidade: %d\n", pibH02);
    printf("Número de pontos turisticos: %d\n\n", pontoH02);


    printf("Cadastro 31/32\n");


    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeH03, sizeof(cidadeH03), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoH03); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaH03); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibH03);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoH03);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoH);
    printf("Cidade: %s\n", cidadeH03);
    printf("População: %d\n", populacaoH03);
    printf("Área em metros quadrados: %d\n", areaH03);
    printf("PIB da cidade: %d\n", pibH03);
    printf("Número de pontos turisticos: %d\n\n", pontoH03);



    printf("Cadastro 32/32\n");


    printf("- Digite o nome de uma cidade desse estado  que vamos escolher desse estado -\n");
    fgets(cidadeH04, sizeof(cidadeH04), stdin);  
            
    printf("- Digite a população dessa cidade -\n");
    scanf("%d", &populacaoH04); 
    getchar();
            
    printf("- Digite a área dessa cidade em metros quadrados -\n");
    scanf("%d", &areaH04); 
    getchar();
            
    printf("- Digite o PIB da cidade escolhida -\n");
    scanf("%d", &pibH04);
    getchar();
            
    printf("- Digite a quantidade de pontos turisticos da cidade escolhida -\n");
    scanf("%d", &pontoH04);
    getchar();
            
    printf("Pais: %s\n", pais);
    printf("Estado: %s\n", estadoH);
    printf("Cidade: %s\n", cidadeH04);
    printf("População: %d\n", populacaoH04);
    printf("Área em metros quadrados: %d\n", areaH04);
    printf("PIB da cidade: %d\n", pibH04);
    printf("Número de pontos turisticos: %d\n\n", pontoH04);

    // Exibição dos Dados das Cartas:
   

    printf("- APRESENTAÇÃO DE TODOS OS DADOS DAS CARTAS DO JOGO -\n");

    printf("- ANTES DO PREENCHIMENTO FAÇA UM RESUMO NO CADERNO PARA ANTECIPAR AS INFORMAÇÕES DE ENTRADA DE DADOS DAS CARTAS -\n");


    printf("Pais: %s\n\n\n", pais);
 
    printf("Estado: %s\n\n", estadoA);
     
    printf("Código da carta: %s%d\n", estA, carta1);
    printf("Cidade: %s\n", cidadeA01);
    printf("População: %.2d m2\n", populacaoA01);
    printf("Área em metros quadrados: %d\n", areaA01);
    printf("PIB da cidade:R$ %d\n", pibA01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoA01);
    
    printf("Código da carta: %s%d\n", estA, carta2);
    printf("Cidade: %s\n", cidadeA02);
    printf("População: %d\n", populacaoA02);
    printf("Área em metros quadrados: %.2d m2\n", areaA02);
    printf("PIB da cidade:R$ %d\n", pibA02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoA02);
    
    printf("Código da carta: %s%d\n", estA, carta3);
    printf("Cidade: %s\n", cidadeA03);
    printf("População: %d\n", populacaoA03);
    printf("Área em metros quadrados: %.2d m2\n", areaA03);
    printf("PIB da cidade:R$ %d\n", pibA03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoA03);
    
    printf("Código da carta: %s%d\n", estA, carta4);
    printf("Cidade: %s\n", cidadeA04);
    printf("População: %d\n", populacaoA04);
    printf("Área em metros quadrados: %.2d m2\n", areaA04);
    printf("PIB da cidade:R$ %d\n", pibA04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoA04);
    
    
    printf("Estado: %s\n\n", estadoB);

    printf("Código da carta: %s%d\n", estB, carta1);
   
    printf("Cidade: %s\n", cidadeB01);
    printf("População: %d\n", populacaoB01);
    printf("Área em metros quadrados: %.2d m2\n", areaB01);
    printf("PIB da cidade:R$ %d\n", pibB01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoB01);
    
       
    printf("Código da carta: %s%d\n", estB, carta2);
    printf("Cidade: %s\n", cidadeB02);
    printf("População: %d\n", populacaoB02);
    printf("Área em metros quadrados: %.2d\n", areaB02);
    printf("PIB da cidade:R$ %d\n", pibB02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoB02);
    

    printf("Código da carta: %s%d\n", estB, carta3);
    printf("Cidade: %s\n", cidadeB03);
    printf("População: %d\n", populacaoB03);
    printf("Área em metros quadrados: %.2d m2\n", areaB03);
    printf("PIB da cidade:R$ %d\n", pibB03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoB03);
    
    printf("Código da carta: %s%d\n", estB, carta4);
    printf("Cidade: %s\n", cidadeB04);
    printf("População: %d\n", populacaoB04);
    printf("Área em metros quadrados: %.2d m2\n", areaB04);
    printf("PIB da cidade:R2 %d\n", pibB04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoB04);
    
    
    printf("Estado: %s\n\n", estadoC);
    
    printf("Código da carta: %s%d\n", estC, carta1);
    printf("Cidade: %s\n", cidadeC01);
    printf("População: %d\n", populacaoC01);
    printf("Área em metros quadrados: %.2d m2\n", areaC01);
    printf("PIB da cidade:R$ %d\n", pibC01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoC01);
    
    printf("Código da carta: %s%d\n", estC, carta2);
    printf("Cidade: %s\n", cidadeC02);
    printf("População: %d\n", populacaoC02);
    printf("Área em metros quadrados: %02d m2\n", areaC02);
    printf("PIB da cidade:R$ %d\n", pibC02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoC02);
    
    printf("Código da carta: %s%d\n", estC, carta3);
    printf("Cidade: %s\n", cidadeC03);
    printf("População: %d\n", populacaoC03);
    printf("Área em metros quadrados: %.2d m2\n", areaC03);
    printf("PIB da cidade:R$ %d\n", pibC03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoC03);
    
    printf("Código da carta: %s%d\n", estC, carta4);
    printf("Cidade: %s\n", cidadeC04);
    printf("População: %d\n", populacaoC04);
    printf("Área em metros quadrados: %.2d m2\n", areaC04);
    printf("PIB da cidade:R$ %d\n", pibC04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoC04);
        
    
    printf("Estado: %s\n\n", estadoD);
    
    printf("Código da carta: %s%d\n", estD, carta1);
    printf("Cidade: %s\n", cidadeD01);
    printf("População: %d\n", populacaoD01);
    printf("Área em metros quadrados: %.2d m2\n", areaD01);
    printf("PIB da cidade:R$ %d\n", pibD01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoD01);
    
    printf("Código da carta: %s%d\n", estD, carta2);
    printf("Cidade: %s\n", cidadeD02);
    printf("População: %d\n", populacaoD02);
    printf("Área em metros quadrados: %.2d m2\n", areaD02);
    printf("PIB da cidade: %d\n", pibD02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoD02);
    
    printf("Código da carta: %s%d\n", estD, carta3);
    printf("Cidade: %s\n", cidadeD03);
    printf("População: %d\n", populacaoD03);
    printf("Área em metros quadrados: %.2d m2\n", areaD03);
    printf("PIB da cidade:R$ %d\n", pibD03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoD03);
    
    printf("Código da carta: %s%d\n", estD, carta4);
    printf("Cidade: %s\n", cidadeD04);
    printf("População: %d\n", populacaoD04);
    printf("Área em metros quadrados: %.2d m2\n", areaD03);
    printf("PIB da cidade:R$ %d\n", pibD04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoD04);
    
    
    printf("Estado: %s\n\n", estadoE);
    
    printf("Código da carta: %s%d\n", estE, carta1);
    printf("Cidade: %s\n", cidadeE01);
    printf("População: %d\n", populacaoE01);
    printf("Área em metros quadrados: %.2d m2\n", areaE01);
    printf("PIB da cidade:R$ %d\n", pibE01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoE01);
    
    printf("Código da carta: %s%d\n", estE, carta2);
    printf("Cidade: %s\n", cidadeE02);
    printf("População: %d\n", populacaoE02);
    printf("Área em metros quadrados: %.2d m2\n", areaE02);
    printf("PIB da cidade:R$ %d\n", pibE02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoE02);
    
    printf("Código da carta: %s%d\n", estE, carta3);
    printf("Cidade: %s\n", cidadeE03);
    printf("População: %d\n", populacaoE03);
    printf("Área em metros quadrados: %.2d m2\n", areaE03);
    printf("PIB da cidade:R$ %d\n", pibE03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoE03);
    
    printf("Código da carta: %s%d\n", estE, carta4);
    printf("Cidade: %s\n", cidadeE04);
    printf("População: %d\n", populacaoE04);
    printf("Área em metros quadrados: %.2d m2\n", areaE04);
    printf("PIB da cidade:R$ %d\n", pibE04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoE04);
    
    
    printf("Estado: %s\n\n", estadoF);

    printf("Código da carta: %s%d\n", estF, carta1);
    printf("Cidade: %s\n", cidadeF01);
    printf("População: %d\n", populacaoF01);
    printf("Área em metros quadrados: %.2d m2\n", areaF01);
    printf("PIB da cidade:R$ %d\n", pibF01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoF01);
    
    printf("Código da carta: %s%d\n", estF, carta2);
    printf("Cidade: %s\n", cidadeF02);
    printf("População: %d\n", populacaoF02);
    printf("Área em metros quadrados: %.2d m2\n", areaF02);
    printf("PIB da cidade:R$ %d\n", pibF02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoF02);
    
    printf("Código da carta: %s%d\n", estF, carta3);
    printf("Cidade: %s\n", cidadeF03);
    printf("População: %d\n", populacaoF03);
    printf("Área em metros quadrados: %.2d m2\n", areaF03);
    printf("PIB da cidade:R$ %d\n", pibF03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoF03);
    
    printf("Código da carta: %s%d\n", estF, carta4);
    printf("Cidade: %s\n", cidadeF04);
    printf("População: %d\n", populacaoF04);
    printf("Área em metros quadrados: %.2d m2\n", areaF04);
    printf("PIB da cidade:R$ %d\n", pibF04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoF04);
    
    printf("Estado: %s\n\n", estadoG);
    
    printf("Código da carta: %s%d\n", estG, carta1);
    printf("Cidade: %s\n", cidadeG01);
    printf("População: %d\n", populacaoG01);
    printf("Área em metros quadrados: %.2d m2\n", areaG01);
    printf("PIB da cidade:R$ %d\n", pibG01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoG01);
    
    printf("Código da carta: %s%d\n", estG, carta2);
    printf("Cidade: %s\n", cidadeG02);
    printf("População: %d\n", populacaoG02);
    printf("Área em metros quadrados: %.2d\n", areaG02);
    printf("PIB da cidade:R$ %d\n", pibG02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoG02);
    
    printf("Código da carta: %s%d\n", estG, carta3);
    printf("Cidade: %s\n", cidadeG03);
    printf("População: %d\n", populacaoG03);
    printf("Área em metros quadrados: %.2d m2\n", areaG03);
    printf("PIB da cidade:R$ %d\n", pibG03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoG03);
    
    printf("Código da carta: %s%d\n", estG, carta4);
    printf("Cidade: %s\n", cidadeG04);
    printf("População: %d\n", populacaoG04);
    printf("Área em metros quadrados: %.2d m2\n", areaG04);
    printf("PIB da cidade:R$ %d\n", pibG04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoG04);
    
    
    printf("Estado: %s\n\n", estadoH);
    
    printf("Código da carta: %s%d\n", estH, carta1);
    printf("Cidade: %s\n", cidadeH01);
    printf("População: %d\n", populacaoH01);
    printf("Área em metros quadrados: %.2d m2\n", areaH01);
    printf("PIB da cidade:R$ %d\n", pibH01);
    printf("Número de pontos turisticos: %d\n\n\n", pontoH01);
    
    printf("Código da carta: %s%d\n", estH, carta2);
    printf("Cidade: %s\n", cidadeH02);
    printf("População: %d\n", populacaoH02);
    printf("Área em metros quadrados: %.2d m2\n", areaH02);
    printf("PIB da cidade:R$ %d\n", pibH02);
    printf("Número de pontos turisticos: %d\n\n\n", pontoH02);
    
    printf("Código da carta: %s%d\n", estH, carta3);
    printf("Cidade: %s\n", cidadeH03);
    printf("População: %d\n", populacaoH03);
    printf("Área em metros quadrados: %.2d m2\n", areaH03);
    printf("PIB da cidade:R$ %d\n", pibH03);
    printf("Número de pontos turisticos: %d\n\n\n", pontoH03);
    
    printf("Código da carta: %s%d\n", estH, carta4);
    printf("Cidade: %s\n", cidadeH04);
    printf("População: %d\n", populacaoH04);
    printf("Área em metros quadrados: %.2d m2\n", areaH04);
    printf("PIB da cidade:R$ %d\n", pibH04);
    printf("Número de pontos turisticos: %d\n\n\n", pontoH04);
    
   



    return 0;

}