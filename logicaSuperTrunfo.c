#include <stdio.h>

int main(){
    char estado, codigoDaCarta[4], NomeCidade[10];

    int populacao, PontosTuristicos;

    float areaKm, pib;

    printf("\nCARTA 1\n");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado); 
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta); 
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade);

    printf("Insira o numero de habitantes da cidade (sem pontuacao)\n");
    scanf("%d",&populacao);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos);

    printf("Insira area da cidade em km (sem pontuacao)\n");
    scanf("%f",&areaKm);

    printf("Insira o valor do PIB (em bilhões de reais ex: 1.69)\n");
    scanf("%f",&pib);

    float densidadePop1 = ((float)populacao/areaKm) * 100, pibPerCapita1 = (pib * 100000000)/(float)populacao; // pop é int, areakm é float, pib é float

    float superPoder1 = (float)populacao +  areaKm + pib + (float)PontosTuristicos + pibPerCapita1 + (densidadePop1 * -1);

    printf("\n**CARTA 1\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado,codigoDaCarta,NomeCidade); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao, PontosTuristicos);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n",areaKm,pib);// float, areaKM, PIB
    printf("Densidade Populacional:   %.2fhab/km\nPIB perCapita: %.2f reais**\n",densidadePop1,pibPerCapita1);// float, densidade, perCapita
    printf("SUPER PODER 1: %.2f\n", superPoder1);// superPoder

    char estado2, codigoDaCarta2[4], NomeCidade2[10];

    int populacao2, PontosTuristicos2;

    float areaKm2, pib2;
    printf("\n**CARTA 2\n**");
    printf("Insira uma letra de A a H para representar um dos oito estados\n");
    scanf(" %c",&estado2); 
    
    printf("Insira a lera do estado seguido de um numero de 01 ate 04\n");
    scanf("%s",&codigoDaCarta2);
    
    printf("Escolha o nome da cidade\n");
    scanf("%s",&NomeCidade2);

    printf("Insira o numero de habitantes da cidade (sem pontuacao)\n");
    scanf("%d",&populacao2);

    printf("Insira a quantidade de pontos turisticos\n");
    scanf("%d",&PontosTuristicos2);

    printf("Insira area da cidade em km (sem pontuacao)\n");
    scanf("%f",&areaKm2);

    printf("Insira o valor do PIB(em bilhões de reais ex: 1.69)\n");
    scanf("%f",&pib2);

    float densidadePop2 = ((float)populacao2/areaKm2) * 100, pibPerCapita2 = (pib2 * 100000000)/(float)populacao2; // pop é int, areakm é float, pib é float

    printf("\n**CARTA 2\nEstado:   %c\ncodigo Da Carta:   %s\nNomeCidade:   %s\n", estado2,codigoDaCarta2,NomeCidade2); //char
    printf("Numero De Habitantes:   %d\nPontos Turisticos:   %d\n", populacao2, PontosTuristicos2);// int
    printf("Area em km:   %.2f\nPIB:   %.2f bilhoes de reais\n", areaKm2, pib2);//float, areaKM, PIB
    printf("Densidade Populacional:   %.2fhab/km\nPIB perCapita: %.2f**\n",densidadePop2,pibPerCapita2);// float, densidade, percCapita

    /*-------------------------------------------------COMPARACAO-----------------------------*/
    int escolhaAtributo;
    printf("Agora escolha um atributo para comparar as cartas!\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Numero de pontos turisticos\n5. Densidade demografica\n");
    scanf("%d", &escolhaAtributo);

    int poderCarta1 = 0;
    int poderCarta2= 0;
    
    switch (escolhaAtributo){
        case 1:
        printf("Atributo escolhido: População\n");
        printf("CARTA 1: %s Populaçao: %d\n",NomeCidade, populacao);
        printf("CARTA 2: %s Populaçao: %d\n",NomeCidade2, populacao2);

        if(populacao == populacao2){
            printf("EMPATE!");
        }else if(populacao > populacao2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 2:
        printf("Atributo escolhido: Area\n");
        printf("CARTA 1 Area: %.2f\n", areaKm);
        printf("CARTA 2 Area: %.2f\n", areaKm2);

        if(areaKm == areaKm2){
            printf("EMPATE!");
        }else if(areaKm > areaKm2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("CARTA 1: %s PIB: %.2f\n",NomeCidade, pib);
        printf("CARTA 2: %s PIB: %.2f\n",NomeCidade2, pib2);

        if(pib == pib2){
            printf("EMPATE!");
        }else if(pib > pib2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 4:
        printf("Atributo escolhido: Numero de pontos turisticos\n");
        printf("CARTA 1: %s Numero de pontos turisticos: %d\n",NomeCidade, PontosTuristicos);
        printf("CARTA 2: %s Numero de pontos turisticos: %d\n",NomeCidade2, PontosTuristicos2);

        if(PontosTuristicos == PontosTuristicos2){
            printf("EMPATE!");
        }else if(PontosTuristicos > PontosTuristicos2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 5:
        printf("Atributo escolhido: Densidade demografica\n");
        printf("CARTA 1: %s Densidade demografica: %.2f\n",NomeCidade, densidadePop1);
        printf("CARTA 2: %s Densidade demografica: %.2f\n",NomeCidade2, densidadePop2);

        if(densidadePop1 == densidadePop2){
            printf("EMPATE!");
        }else if(densidadePop1 < densidadePop2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        default:
        break;
    }

    int escolhaAtributo2;
    printf("\nAgora escolha outro atributo para comparar as cartas!\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Numero de pontos turisticos\n5. Densidade demografica\n");
    scanf("%d", &escolhaAtributo2);

    if(escolhaAtributo2 == escolhaAtributo){
        printf("Voce ja escolheu esse atributo!");
        return 1;
    }


switch (escolhaAtributo2){
        case 1:
        printf("Atributo escolhido: População\n");
        printf("CARTA 1: %s Populaçao: %d\n",NomeCidade, populacao);
        printf("CARTA 2: %s Populaçao: %d\n",NomeCidade2, populacao2);

        if(populacao == populacao2){
            printf("EMPATE!");
        }else if(populacao > populacao2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 2:
        printf("Atributo escolhido: Area\n");
        printf("CARTA 1 %s Area: %.2f\n",NomeCidade, areaKm);
        printf("CARTA 2 %s Area: %.2f\n",NomeCidade2, areaKm2);

        if(areaKm == areaKm2){
            printf("EMPATE!");
        }else if(areaKm > areaKm2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 3:
        printf("Atributo escolhido: PIB\n");
        printf("CARTA 1: %s PIB: %.2f\n",NomeCidade, pib);
        printf("CARTA 2: %s PIB: %.2f\n",NomeCidade2, pib2);

        if(pib == pib2){
            printf("EMPATE!");
        }else if(pib > pib2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 4:
        printf("Atributo escolhido: Numero de pontos turisticos\n");
        printf("CARTA 1: %s Numero de pontos turisticos: %d\n",NomeCidade, PontosTuristicos);
        printf("CARTA 2: %s Numero de pontos turisticos: %d\n",NomeCidade2, PontosTuristicos2);

        if(PontosTuristicos == PontosTuristicos2){
            printf("EMPATE!");
        }else if(PontosTuristicos > PontosTuristicos2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        case 5:
        printf("Atributo escolhido: Densidade demografica\n");
        printf("CARTA 1: %s Densidade demografica: %.2f\n",NomeCidade, densidadePop1);
        printf("CARTA 2: %s Densidade demografica: %.2f\n",NomeCidade2, densidadePop2);

        if(densidadePop1 == densidadePop2){
            printf("EMPATE!");
        }else if(densidadePop1 < densidadePop2){
            printf("CARTA 1 %s venceu!", NomeCidade);
            poderCarta1++;
        }
        else{
            printf("CARTA 2 %s venceu!", NomeCidade2);
            poderCarta2++;
        }
        break;

        default:
        break;
    }

    if(poderCarta1 > poderCarta2){
        printf("Carta 1 %s venceu a partida!", NomeCidade);
        printf("\nQuantidade de poder Carta 1: %d\nQuantidade de poder Carta 2: %d\n", poderCarta1, poderCarta2);
    }else if(poderCarta1 == poderCarta2){
        printf("EMPATE");
        printf("\nQuantidade de poder Carta 1: %d\nQuantidade de poder Carta 2: %d\n", poderCarta1, poderCarta2);
    }
    else{
        printf("Carta 2 %s venceu a partida!", NomeCidade2);
        printf("\nQuantidade de poder Carta 1: %d\nQuantidade de poder Carta 2: %d\n", poderCarta1, poderCarta2);
    }

    return 0;
}

