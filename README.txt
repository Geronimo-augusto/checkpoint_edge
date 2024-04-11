- O projeto consiste num detector de luminosidade com arduino, feito pro uso na vinheria Agnello
- Ele indica com leds e com som o nível de luz do ambiênte
- O led verde indica um nivel de luz aceitável
- O led amarelo indica que a luminosidade está quase alta demais
- O led vermelho e o buzzer (aviso sonoro) indicam que o nível de luz está alto demais

# Componentes
- 1 Sensor LDR
- 3 LEDs (verde, amarelo e vermelho)
- 1 Buzzer
- Arduino Uno (ou similar)

# Pinos
- Pino analógico A0: Conectado ao sensor LDR
- Pinos digitais:
  - 13: LED verde
  - 12: LED amarelo
  - 11: LED vermelho
  - 7: Buzzer

# Inicialização
- Conecte os pinos conforme descritos acima
- Carregue o código para o arduíno
- Execute o código e observe o comportamento dos LEDs e do buzzer de acordo com a intensidade de luz detectada pelo sensor LDR.

## Observações

- Certifique-se de ajustar os valores de mapeamento (map) de acordo com as características do seu sensor LDR e ambiente de uso.
- Este projeto pode ser expandido para incluir mais funcionalidades, como a comunicação com um aplicativo móvel ou web para monitoramento remoto.

