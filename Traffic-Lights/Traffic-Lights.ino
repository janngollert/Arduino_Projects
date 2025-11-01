
#define RED 12
#define GREEN 10
#define YELLOW 11
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(10000);
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1500);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(10000);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1500);


}
