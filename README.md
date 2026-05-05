# Estrutura de Dados e Algoritmos:

Curso/playlist usada: https://youtube.com/playlist?list=PLxI8Can9yAHf8k8LrUePyj0y3lLpigGcl&si=jCZz4Ph-jAb8rQga

## Lista linear:
Estrutura de dados na qual cada elementos é precedido por um elemento e sucedido por outro. OS elementos estão em uma dada ordem
*Estamos falando de array...*

## Lista linear sequencial:
É uma lista linear na qual a ordem lógica dos elementos (vista pelo usuário) é a mesma ordem física (na memória principal) dos elementos. Ou seja, a mesma ordem que está sendo apresentada visualmente é traduzida na memória

### Modelagem:
+ Modelaremos usando um arranjo de registros;
+ Registros conterão as informações de interesse do usuário;
+ Nosso arranjo terá um tamanho fixo e controlaremos o número de elementos com uma variável adicional;

## Stack
+ Estrutura de dados do tipo linear TADs (Tipo Abstrato de Dados). 
+ Segue o padrão LIFO (Last-in-first-out) ou FILO (First-in-last-out).

### Modelagem:
+ O acesso sempre é no topo da estrutura (pense em uma pilha de louças).

### Métodos:
+ `push(valor)`: adiciona um valor arbitrário ao topo da pilha.
+ `pop()`: remove o elemento do topo.
+ `top()/peek()`: lê o valor que pertence ao topo da pilha.
+ `isEmpty()`: booleano que verifica se a pilha está vazia.
