#include<stdio.h>
int main()
{
    //definindo as variaveis

    char cidade1[200],cidade2[200],estado1[10],estado2[10];
    char codigo1[] = "01";
    char codigo2[] = "02";
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1,area2,pib1,pib2,densidadepopulacional1,densidadepopulacional2,pibpercapta1,pibpercapta2;
    double superpoder1,superpoder2;

    //recebendo os atributos da primeira carta

    printf("digite o nome da sua cidade:");
    scanf("%s" , cidade1);

    printf("digite o nome do seu estado:");
    scanf("%s", estado1);

    printf("digite a sua populacao:");
    scanf("%d", &populacao1);

    printf("digite os pontos turisticos da sua cidade:");
    scanf("%d", &pontosturisticos1);

    printf("digite a area da sua cidade:");
    scanf("%f", &area1);

    printf("digite o pib da sua cidade:\n");
    scanf("%f" , &pib1);

    //calcule densidade populacional e pibpercapta da primeira carta

    densidadepopulacional1 =(populacao1 / area1);
    pibpercapta1 =(float)(pib1 / populacao1);

    //recebendo os atributos da segunda carta

    printf("digite a sua cidade:");
    scanf("%s", cidade2);

    printf("digite o nome do seu estado:");
    scanf("%s" , estado2);

    printf("digite a sua populacao:");
    scanf("%d" , &populacao2);

    printf("digite os pontos turisticos da cidade:");
    scanf("%f", &pontosturisticos2);

    printf("digite a area da sua cidade:");
    scanf("%f", &area2);

    printf("digite o pib da sua cidade:");
    scanf("%f", &cidade2);

    //calculo da segunda carta densidade populacional e pibpercapta

    densidadepopulacional2 = (populacao2 / area2);
    pibpercapta2 = (float)(pib2 / populacao2);

    //soma os atributos para calcular o superpoder de ambas as cartas

    superpoder1 = (double)(populacao1 + pontosturisticos1 + area1 + pib1 + pibpercapta1 - densidadepopulacional1);
    superpoder2 = (double)(populacao2 + pontosturisticos2 + area2 + pib2 + pibpercapta2 - densidadepopulacional2);

    //exibir o superpoder das duas cartas
    printf("\ncarta1 %s%s tem superpoder %.3f! \n", estado1, codigo1, superpoder1);
    printf("carta2 %s%s tem superpoder %.3f!\n", estado2, codigo2, superpoder2);

    //exibe todos os atributos da primeira carta

    printf("\nO codigo da primeira cidade e: %s%s\n", estado1,codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Estado: %s \n", estado1);
    printf("Populacao: %d \n", populacao1);
    printf("Ponto(s) turístico(s): %d \n", pontosturisticos1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Densidade populacional é: %.3f hab/km² \n", densidadepopulacional1);
    printf("PIB percapta: %.3f reais \n", pibpercapta1);
    printf("Superpoder: %.3f \n\n\n", superpoder1);

    //exibe todos atributos cadastrados da segunda carta

    printf("\nO código da segunda cidade é: %s%s \n", estado2,codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Estado: %s \n", estado2);
    printf("Populacao: %d \n", populacao2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Densidade populacional é: %.3f hab/km² \n", densidadepopulacional2);
    printf("PIB percapta: %.3f reais \n", pibpercapta2);
    printf("Superpoder: %.3f\n", superpoder2);

    //compara os atributos das cartas qual é maior e exibe 1 para verdadeiro e 0 para falso

    printf("\na população da cidade %s%s é maior do que da cidade %s%s? %i \n", estado1, codigo1,
           estado2, codigo2, (populacao1 > populacao2));
    printf("A cidade %s%s tem mais pontos turísticos do que da cidade %s%s? %i \n", estado1, codigo1,
           estado2, codigo2, (pontosturisticos1 > pontosturisticos2));
    printf("A área da cidade %s%s é maior do que a área da cidade %s%s? %i \n", estado1, codigo1,
           estado2, codigo2, (area1 > area2));
    printf("O PIB da cidade %s%s é maior do que o PIB da cidade %s%s? %i \n", estado1, codigo1,
           estado2, codigo2, (pib1 > pib2));
    printf("A densidade populacional da cidade %s%s é maior do que a densidade populacional da cidade %s%s? %i \n"
           , estado1, codigo1, estado2, codigo2, (densidadepopulacional1 > densidadepopulacional2));
    printf("O PIB percapta da cidade %s%s é maior do que o PIB percapta da cidade %s%s? %i \n", estado1, codigo1,
           estado2, codigo2, (pibpercapta1 > pibpercapta2));

    return 0;
}
