#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int codigo;
    int populacao;
    int turismo;
    char nome[30];
    float pib;
    float area;

    printf("Digite o codigo da cidade\n");
    scanf("%d",&codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s",&nome);
    
    printf("Digite a população\n");
    scanf("%d",&populacao);

    printf("Digite o quantidade de pontos turisticos \n");
    scanf("%d", &turismo); 
    
    printf("Digite o Pib\n");
    scanf("%f",&pib);
     
     printf("Digite a area\n");
     scanf("%f",&area);

    printf("Codigo:%d\n",codigo);
    printf("Nome da cidade:%s\n",nome);
    printf("População:%d\n",populacao);
    printf("Pontos turisticos:%d\n",turismo);
    printf("PIB:%f\n",pib);
    printf("Área:%f\n",area);
    



    return 0;
}
