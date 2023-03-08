const int motorA1 =  6;
const int motorA2  = 7;
const int motorB1 =  8;
const int motorB2 =  9;

void girarFrente() {
  digitalWrite( motorA1 , HIGH);
  digitalWrite( motorA2 , LOW);

  digitalWrite( motorB1 , HIGH);
  digitalWrite( motorB2 , LOW);
  }
  
void parar() {
  digitalWrite( motorA1 , LOW);
  digitalWrite( motorA2 , LOW);

  digitalWrite( motorB1 , LOW);
  digitalWrite( motorB2 , LOW);
  }

void girarTras() {
  digitalWrite( motorA1 , LOW);
  digitalWrite( motorA2 , HIGH);

  digitalWrite( motorB1 , LOW);
  digitalWrite( motorB2 , HIGH);
  }

void setup() {
  pinMode( motorA1 , OUTPUT);
  pinMode( motorA2 , OUTPUT);
  pinMode( motorB1 , OUTPUT);
  pinMode( motorB2 , OUTPUT);
}

void loop() {
  girarFrente();
}
