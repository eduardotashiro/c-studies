# Pilhas em C

Este pacote contém exemplos práticos de **pilhas (stacks) em C**, cada arquivo demonstra implementações e operações fundamentais de pilhas, como `push`, `pop`, `peek` e interação com usuário.

---

## Arquivos  

### 01_pilha_basica.c – Pilha simples (push/pop)
- Implementa uma pilha de inteiros com tamanho máximo de 5.
- Demonstra as operações básicas `push`, `pop` e `imprimir`.

- **Conceitos abordados:**
  - Estrutura de dados pilha (LIFO – Last In, First Out).
  - Controle do topo da pilha.
  - Inserção e remoção de elementos.

- **Exemplo de saída:**

  - Pilha: 10 20 30
  - Removido: 30
  - Pilha: 10 20

  ---

  ### 02_pilha_menu.c – Pilha com menu interativo
- Pilha de inteiros com interação via terminal.
- Permite adicionar (`push`), remover (`pop`) e imprimir elementos conforme escolha do usuário.

- **Conceitos abordados:**
  - Estrutura de dados pilha com interface simples.
  - Controle de topo da pilha.
  - Tratamento de pilha cheia e vazia.

- **Exemplo de execução:**
  - 1-Push 2-Pop 0-Sair: 1
  - Digite valor: 5
  - Pilha: 5
    
    ---
  - 1-Push 2-Pop 0-Sair: 1
  - Digite valor: 10
  - Pilha: 5 10

    ---
  - 1-Push 2-Pop 0-Sair: 2
  - Removido: 10
  - Pilha: 5

---
  ### 03_pilha_caracteres.c – Pilha de caracteres
- Pilha de caracteres com tamanho máximo de 10.
- Demonstra operações `push` e `pop` e exibe o estado atual da pilha.

- **Conceitos abordados:**
  - Pilha de tipos diferentes (char).
  - Inserção e remoção de elementos.
  - Impressão do conteúdo da pilha.

- **Exemplo de saída:**
  - Removido: C
  - A B

  ---

  ### 04_pilha_topo.c – Pilha com retorno de topo (peek)
- Pilha de inteiros com função `peek` que retorna o topo sem remover.
- Também possui operações `push` e `pop`.

- **Conceitos abordados:**
  - Recuperar valor do topo sem remover.
  - Controle do topo da pilha.
  - Inserção e remoção de elementos.

- **Exemplo de saída:**
  - Topo: 25
  - Removido: 25
  - Topo: 15

---

**OBS**: Todos os exemplos utilizam tamanho máximo de pilha fixo (`MAX`). Ideal para prática de lógica de pilhas e compreensão da estrutura LIFO.