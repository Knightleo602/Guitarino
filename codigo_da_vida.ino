void vidas() {
  analogWrite(R, 0);
  analogWrite(G, 255);
  analogWrite(B, 0);
  if (vida == 9) {
    analogWrite(R, 30);
  }
  if (vida == 8) {
    analogWrite(R, 75);
  }
  if (vida == 7) {
    analogWrite(R, 150);
  }
  if (vida == 6) {
    analogWrite(R, 200);
  }
  if (vida == 5) {
    analogWrite(R, 255);
  }
  if (vida == 4) {
    analogWrite(G, 200);
  }
  if (vida == 3) {
    analogWrite(G, 130);
  }
  if (vida == 2) {
    analogWrite(G, 50);
  }
  if (vida == 1) {
    analogWrite(G, 0);
  }
  if (vida == 0) {
    noTone(3);
    delay(500);
    for (int loopV; loopV <= qntpinV; loopV++) {
      digitalWrite(matrizV[loopV], HIGH);
    }
    for (int loop; loop < qntpinH; loop++) {
      digitalWrite(matrizH[loop], LOW);
      delay(400);
    }
    Serial.println("Voce perdeu!");
    Serial.println("");
    delay(300);
    Serial.print("Sua pontuacao: ");
    Serial.println(score);
    delay(3000);
    Serial.println("");
    resetFunc();
  }
}
