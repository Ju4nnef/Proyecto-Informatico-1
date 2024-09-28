#define BUZZER A0
#define length(vec,tipo) sizeof(vec)/sizeof(tipo)

int V[10];

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);

  for (int i = 0; i < length(V, int); i++) {
    V[i] = random(1, 11);
    Serial.print(V[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop() {
  for (int i = 0; i < length(V, int); i++) {
    if (V[i] == 5) {
      tone(BUZZER, 1500);
      delay(500);
      noTone(BUZZER);
    }
    delay(500);
  }
}
