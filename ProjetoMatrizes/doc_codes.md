# Documentação

## Descrição

Clique [aqui](main.c) para visualizar o **algoritmo na integra**, onde estão caracterizadas todas as funções presentes no algoritmo;

Clique [aqui](header.h) para visualizar o **arquivo header**, onde estão contidas as relações entre o algoritmo e os arquivos externos A, B e C, onde estão numeradas cada uma dessas funções segundo o menu,
e onde estão postos os nomes das funções correspondentes.

## O algoritmo

O algoritmo é composto por 16 funções, que podem ser escolhidas pelo usuário a fim de realizar uma determinada função relacionada a operação de Matrizes.



Basicamente, existem 10 tipos de funções diferentes neste algoritmo, afinal, algumas funções são repetidas, mudando-se apenas as variáveis utilizadas que dizem respeito a qual matriz está sendo feita a operação referida.

Ou seja, genericamente falando, utilizando este algoritmo é possível:


- **Definir o tamanho de uma matriz**:

  As funções "DefineTamA" e "DefineTamB", tornam possível, através de uma entrada determinada por um usuário, definir o tamanho das matrizes com as quais estão se trabalhando
  Sua construção é bastante simples, há uma série de Printf's que sinalizam ao usuário o momento de entrar com a quantidade de linhas e colunas da sua matriz.

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.



- **Preencher uma matriz com valores aleatórios**:

  As funções "RandomA" e "RandomB" podem ser usadas para preencher os valores de uma matriz de forma aleatória.
  Sua construção requer a previsão de um erro possível, que é caso quando a matriz não tenha nenhuma linha ou nenhuma coluna, sendo assim impossível preencher a matriz o algoritmo avisa ao usuário que houve um erro.
  A aleatoriedade é de certa forma controlada, através de uma entrada de teclado o usuário pode definir uma faixa de valores os quais podem ser postos nas posições da matriz.

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Atribuir valores manualmente para matrizes**:

  As funções "ManualA" e "ManualB" podem ser utilizadas pelo usuário para atribuir valores manualmente a todas as posições possíveis para a matriz de um tamanho previamente definido, com linhas e colunas maiores que zero.
  Sua construção requer um for para preencher linhas e colunas, com um pedido de entrada para o usuário através de um printf.

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Somar, Subtrair ou Multiplicar matrizes**:

  As funções "Soma", "Subtracao" e "Multiplicacao" possibilitam operações matemáticas básicas utilizando matrizes para o usuário;
  A construção das três funções requerem que os passos anteriores já tenham sido cumpridos, ou seja, previamente uma matriz teve de ter seu tamanho definiddo e valores preenchidoos, de forma aleatória ou não.
  Para que essas funções sejam utilizadas, se faz necessário que todas as matrizes possuam a mesma ordem. Caso contrário, um aviso de erro é exibido.

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Exibir uma Matriz**:

  Uma vez definidas, as matrizes podem ser exibidas através das funções "PrintA", "PrintB" e "PrintC";
  Essas funções percorrem as matrizes através da função for, exibindo na tela seus valores segundo suas posições.

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Ler uma matriz de um arquivo externo**:

  Através de um arquivo externo, previamente adicionado ao algoritmo no arquivo [header](header.h), as funções "ReadfA" e "ReadfB" cumprem essa função.
  É possível acessar uma arquivo externo que foi previamente declarado. Portanto, através da entrada no número de linhas e colunas é possível exibir na tela
  o conteúdo do arquivo encontrado através da função predefinida "fopen".

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Escrever uma matriz em um arquivo externo**:

  A função "PrintfC" escreve em um arquivo externo uma matriz C, resultante de alguma operação dentro do algoritmo previamente feita.
  Utilizando "fprint", é possível escrever no documento os elementos de uma matriz e suas dadas posições corretas;

  [Aqui](main.c), está contido o arquivo onde esta função está implementada.

- **Encerrar a execução**:

  O item de menu 16 termina a execução do programa;
