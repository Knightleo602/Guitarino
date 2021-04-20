void funcled() {
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], HIGH);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  for (int ledagrH = 0; ledagrH < qntpinH; ledagrH++) { //INICIO HORIZONTAL
    digitalWrite(matrizH[ledagrH], LOW);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(100);
  }

  for (int ledagrH = 0; ledagrH < 9; ledagrH++) {
    digitalWrite(matrizH[ledagrH], HIGH);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;;
    }
    delay(100);
  }

  for (int ledagrH = 9; ledagrH >= 0; ledagrH = ledagrH - 1) {
    digitalWrite(matrizH[ledagrH], LOW);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(100);
  }

  for (int ledagrH = 9; ledagrH >= 0; ledagrH = ledagrH - 1) {
    digitalWrite(matrizH[ledagrH], HIGH);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(100);
  }             //FINAL HORIZONTAL

  for (int ledagr = 0; ledagr < qntpinH; ledagr++) { //INICIO VERTICAL
    digitalWrite(matrizH[ledagr], LOW);
  }
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagrV = 0; ledagrV < qntpinV; ledagrV++) {
    digitalWrite(matrizV[ledagrV],  HIGH);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(150);
  }

  for (int ledagrV = 0; ledagrV < 4; ledagrV++) {
    digitalWrite(matrizV[ledagrV], LOW);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(150);
  }

  for (int ledagrV = 4; ledagrV >= 0; ledagrV = ledagrV - 1) {
    digitalWrite(matrizV[ledagrV], HIGH);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(150);
  }

  for (int ledagrV = 4; ledagrV >= 0; ledagrV = ledagrV - 1) {
    digitalWrite(matrizV[ledagrV], LOW);
    if (Serial.available() > 0) {
      for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
        digitalWrite(matrizV[ledagr2], HIGH);
      }
      for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
        digitalWrite(matrizH[ledagr], HIGH);
      }
      return;
    }
    delay(150);
  }    //FINAL VERTICAL
}
