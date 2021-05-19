#define relay1 D6
#define relay2 D11
#define relay3 D2
#define relay4 D4
#define relay5 D8
#define relay6 D7


void setup() {
  // since we just have relay's here 
  // we make all them as output
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(relay5,OUTPUT);
  pinMode(relay6,OUTPUT);

  Serial.begin(115200);
}

void loop() {
  Serial.println("relay 1, LOW");
  Serial.println("relay 2, LOW");
  Serial.println("relay 3, LOW");
  Serial.println("relay 4, HIGH");
  Serial.println("relay 5, HIGH");
  Serial.println("relay 6, HIGH");
  Serial.println("----------------------------------------");
  digitalWrite(relay1,LOW);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  delay(2000);
  Serial.println("relay 1, HIGH");
  Serial.println("relay 2, HIGH");
  Serial.println("relay 3, HIGH");
  Serial.println("relay 4, LOW");
  Serial.println("relay 5, LOW");
  Serial.println("relay 6, LOW");
  Serial.println("----------------------------------------");
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,LOW);
  digitalWrite(relay5,LOW);
  digitalWrite(relay6,LOW);
  delay(2000);

}
