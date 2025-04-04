# Elevador - Simulação de um Sistema de Elevador

Este é um projeto simples de simulação de um sistema de **Elevador** utilizando **C++**. O objetivo principal é demonstrar a implementação de um elevador que pode subir, descer, e permitir que pessoas entrem e saiam, respeitando os limites de capacidade e andares.

## Descrição

Este projeto implementa uma classe `Elevador` que modela um elevador, permitindo simular as seguintes ações:

- **Entrar pessoas no elevador** (respeitando a capacidade máxima);
- **Sair pessoas do elevador**;
- **Subir e descer entre andares** (respeitando o número máximo de andares);
- **Exibir o estado atual do elevador** (capacidade, número de pessoas, andar atual).

A classe foi projetada de maneira modular e utiliza conceitos de programação orientada a objetos (OOP), como encapsulamento e construtores.

## Estrutura do Projeto

- **Elevador.h**: Arquivo de cabeçalho que define a classe `Elevador`, seus atributos e protótipos de métodos.
- **Elevador.cpp**: Arquivo de implementação dos métodos da classe `Elevador`.
- **main.cpp**: Arquivo principal que instancia um objeto `Elevador` e simula a operação do elevador.

## Funcionalidades

- **Configuração inicial**: Você pode configurar o elevador com o número máximo de andares e a capacidade máxima de pessoas.
- **Movimentação**: O elevador pode subir ou descer de andar, com verificações para impedir movimentos inválidos (como descer do térreo ou subir além do último andar).
- **Entrada e saída de pessoas**: As pessoas podem entrar ou sair do elevador, respeitando os limites de capacidade e evitando que o elevador fique vazio.

## Como Usar

### Requisitos

- **Compilador C++**: O código foi desenvolvido e testado com o compilador GCC, mas deve funcionar com qualquer compilador C++ compatível com o padrão C++11 ou superior.
- **Sistema Operacional**: Funciona em sistemas operacionais como Linux, macOS e Windows (com o ambiente C++ configurado).

### Compilando e Executando

1. **Clone este repositório** para sua máquina local:

   ```
   git clone https://github.com/seu-usuario/elevador.git
   cd elevador
   ```

2. **Compile o projeto**:

   Se você estiver utilizando o **GCC**, compile os arquivos com o seguinte comando:

   ```
   g++ -o elevador main.cpp Elevador.cpp
   ```

3. **Execute o programa**:

   Após a compilação, execute o programa com:

   ```
   ./elevador
   ```

4. **Interaja com o programa**: O programa exibe informações sobre a capacidade do elevador, o andar atual, o número de pessoas, e permite simular entradas, saídas, subidas e descidas.

### Exemplo de Execução

```
Acabei de inicializar uma instância da classe!
Capacidade Máxima: 9
Andar atual: 0
Quantidade de pessoas: 0
Total de andares: 10
...
```

### Funcionalidades Simuladas

- Subir 3 andares
- Descer 1 andar
- Entrar 2 pessoas
- Sair 1 pessoa
- Exibir estado do elevador após algumas operações.
