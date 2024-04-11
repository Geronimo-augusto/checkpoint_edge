// Definição dos pinos conectados aos componentes e as variáveis
int intensidade;
int pinLDR = A0;  // Pino analógico conectado ao sensor LDR
int pinVER = 13;  // Pino digital conectado ao LED verde
int pinAM = 12;   // Pino digital conectado ao LED amarelo
int pinVED = 11;  // Pino digital conectado ao LED vermelho
int pinBUZ = 7;   // Pino digital conectado ao buzzer

// Configuração inicial do Arduino
void setup() {
  // Inicia a comunicação serial com uma taxa de 9600 bauds
  Serial.begin(9600);
  
  // Define os pinos como saídas ou entradas conforme necessário
  pinMode(pinVER, OUTPUT);
  pinMode(pinAM, OUTPUT);
  pinMode(pinVED, OUTPUT);
  pinMode(pinBUZ, OUTPUT);
  pinMode(pinLDR, INPUT);
}

// Loop principal do programa
void loop() {
  // Lê o valor analógico do sensor LDR e armazena na variável "valorLDR"
  int valorLDR = analogRead(pinLDR);
  
  // Mapeia o valor lido do sensor LDR para um intervalo de 0 a 100 para representar a intensidade da luz
  intensidade = map(valorLDR, 182, 969, 0, 100);
  
  // Imprime o valor do sensor LDR e a intensidade da luz no monitor serial
  Serial.println(valorLDR);
  Serial.print(intensidade); Serial.println("%");                 
  
  // Aguarda 550 milissegundos antes de continuar a execução do código
  delay(550);
  
  // Verifica o valor lido pelo sensor LDR e controla os dispositivos conectados aos pinos de saída
  if (valorLDR >= 900) {
    // Se a luz for muito forte (valorLDR maior ou igual a 900)
    digitalWrite(pinVER, LOW);   // Liga o LED verde
    digitalWrite(pinAM, HIGH);   // Desliga o LED amarelo
    digitalWrite(pinVED, HIGH);  // Desliga o LED vermelho
    tone(pinBUZ, 1000);  // Ativa o buzzer com frequência de 1000 Hz
    delay(3000); // Aguarda 3 segundos
    noTone(pinBUZ);  // Desliga o buzzer
  } else if (valorLDR <= 899 && valorLDR >= 700) {
    // Se a luz for moderadamente forte (valorLDR entre 700 e 899)
    digitalWrite(pinVER, HIGH);  // Desliga o LED verde
    digitalWrite(pinVED, HIGH);  // Desliga o LED vermelho
    digitalWrite(pinAM, LOW);    // Liga o LED amarelo
    digitalWrite(pinBUZ, HIGH);  // Liga o buzzer
  } else if (valorLDR <= 500 && valorLDR >= 401) {
    // Se a luz for moderadamente fraca (valorLDR entre 401 e 500)
    digitalWrite(pinAM, LOW);    // Liga o LED amarelo
    digitalWrite(pinVED, HIGH);  // Desliga o LED vermelho
    digitalWrite(pinVER, HIGH);  // Desliga o LED verde
    digitalWrite(pinBUZ, HIGH);  // Liga o buzzer
  } else if (valorLDR <= 400) {
    // Se a luz for muito fraca (valorLDR menor ou igual a 400)
    digitalWrite(pinVER, LOW);   // Liga o LED verde
    digitalWrite(pinAM, HIGH);   // Desliga o LED amarelo
    digitalWrite(pinVED, HIGH);  // Desliga o LED vermelho
    tone(pinBUZ, 1000);  // Ativa o buzzer com frequência de 1000 Hz
    delay(3000);                 // Aguarda 3 segundos
    noTone(pinBUZ);  // Desliga o buzzer
  } else {
    // Se nenhuma das condições acima for atendida
    digitalWrite(pinVER, HIGH);  // Desliga o LED verde
    digitalWrite(pinAM, HIGH);   // Desliga o LED amarelo
    digitalWrite(pinVED, LOW);   // Liga o LED vermelho
    digitalWrite(pinBUZ, HIGH);  // Liga o buzzer 
  }
}
