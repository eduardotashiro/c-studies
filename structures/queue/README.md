# fila em C

Este pacote contém exemplos práticos de **filas (queues) em C**, abordando desde implementações básicas até filas circulares, com diferentes tipos de dados (inteiros, caracteres e strings). Cada arquivo mostra conceitos fundamentais de filas, operações de enfileirar e retirar, além de manipulação de arrays.

---

## Arquivos

### 01_basico.c – Fila básica de inteiros
- Implementa uma fila simples usando um array estático.

- Mostra operações básicas:
  - Adicionar elementos (`enfileirar`)
  - Remover elementos (`retirarDaFila`)
  - Imprimir a fila

- **Conceitos abordados:**

  - Vetor estático para armazenar a fila
  - Índices `frente` e `tras` para controle da fila
  - Limite de capacidade definido por `MAX`

- **Exemplo de execução:**
```
Fila: 10 20 30

Removido: 10

Fila: 20 30
```

---

### 02_menu_interativo.c – Fila com menu interativo

- Permite que o usuário escolha entre:
  - Enfileirar elementos
  - Retirar elementos
  - Sair do programa

  **Demonstra controle de fila em tempo de execução.**

- **Conceitos abordados:**

  - Uso de `scanf` para entrada do usuário
  - Estruturas de repetição para menus interativos
  - Controle de fila com índices

- **Exemplo de execução:**

```
1-Enfileirar 2-Retirar da fila 1
DIGITE UM VALOR: 10
FILA: 10 
 
1-Enfileirar 2-Retirar da fila 1
DIGITE UM VALOR: 20
FILA: 10 20 
 
1-Enfileirar 2-Retirar da fila 2
Removido 10
FILA: 20 
 
1-Enfileirar 2-Retirar da fila 2
Removido 20
FILA: 
 
1-Enfileirar 2-Retirar da fila 2
FILA VAZIA!
FILA:  
```

---

### 03_fila_circular.c – Fila circular de inteiros

- Implementa uma fila circular para reaproveitar posições vazias no início do array.

- **Conceitos abordados:**
  - Fila circular usando `(tras + 1) % MAX` e `(frente + 1) % MAX`
  - Detectar fila cheia e vazia
  - Operações de enfileirar, retirar e imprimir

- **Exemplo de execução:**

```
FILA: 
1
2
3
4

REMOVIDO: 1

FILA: 
2
3
4

FILA: 
2
3
4
5
```
---

### 04_caracteres.c – Fila de caracteres

- Implementa uma fila que armazena caracteres (`char`).
- Mostra que filas podem ser usadas para tipos de dados diferentes de inteiros.

- **Conceitos abordados:**
  - Vetor de caracteres
  - Operações de fila básicas: `enqueue`, `dequeue`, `imprimir`

- **Exemplo de execução:**

```
FILA: ABCD

Removido: A

FILA: BCD
```

---

### 05_fila_string.c – Fila de strings

- Implementa uma fila que armazena strings (`char[]`).
- Demonstra uso de `strcpy` para copiar strings para a fila.

- **Conceitos abordados:**
  - Vetor de strings (array 2D de `char`)
  - Controle de fila com índices `frente` e `tras`
  - Operações: adicionar (`enqueue`), remover (`dequeue`) e imprimir

- **Exemplo de execução:**

```
[Fulano] [Ciclano] [Beltrano] 

Removido: Fulano

[Ciclano] [Beltrano] 

[Ciclano] [Beltrano] [Fulaninho] 
```

---

**Obs:**
- Todas as filas têm **capacidade limitada** (`MAX`), definida no início de cada arquivo.  

- A fila circular (03_fila_circular.c) permite **reaproveitar posições vazias** no início do array, evitando desperdício de espaço.  

- As implementações mostram **fila estática e fila circular**, além de manipulação com **inteiros, caracteres e strings**, cobrindo algus conceitos fundamentais de filas em C.  
