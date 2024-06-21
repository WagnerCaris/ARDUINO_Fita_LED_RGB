// Declarando os pinos
const int LED_R = 4;
const int LED_G = 2;
const int LED_B = 3;
int x = 0;
int button = 7;

void setup() {
  pinMode(LED_R, OUTPUT); 
  pinMode(LED_G, OUTPUT); 
  pinMode(LED_B, OUTPUT); 
  Serial.begin(9600);
  pinMode (button, INPUT_PULLUP);
  digitalWrite(LED_R, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_B, HIGH);
  }

void loop() {
  Serial.println(x);
  if (!digitalRead (button)) {
    delay(200);
    x++;
  }

  if (x == 1){

  digitalWrite(LED_R, LOW); 
  digitalWrite(LED_G, HIGH);  
  digitalWrite(LED_B, HIGH);  
  delay(200);
  }

  if (x == 2) {

  digitalWrite(LED_R, HIGH);  
  digitalWrite(LED_G, LOW); 
  digitalWrite(LED_B, HIGH);  
  delay(200);
  }


  if (x == 3) {

  digitalWrite(LED_R, HIGH);  
  digitalWrite(LED_G, HIGH);  
  digitalWrite(LED_B, LOW); 
  delay(100);
  }
  
  if (x == 4) {
  digitalWrite(LED_R, HIGH);
  delay(100);
  digitalWrite(LED_R, LOW);
  delay(100);
  digitalWrite(LED_G, HIGH);
  delay(100);
  digitalWrite(LED_G, LOW);
  delay(100);
  digitalWrite(LED_B, HIGH);
  delay(100);
  digitalWrite(LED_B, LOW);
  delay(100);
  }

  if (x == 5) {
  digitalWrite(LED_R, LOW);  
  digitalWrite(LED_G, LOW);  
  digitalWrite(LED_B, LOW); 
  }
  
  if (x > 5) {
    x=0;
  }
  
  
}
