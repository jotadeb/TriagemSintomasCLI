# Sistema de Triagem de Sintomas em C
Um programa de linha de comando para triagem automatizada de sintomas, desenvolvido para simular o funcionamento de um chatbot de saúde comunitária. Ele auxilia o usuário na identificação de possíveis causas e orientações iniciais baseadas nos sintomas informados. O fluxo é totalmente interativo e utiliza algoritmos de decisão em linguagem C para orientar o usuário pelas opções disponíveis.

## Tecnologias Utilizadas
- Linguagem: C
- Bibliotecas: stdio.h, stdlib.h, locale.h (para acentuação e caracteres especiais), windows.h (apenas em sistemas Windows)
- Compatível com Windows, Linux e macOS

## Utilização do Programa

O sistema pode ser compilado utilizando um compilador C padrão, como GCC ou Clang.  
**Exemplo de compilação para GNU/Linux/macOS:**
```bash
gcc -o triagem Aep.c
```
No Windows:
```bash
gcc -o triagem.exe Aep.c
```

**Execução:**
```bash
./triagem
```
ou, no Windows:
```bash
triagem.exe
```

### Exemplo de Uso
Ao iniciar o programa, será apresentado um menu com opções de sintomas. O usuário navega pelas opções digitando o número correspondente ao sintoma apresentado. O sistema solicita informações complementares, que são avaliadas para apresentar prováveis causas e cuidados iniciais.

#### Fluxo básico de interação:
1. O usuário escolhe um sintoma principal (exemplo: febre, lesão, dor no corpo, inchaço, dificuldade respiratória, náusea, pressão, tontura ou mal estar).
2. O sistema solicita informações detalhadas sobre o sintoma.
3. Para cada escolha, exibe novas opções ou perguntas de detalhamento.
4. Ao final, apresenta possíveis causas, sintomas associados e recomendações básicas de conduta.

Exemplo de menu inicial:
```
Informe os Sintomas abaixo:
1. Febre 
2. Lesão 
3. Dor no corpo 
4. Inchaço 
5. Dificuldade Respiratória 
6. Náuseas 
7. Pressão 
8. Tontura 
9. Mal estar 
10. Sair 
```

## Estrutura e Organização do Código

O projeto é composto por um único arquivo principal `Aep.c` organizado em funções que representam os possíveis sintomas a serem triados. A função `main()` implementa o fluxo principal do menu, controlando o ciclo de execução, leitura das opções, e o direcionamento das chamadas para cada função específica de sintoma, conforme escolha do usuário.

**Principais funções:**
- `main()`: inicia o menu, configura o sistema de leitura de caracteres especiais e gerencia o fluxo das opções.
- Uma função para cada sintoma, por exemplo: `menufebre()`, `menulesao()`, `menudorcorpo()`, `menuinchaco()`, `menudificuldadesrespiratorias()`, etc.
- Funções utilitárias: `limpartela()` (limpa a tela de acordo com o sistema operacional), `limparbufferentrada()` (garante a leitura correta de entradas), `causas()` (exibe orientações e causas associadas).

A cada etapa, as funções especialistas exibem perguntas adicionais conforme a natureza do sintoma, simulando uma lógica de decisão prototípica de triagem clínica.

## Fluxo de Decisão e Orientações

- **Diagnóstico sintomático:** O programa segmenta detalhes relevantes de cada sintoma e fornece feedback rápido, incluindo sinais de alerta e orientações sobre medidas caseiras ou necessidade de buscar atendimento médico urgente.
- **Respostas adaptativas:** Para sintomas graves ou faixas de valores críticos (exemplo: febre acima de 39°C), o sistema enfatiza a urgência do encaminhamento médico.
- **Cobertura ampliada:** Inclui sintomas relacionados a mal-estar, tontura, alterações articulares, pressão arterial alterada (hipotensão/hipertensão), reações alérgicas, sinais infecciosos, entre outros.

## Comentários e Boas Práticas

- O código prioriza clareza e segmentação funcional, facilitando a manutenção futura.
- Utiliza comentários resumidos para detalhar operações principais e destacar áreas críticas, favorecendo o entendimento de estudantes e equipes acadêmicas.
- A adaptação regional é feita via configuração de locale e diferenciação automática para caracteres especiais, assegurando funcionalidade multiplataforma.

## Estrutura Resumida do Arquivo

```
📜Aep.c
 ┣▶ main()  - menu e fluxo principal
 ┣▶ menufebre()
 ┣▶ menulesao()
 ┣▶ menudorcorpo()
 ┣▶ menuinchaco()
 ┣▶ menudificuldadesrespiratorias()
 ┣▶ menunausea()
 ┣▶ menupressao()
 ┣▶ menutontura()
 ┣▶ menumauestar()
 ┣▶ causas()
 ┣▶ outras (limpatela, limparbufferentrada, etc.)
```

## Observações

- O sistema foi desenvolvido para fins didáticos e simulação de lógica clínica em linha de comando.
- Não substitui avaliação médica.
- Modularidade permite expansão adicionando novos sintomas/fluxos como funções separadas.

### Principais Contribuidores
- **[João Daniel](https://github.com/jotadeb)**
- **[Ricardo Iuji](https://github.com/di0x1)**
- **[Gustavo Henrique](https://github.com/BoyThaCookies)**
