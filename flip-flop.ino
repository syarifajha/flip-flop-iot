#define LED1 D1
#define LED2 D2
#define LED3 D3
#define LED4 D4
#define LED5 D5
#define LED6 D6

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void loop() {
  // Define two input conditions
  bool A = true;
  bool B = false;

  // Compute logic gate outputs
  bool AND_result = A && B;
  bool OR_result = A || B;
  bool XOR_result = A ^ B;

  // Nyalakan LED1 jika AND_result true, matikan lainnya
  if (AND_result) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
  delay(1000);
  
  // Nyalakan LED2 jika OR_result true, matikan lainnya
  if (OR_result) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
  delay(1000);
  
  // Nyalakan LED3 jika XOR_result true, matikan lainnya
  if (XOR_result) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
  delay(1000);
  
  // Nyalakan LED4 jika AND_result true, matikan lainnya
  if (AND_result) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
  }
  delay(1000);
  
  // Nyalakan LED5 jika OR_result true, matikan lainnya
  if (OR_result) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, LOW);
  }
  delay(1000);
  
  // Nyalakan LED6 jika XOR_result true, matikan lainnya
  if (XOR_result) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH);
  }
  delay(1000);
}
