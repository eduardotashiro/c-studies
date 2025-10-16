# Ponteiros em C

Este pacote contém exemplos práticos de **ponteiros em C**, cada arquivo mostra exemplos fundamentais de ponteiros, endereços de memória, alocação dinâmica e vetores dinâmicos.


## Arquivos  


### 01_basico.c – Introdução aos ponteiros
- Demonstra a relação entre variáveis e ponteiros.
- Mostra como um ponteiro pode armazenar o endereço de uma variável.
- Permite alterar o valor de uma variável através do ponteiro.

- **Conceitos abordados:**
  - Declaração de ponteiros.
  - Operador `&` para obter o endereço.
  - Operador `*` para acessar o valor apontado.

- **Exemplo de saída:**

Valor de var: 20

Endereço de var: 0x...

Valor de ptr: 0x...

Valor apontado por ptr: 20

Novo valor de var: 30

---

### 02_funcao_imprimir.c – Ponteiros e funções
- Cria uma função `imprimir()` para exibir valores de ponteiros e variáveis.

- Demonstra como alterar o valor da variável diretamente ou através do ponteiro.

- **Conceitos abordados:**
  - Ponteiros globais.
  - Funções que manipulam ponteiros.
  - Diferença entre valor da variável, endereço e valor apontado.

- **Exemplo de saída:**

  - valor de xi = 10

  - valor de &xi = 0x...

  - valor de ptr_xi = 0x...

  - valor de *ptr_xi = 10

  ---

  - valor de xi = 20

  - valor de &xi = 0x...

  - valor de ptr_xi = 0x...

  - valor de *ptr_xi = 20

  ---

  - valor de xi = 30
 
  - valor de &xi = 0x...

  - valor de ptr_xi = 0x...
  
  - valor de *ptr_xi = 30

---

### 03_variaveis_tipos.c – Ponteiros e diferentes tipos de variáveis

- Demonstra ponteiros para tipos `int`, `float` e `char`.

- Mostra como acessar valores diferentes usando ponteiros correspondentes.

- **Conceitos abordados:**
  - Ponteiros e tipos de dados.
  - Valor, endereço e conteúdo apontado.

- **Exemplo de saída:**
  - xi = 10 | endereço: 0x... | *ptr_xi = 10

  - xf = 3.14 | endereço: 0x... | *ptr_xf = 3.14

  - xc = A | endereço: 0x... | *ptr_xc = A

---

### 04_alocacao_dinamica.c – Alocação dinâmica de memória

- Mostra como usar `malloc` e `free` para criar e liberar memória dinamicamente.

- Demonstra que ponteiros podem apontar para variáveis alocadas ou existentes.

- **Conceitos abordados:**

  - Alocação dinâmica de variáveis e vetores.

  - Importância de inicializar memória alocada.

  - Liberação de memória com `free()`.

- **Exemplo de saída:**

  - endereço inicial: 0x...

  - endereço alocado: 0x...
  
  - Valor inicial: lixo
  
  - endereco: 0x...
  
  - Valor: 10
  
  - endereço de x: 0x...
  
  - Valor via ponteiro: 20

  - novo endereco: 0x...

  - Valor: lixo
---

### 05_vetor_dinamico.c – Vetores dinâmicos

- Cria vetores cujo tamanho é definido em tempo de execução.

- Inicializa cada posição do vetor com valores sequenciais (`1, 2, 3...`).

- Verifica se a memória foi alocada corretamente antes de usar.

- **Conceitos abordados:**

  - Criação de vetores dinâmicos com `malloc`.

  - Verificação de falha na alocação (`NULL`).

  - Liberação de memória dinâmica com `free()`.

- **Exemplo de execução:**

Digite o tamanho do vetor: 5  <- (usuário escolhe o valor)

> saída -> 1 2 3 4 5

**OBS**: Os endereços de memória vão estar diferentes a cada execução