const int button1 = A5;
const int button2 = A4;

const int led1 = 2;
const int led2 = 4;

const int buzzer = 3;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  pinMode(buzzer, OUTPUT);

  randomSeed(analogRead(A0));
}

void loop() {

  // 1. Reset LEDs
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  delay(1000);

  // 2. Countdown
  for (int i = 0; i < 3; i++) {
    tone(buzzer, 1000, 150);
    delay(1000);
  }

  // 3. Random delay
  delay(random(2000, 6000));

  // 4. Reaction signal
  tone(buzzer, 2000, 300);

  unsigned long startTime = millis();

  // 5. Wait for a button
  while (true) {

    if (digitalRead(button1) == HIGH) {
      unsigned long reactionTime = millis() - startTime;

      digitalWrite(led1, HIGH);

      tone(buzzer, 1000, 200);

      Serial.begin(9600);
      Serial.print("Player 1 wins! Reaction time: ");
      Serial.println(reactionTime);

      delay(5000);
      break;
    }

    if (digitalRead(button2) == HIGH) {
      unsigned long reactionTime = millis() - startTime;

      digitalWrite(led2, HIGH);

      tone(buzzer, 1500, 200);

      Serial.begin(9600);
      Serial.print("Player 2 wins! Reaction time: ");
      Serial.println(reactionTime);

      delay(5000);
      break;
    }
  }
}