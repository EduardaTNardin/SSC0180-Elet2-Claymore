# SSC0180-Elet2-Claymore
Segundo projeto realizado para a disciplina Eletrônica para Computação [SSC0180], ministrado pelo docente [Eduardo Vale Simões](https://gitlab.com/simoesusp), durante o primeiro semestre do curso de Bacharelado em Ciências de Computação, na USP campus São Carlos.

![claymore_explosion](https://github.com/EduardaTNardin/SSC0180-Elet2-Claymore/assets/128496419/5de66393-e1be-4091-9e0a-8a7643e5f649)

# Sobre o Projeto
O projeto se trata de uma simulação de uma bomba do tipo "claymore", a qual explode de acordo com um comando. Para o trabalho, foi escolhido uma distância mínima de 20 centímetros como o comando, porém essa distância pode ser alterada no código do Arduino. Ao atingir esse valor, a bomba explodirá. O ciurcuito conta com um sensor ultrassônico que calcula a distância de algo na frente dele, através da emissão de ondas sonoras de alta frequência, mostrando em dois displays de 7 segmentos essa distância, o esquerdo em metros e o direito em decímetros. Quanto mais perto do sensor, mais rápido o LED contido no Arduino pisca, e também, mais rápido o buzzer ativo produz um som de "apito". Ao atingir a distância escolhida de 20 centímetros, o Arduino emite um sinal ao relé, que permite a passagem de corrente elétrica. Ao unir o fio positivo com o negativo, além de um pedaço de lã de aço na ponta dos dois fios, é gerado um curto-circuito que ocasionará uma combustão, ascendendo as bombinhas traque que estarão na lã de aço, explodindo as bombas.

## Integrantes do Grupo 8
* [Eduarda tuboy Nardin](https://github.com/EduardaTNardin) | nº USP 13732495
* [Gabriel Barbosa dos Santos](https://github.com/GotemBarbosa) | nº USP 14613991
* [Guilherme Antonio Costa Bandeira](https://github.com/Guilherme-Bandeira) | nº USP 14575620
* [Rafael Brazolin Alvez Mansur](https://github.com/RafaelMansurUsp)| nº USP 14604020
* [Renan Parpinelli Scarpin](https://github.com/RenanScarpin)| nº USP 14712188

## Escolha dos Componentes 
Todos os componentes abaixo, menos aqueles classificados como "emprestados", foram comprados na loja “Ca And Ma Componentes Eletrônicos”, localizada em São Carlos. Os componentes "emprestados" foram adquiridos com o docente Eduardo Simões.

Quantidade | Componente | Especificações | Preço Unidade
--- | --- | --- | ---
1 | Buzzer Ativo | Sonalarme 12A 3/7V | R$ 9,50
2 | Display 7 segmentos | 0,56 polegadas | R$ 3,84
2 | Decodificador | CD4511BE | R$ 3,00
1 | Relê | 5V HJR-3FF | R$ 5,00
10 | Jumpers | Macho x macho | R$ 0,70
10 | Jumpers | Femea x Macho | R$ 0,70
1 | Protoboard pequena | BB-01 400P Sem base tower | R$ 20,40
1 | Protoboard grande | --- | emprestado
1 | Arduino | UNO | emprestado
1 | Sensor ultrassônico | HCSR04 | emprestado
30 | Bombinha | Traque | R$ 8,00
Total | | | R$ 70,58

## Software
O código feito no Arduino está no mesmo diretório deste README.

## Circuito no Tinkercad
Foi feito um tinkercad como base para a construção do projeto, evitando possíveis erros e possibilitando a melhor escolha das peças a serem utilizadas.

![2ecf7d54-4295-4ccc-b0d2-57f0d4cef3d2](https://github.com/EduardaTNardin/SSC0180-Elet2-Claymore/assets/128496419/3941e710-4721-4f3f-9c19-8b13e108c2e7)
![7c6c8bf4-d96e-4448-8af4-e01c71cdeabd](https://github.com/EduardaTNardin/SSC0180-Elet2-Claymore/assets/128496419/56955d8d-f8fa-4363-8b86-394ea67f8c79)
Link do circuito no tinkercad [aqui](https://www.tinkercad.com/things/6d1lpRcROwe?sharecode=jFStIMAnefCAwi0d7LAkaeyAPSmBBmMxaPUtP1pa0Qs).

## Imagens e vídeo do projeto
Fotos no diretório desde README e o vídeo neste [link](https://drive.google.com/file/d/1XHqMKAQCILarO1bMSCMrcJj7W0vMRowP/view?usp=sharing).
