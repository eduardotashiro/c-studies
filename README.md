![Language](https://img.shields.io/badge/Language-C-blue)
![Mood](https://img.shields.io/badge/mood-studying%20hard-red)
![Progress](https://img.shields.io/badge/progress-69%25-green)

## ***college C language studies***

> ~~now i pass kkk~~

### Este repositório é apenas para fins de estudo da faculdade

Eduardo acabou reprovando em Estruturas de Dados uma vez, e espera **nunca mais passar por isso novamente** 😅


## Objetivo

Este README explica o propósito da pasta `structures` e **como qualquer pessoa pode compilar e executar os programas localmente**.

## Estrutura do diretório
```
structures/ 
├─ graph/       # exercícios sobre grafos
├─ matrices/    # exercícios sobre matrizes
├─ pointers/    # exercícios sobre ponteiros
├─ queue/       # arquivos fonte .c (ex: 03_fila_circular.c)
├─ stack/       # exercícios sobre pilhas
├─ tree/        # exercícios sobre árvores
├─ vectors/     # exercícios sobre vetores
├─ bin/         # executáveis gerados (não versionar no Git)
.gitignore      # arquivos a ignorar
README.md       # arquivo que vc está lendo agora
```

## Pré-requisitos

- **Linux/** GCC geralmente já está instalado. Verifique:

```bash
gcc --version
```
**Se não estiver instalado:**

```bash
sudo apt update && sudo apt install gcc
```

> VS Code (opcional): instalar a extensão C/C++ (Microsoft) para compilar e depurar com facilidade.

## Boas práticas para o repositório

* `.gitignore` deve ignorar `bin/` e arquivos temporários.


## Compilando e executando programas

1. Clone o repositório.
2. Abra `structures` no VS Code e digite:
```
mkdir -p bin

gcc -std=c11 -Wall queue/03_fila_circular.c -o bin/03_fila_circular
./bin/03_fila_circular
```

 ## Usando VS Code (mais rápido)

1. Crie a pasta .vscode na raiz do projeto (c-studies/.vscode).

2. Dentro dela, crie tasks.json com este conteúdo:

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "Compilar e rodar C",
      "type": "shell",
      "command": "gcc",
      "args": [
        "${file}",
        "-o",
        "${fileDirname}/${fileBasenameNoExtension}",
        "&&",
        "${fileDirname}/${fileBasenameNoExtension}"
      ],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "problemMatcher": []
    }
  ]
}

```

> Pressione Ctrl+Shift+B - o VS Code vai compilar e executar o arquivo .c.

>**Não se esqueça de adicionar .vscode/ no .gitignore antes de dar push no GitHub.**

---
---
---
---

<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="50"/>
<img src="https://upload.wikimedia.org/wikipedia/commons/3/35/The_C_Programming_Language_logo.svg" alt="Logo do C" width="100"/>


---
---
---
---
***MIT*** © **[Eduardo Tashiro](https://github.com/eduardotashiro)**
