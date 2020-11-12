# Vetores

​	Vetores são necessários quando você precisa armazenar um grande quantidade de valores de forma que não precise criar uma variável para cada. Assim, você ao invez de fazer:

```C
int valor1,valor2,valor3,valor4;
scanf("%d",&valor1);
scanf("%d",&valor2);
scanf("%d",&valor3);
scanf("%d",&valor4);
```

​	Faz:

```C
int valores[4];
int i;
for(i = 0; i < 4; i++)
{
    scanf("%d",&valores[i]);
}
```

Utilizando sempre uma estrutura de repetição para percorre-lo;

### Declarar

​	É simples. 

- Informa o tipo `int`, `float` e por aí vai;
- Escreve se nome;
- Entre colchetes `[]` coloca o tamanho do carinha.

Veja:

```C
int vetorInt[10];
```

### Alimentar

​	Podemos inserir valores dentro do vetor de varias formas:

```c
int i;
printf("Informe um valor");
scanf("%d",&vetorInt[0]);

//ou

vetorInt[3] = 5;

//ou

for (i = 0; i < 10; i++)
{
    vetorInt[i] = i + 3;
}

// ou também

for (i = 0; i < 10; i++)
{
    printf("Informe um valor");
	scanf("%d",&vetorInt[i]);
}
```

### Percorrer

​	Para tal feito precisamos de uma estrutura de repetição para incrementar a variável que usaremos como indice[^1] como pode ser visto abaixo:

```c
int i;
for (i = 0; i < 10; i++)
{
    printf("%d",vetorInt[i]);
}

```

​	Vamos ilustrar melhor, observe o exemplo:

```C
int vetorInt[3];
int i;

vetorInt[0]=4;
vetorInt[1]=3;
vetorInt[2] =100;
// e percorrendo:
for (i = 0; i < 10; i++)
{
    printf("%d",vetorInt[i]);
}
```

​	Neste exemplo trabalhamos com um vetor inteiro de tamanho 3 representado por `[ 4, 3, 100 ]` e olha como seria cada repetição desse for:

1. Para `i` igual a `0` temos no vetor o valor `4` :point_right: [ **​​4**, 3, 100 ] e então mostramos o numero 4;

2. Para `i` igual a `1`  :point_right: [ 4, **3**, 100 ] e então mostramos o numero 100;

3. Para `i` igual a `2`, ou seja, o ultimo elemento :point_right: [ 4, 3, **100** ] e então mostramos o numero 100;

   

   **Relembrando:** são 3 repetições mas o valor de `i` vai até `3` pois começa em `0`;

Podemos também criar e percorrer um vetor do tipo `float`:

```c
float i;
float vetorFloat[10];
for (i = 0; i < 10; i++)
{
    vetorFloat[i] = i + 3.87;
}

```



[^1]:É a "casinha" do vetor que inicia em 0, e vai até o tamanho do vetor - 1 no caso do exemplo vai até 9. 

# Strings

​	Uma string é nada mais nada menos que um vetor de `char`. Porém tem uma tratativa um pouco diferente de trabalhar.

### Declarar

​	Mudamos o tipo para char e criamos uma string.

```C
char vetorChar[10];
```

### Alimentar

​	O que muda de um vetor para string é na forma de leitura. Não utilizamos `scanf` e sim `gets`:

```C
printf("Informe uma palavra ou frase");
fflush(stdin); 
gets(vetorChar);
```

​	Para que somente então o usuário possa escrever "papibaquigrafo" no console.

### Percorrer

​	Para isso utilizamos o `\0` conhecido como "final de string" e percorremos a string **enquanto** ela, na **posição atual da repetição** for diferente de `\0`, como pode ver abaixo:

```c
int i;
while(vetorChar[i] != '\0')
{
    vetorChar[i] = a;
    i++;
}
```



# Matrizes

:

### Declarar

```C
int vetorInt[10];
float vetorFloat[10];
```

### Percorrer

```c
int i;
for (i=0;i<10;i++)
{
    vetorInt[10] = i;
}
for (i=0;i<10;i++)
{
    vetorFloat[10] = i + 0.25;
}
```



# Funções

 No exemplo abaixo a função tem declarado que seu retorno é `int`, que recebe 2 parametros também inteiros e em seu codigo retorna a soma desses. Na `main` chamamos ela dentro de um `printf` somando então 3 + 5 e mostrando assim o numero 8. 

```C
int soma(int a, int b)
{
    return a+b;
}
int main(void){
    printf("%d",soma(3,5));
}
```

## Passando parametros

### Variáveis

​	Independente do tipo da variável ela é passada da seguinte forma:

```c
int nomeFuncao(int qualquer)
{
    /*CODE*/ 
}
int main(void){
    int a = 2;
    nomeFuncao(a);
}
```

### Vetores 

​	Independente do tipo da vetor ela é passada da seguinte forma:

```c
int nomeFuncao(int vetorQualquer[], int tamanhoVetor)
{
    /*CODE*/ 
}
int main(void){
    int tamanhoVetor = 10;
    int vetor[tamanhoVetor];
    nomeFuncao(vetor);
}
```

### String

​	Independente do tipo da string ela é passada da seguinte forma:

```c
int nomeFuncao(char stringQualquer[])
{
    /*CODE*/ 
}
int main(void){
    char string[50];
    nomeFuncao(string);
}
```

### Matriz

​	Independente do tipo da matriz ela é passada informando linha ou coluna da seguinte forma:

```c
int nomeFuncao(int matrizQualquer[][2], int quantidadeLinhas, int quantidadeColunas)
{
    /*CODE*/ 
}
int main(void){
    int linhas=3,colunas=2;
    int matriz[linhas][colunas];
    nomeFuncao(matriz,linhas,colunas);
}
```



# 

# 

# Exercite

Leia um texto (matriz de strings)  e faça funções para:

- Contar quantas letras tem em cada linha e aramazenar em um vetor e imprimi-lo;

- Verificar no texto se a conversão do char para int é primo e imprimir o caracter separado por espaço;
  - "G" corresponde ao int 71 na tabela ASCII;
  - 71 é primo;
  - "d" corresponde ao int 100 nas tabel ASCII;
  - 100 não é primo;

- Encontrar vogal e separar-la do restante da palavra com " - " e imprima o texto; 
  - Batatao => B-a-t-a-t-a--o-;
  - Ovelha => -O-v-e-lh-a-.

**Exemplo:**

```
Quantas linhas o texto contem?
3
Informe um texto:
Vou fazer esse exercio.
Vou estudar.
Logo, vou passar na prova.
======= Vetor de letras por linha =======

19       10       20

======= String de char com codigo primo ======

a e e e e e e a g a a a a                

======= Texto com vogais separadas ======

V-o--u- f-a-z-e-r -e-ss-e- -e-x-e-rc--i--o-.
V-o--u- -e-st-u-d-a-r.
L-o-g-o-, v-o--u- p-a-ss-a-r n-a- pr-o-v-a-.
```

