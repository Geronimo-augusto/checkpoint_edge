# Controle de Qualidade de Vinhos na Vinheria Agnello
Este projeto visa auxiliar a Vinheria Agnello a garantir um melhor controle de qualidade de seus vinhos, permitindo um monitoramento mais eficaz da luminosidade em suas adegas.

## Descrição do Projeto
O projeto consiste em um sistema embarcado que utiliza um Arduino para monitorar os níveis de luz em uma adega. Com base nos níveis de luz detectados, o sistema aciona LEDs indicativos e um buzzer para alertar sobre condições de luminosidade inadequadas.

## Dependências
- Arduino IDE: Para compilar e carregar o código para o Arduino.
- Arduino Uno (ou similar): O hardware para executar o código.
- Componentes eletrônicos:
 - LEDs (vermelho, amarelo, verde)
 - Buzzer
 - Sensor de Luz Dependente (LDR)
 - Resistores (se necessário)

## Como Reproduzir
1- Monte o circuito conforme o esquemático abaixo:

 - Conecte os LEDs aos pinos 13, 12 e 11 do Arduino para vermelho, amarelo e verde, respectivamente.
 - Conecte o buzzer ao pino 7 do Arduino.
 - Conecte o sensor de luz dependente (LDR) ao pino analógico A0 do Arduino.
 - Se necessário, utilize resistores para limitar a corrente nos LEDs e no buzzer.
2- Abra o arquivo do código fonte (vinheria_control_qualidade_vinhos.ino) na Arduino IDE.

3- Verifique se as definições dos pinos estão corretas de acordo com o seu circuito.

4- Compile o código e faça o upload para o Arduino.

5- Após o upload, o Arduino começará a monitorar os níveis de luz na adega. Os LEDs e o buzzer serão acionados conforme necessário para indicar condições de luminosidade aceitáveis, de advertência ou perigosas.

6- Monitore o comportamento do sistema e ajuste os limiares de luz conforme necessário para as condições específicas da adega da Vinheria Agnello.

## Contribuições e Melhorias
 - O código pode ser expandido para incluir mais funcionalidades, como registro de dados, comunicação com um aplicativo ou sistema de controle centralizado.
 - As definições dos limiares de luz podem ser ajustadas para se adequarem melhor às condições específicas da adega.
 - Melhorias no hardware, como a adição de mais sensores, podem ser consideradas para um monitoramento mais abrangente.
 - Observações
 - Certifique-se de ajustar os valores de mapeamento (map) de acordo com as características do seu sensor LDR e ambiente de uso.

## Um projeto da NextFuture para a Vinheria Agnello
- Autor: Grupo NextFuture
- Integrantes{ Geronimo Augusto-557170, Mateus Lene-557803, Ana Laura-554375, Vitor Augusto-555469}
