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

## Lista encadeada:
+ Diferente da lista sequencial, a lista encadeada é uma estrutura de dados TADs que armazena uma lista não-contígua, isto é, são várias informações espalhadas pela memória, mas ainda assim estão ligadas por nodes, justaposto por ponteiros por exemplo.
+ O TADs tem dois membros principais: o valor contido na lista e o ponteiro apontando para o next/previous.

### Representação da Lista Encadeada:
+ `data`: informação contida naquele espaço de memória.
+ `next`: ponteiro apontando para o próximo `node`.

# Tabelas de Dispersão (Hash Tables):
+ *Endereçamento Direto:* Método que usa dois vetores: um dedicado para o armazenamento das chaves e outro para as informações relacionadas com a posição da chave. Possui limitações de acordo com o conjunto (pense na definição matemática) das chaves, que a quantidade é proporcional à quantidade de informações, tornando-se imprático para alguns casos...

## Função Hash + Tabelas Hash:
+ Essa função recebe como parâmetros uma chave *X* e a quantidade de valores *M* associados na chave, retornando uma posição *P* [`h(X;M) = P]`.

* `h(X;M) = X mod M (alternativamente, X % M)` [Hash Modular]

[!IMPORTANT] Porém, com esse cálculo, pode ocorrer *colisões Hash*, isto é, o cálculo para M distintos podem dar o mesmo valor P.

* *Exemplo:*
    * `h(0;10) ~> 0 mod 10 = 0` [ok!]
    * `h(510,10) ~> 510 mod 10 = 0` [colidiu!]

+ *"O que define uma boa Função Hash?"*
    + Há uma distribuição de qualidade pela tabela
    + Minimiza a quantidade de colisões da tabela








