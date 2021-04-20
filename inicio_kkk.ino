void inicio () {
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  Serial.println("Prepare-se!");
  delay(400);
  Serial.println("Aperte B durante a musica para terminar");
  delay(3000);
  Serial.println("3...");
  for (int tempo = 0; tempo < 200; tempo++) {
    digitalWrite(matrizH[9], LOW);
    digitalWrite(matrizV[1], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[3], HIGH);
    delay(1);
    digitalWrite(matrizH[8], LOW);
    digitalWrite(matrizV[2], LOW);
    digitalWrite(matrizV[1], LOW);
    delay(1);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizH[7], LOW);
    digitalWrite(matrizH[8], HIGH);
    delay(1);
    digitalWrite(matrizV[2], LOW);
    digitalWrite(matrizH[7], HIGH);
    digitalWrite(matrizH[6], LOW);
    delay(1);
    digitalWrite(matrizH[7], HIGH);
    digitalWrite(matrizH[6], HIGH);
    digitalWrite(matrizH[5], LOW);
    digitalWrite(matrizV[3], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[1], LOW);
    digitalWrite(matrizV[2], LOW);
    delay(1);
  }
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  Serial.println("2...");
  for (int tempo = 0; tempo < 200; tempo++) {
    digitalWrite(matrizH[5], HIGH);
    digitalWrite(matrizV[1], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[3], HIGH);
    digitalWrite(matrizH[9], LOW);
    delay(1);
    digitalWrite(matrizH[9], HIGH);
    digitalWrite(matrizH[8], LOW);
    digitalWrite(matrizV[1], LOW);
    digitalWrite(matrizV[2], LOW);
    digitalWrite(matrizV[3], HIGH);
    delay(1);
    digitalWrite(matrizH[8], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[1], LOW);
    digitalWrite(matrizV[3], LOW);
    digitalWrite(matrizH[7], LOW);
    delay(1);
    digitalWrite(matrizV[1], HIGH);
    digitalWrite(matrizV[2], LOW);
    digitalWrite(matrizV[3], LOW);
    digitalWrite(matrizH[6], LOW);
    digitalWrite(matrizH[7], HIGH);
    delay(1);
    digitalWrite(matrizH[6], HIGH);
    digitalWrite(matrizH[5], LOW);
    digitalWrite(matrizV[1], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[3], HIGH);
    delay(1);
  }
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  Serial.println("1...");
  for (int tempo = 0; tempo < 200; tempo++) {
    digitalWrite(matrizV[3], LOW);
    digitalWrite(matrizH[6], HIGH);
    digitalWrite(matrizV[2], LOW);
    digitalWrite(matrizH[8], LOW);
    digitalWrite(matrizV[1], HIGH);
    delay(1);
    digitalWrite(matrizH[8], HIGH);
    digitalWrite(matrizV[1], LOW);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizH[9], LOW);
    delay(1);
    digitalWrite(matrizH[9], HIGH);
    digitalWrite(matrizH[8], LOW);
    delay(1);
    digitalWrite(matrizH[8], HIGH);
    digitalWrite(matrizH[7], LOW);
    delay(1);
    digitalWrite(matrizH[7], HIGH);
    digitalWrite(matrizH[6], LOW);
    digitalWrite(matrizV[1], HIGH);
    digitalWrite(matrizV[2], HIGH);
    digitalWrite(matrizV[3], HIGH);
    delay(1);
  }
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  Serial.println("Vai!");
  delay(500);
}
