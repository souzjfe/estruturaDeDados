#include <stdio_ext.h>
#include <stdlib.h>
// Contar quantas letras tem em cada linha e aramazenar em um vetor e imprimi-lo
void contarletrasPorLinha(char texto[][500], int quantidadeLinhas)
{
  int i, j;
  int contagem[quantidadeLinhas];
  printf("\n\n======= Vetor de letras por linha =======\n\n");
  for (i = 0; i < quantidadeLinhas; i++) // precorrer as linhas
  {
    contagem[i] = 0;
    j = 0;                      // a cada vez que percorremos uma linha resetamos a nossa contagem de letras
    while (texto[i][j] != '\0') //percorrer as letras
    {
      if ((texto[i][j] >= 65 && texto[i][j] <= 90) || (texto[i][j] >= 97 && texto[i][j] <= 122))
      {
        contagem[i]++;
      }
      j++;
    }
    printf("%d\t", contagem[i]);
  }
}
int verificarPrimo(int numero)
{
  int i;
  int divisores = 0;
  for (i = 1; i < numero; i++)
  {
    if (numero % i == 0)
    {
      divisores++;
    }
  }
  return divisores >= 3 ? 0 : 1;
}
void verificarCharPRimo(char texto[][500], int quantidadeLinhas)
{
  int i, j;
  int quantidadePrimos = 0;
  char stringPrimo[500];
  printf("\n\n======= String de char com codigo primo ======\n\n");
  for (i = 0; i < quantidadeLinhas; i++) // precorrer as linhas
  {
    j = 0;                      // a cada vez que percorremos uma linha resetamos a nossa contagem de letras
    while (texto[i][j] != '\0') //percorrer as letras
    {
      if (verificarPrimo((int)texto[i][j]))
      {
        printf("%c ", texto[i][j]);
      }
      j++;
    }
  }
}

void separarVogais(char texto[][500], int quantidadeLinhas)
{
  int i, j;
  int quantHifens; //vamos salvar a quantidade de hifen que foram inseridos para pular essas casas nos indices da string
  char textoSeparado[quantidadeLinhas][500];
  printf("\n\n======= Texto com vogais separadas ======\n\n");
  for (i = 0; i < quantidadeLinhas; i++) // precorrer as linhas
  {
    j = 0;                      // a cada vez que percorremos uma linha resetamos a nossa contagem de letras
    quantHifens = 0;
    while (texto[i][j] != '\0') //percorrer as letras
    {
      if (texto[i][j] == 'a' || texto[i][j] == 'A' || texto[i][j] == 'e' || texto[i][j] == 'E' || texto[i][j] == 'i' || texto[i][j] == 'I' || texto[i][j] == 'o' || texto[i][j] == 'O' || texto[i][j] == 'u' || texto[i][j] == 'U')
      {
        textoSeparado[i][j + quantHifens] = '-';
        textoSeparado[i][j + quantHifens + 1] = texto[i][j];
        textoSeparado[i][j + quantHifens + 2] = '-';
        quantHifens += 2;
      }
      else
      {
        textoSeparado[i][j + quantHifens] = texto[i][j];
      }
      j++;
    }
    printf("%s", textoSeparado[i]);
  }
}
int main(void)
{
  int i, j = 0;
  int quantidadeLinhas;
  printf("Quantas linhas o texto contem?\n");
  scanf("%d", &quantidadeLinhas);
  printf("Informe um texto:\n");
  char matrizTexto[quantidadeLinhas][500];
  for (i = 0; i < quantidadeLinhas; i++)
  {
    __fpurge(stdin);
    fgets(matrizTexto[i], 500, stdin);
  }
  contarletrasPorLinha(matrizTexto, quantidadeLinhas);
  verificarCharPRimo(matrizTexto, quantidadeLinhas);
  separarVogais(matrizTexto, quantidadeLinhas);

  return 0;
}
