void funcall () {
  tone(3, 370, 600); //300 vai passar 2 led nessa musica e 150 vai passar 1
  chuva2col(4, 3, 9, 5, 600);

  tone(3, 554, 300);
  chuva2col(4, 3, 5, 3, 300);

  tone(3, 466, 300);
  chuva2col(4, 3, 3, 1, 300);

  tone(3, 466, 600);
  chuva2col(4, 3, 1, 0, 150);
  delay(450);

  tone(3, 415, 300);
  chuva(0, 9, 7, 300);
  Serial.print("Score: ");
  Serial.println(score);

  tone(3, 370, 300);
  chuva(0, 7, 5, 300);

  tone(3, 370, 300);
  chuva(0, 5, 3, 300);

  tone(3, 494, 600); //B
  chuva(0, 3, 0, 450);
  delay(150);

  tone(3, 466, 300);
  delay(300);

  tone(3, 466, 300);
  delay(300);

  tone(3, 415, 300);
  chuva2col(0, 1, 9, 7, 300);

  tone(3, 415, 300);
  chuva2col(0, 1, 7, 5, 300);

  tone(3, 370, 600);
  chuva2col(0, 1, 5, 1, 600);

  tone(3, 370, 300);
  chuva2col(0, 1, 1, 0, 150);
  delay(150);

  tone(3, 554, 300);
  chuva2col(1, 2, 9, 7, 300);

  tone(3, 466, 300);
  chuva2col(1, 2, 7, 5, 300);

  tone(3, 466, 600);
  chuva2col(1, 2, 5, 1, 600);

  tone(3, 415, 300);
  chuva2col(1, 2, 1, 0, 150);
  delay(150);

  tone(3, 370, 300);
  chuva2col(3, 4, 9, 7, 300);

  tone(3, 370, 300);
  chuva2col(3, 4, 7, 5, 300);

  tone(3, 311, 600);
  chuva2col(3, 4, 5, 1, 600);

  tone(3, 277, 900);
  chuva2col(3, 4, 1, 0, 150);
  delay(1350);

  tone(3, 370, 300);
  chuva(2, 9, 7, 300);

  tone(3, 370, 300);
  chuva(2, 7, 5, 300);

  tone(3, 554, 300);
  chuva(2, 5, 3, 300);

  //At this point I made custom presets

  tone(3, 466, 300); //A#4
  chuva(2, 3, 1, 300);

  tone(3, 466, 300); //A#4
  chuva(2, 1, 0, 150);
  delay(150);

  tone(3, 415, 300); //G#4
  chuva2col(2, 3, 9, 7, 300);
  Serial.print("Score: ");
  Serial.println(score);

  tone(3, 415, 300); //G#4
  chuva2col(2, 3, 7, 5, 300);

  tone(3, 369, 300); //F#4
  chuva2col(2, 3, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva2col(2, 3, 3, 1, 300);

  tone(3, 494, 600); //B4
  chuva2col(2, 3, 1, 0, 150);
  delay(450);

  tone(3, 466, 300); //A#4
  chuva2col(0, 1, 9, 7, 300);

  tone(3, 466, 300); //A#4
  chuva2col(0, 1, 7, 5, 300);

  tone(3, 415, 300); //G#4
  chuva2col(0, 1, 5, 3, 300);

  tone(3, 415, 300); //G#4
  chuva2col(0, 1, 3, 1, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 1, 1, 0, 150);
  delay(150);

  tone(3, 369, 300); //F#4
  chuva(4, 9, 7, 300);

  tone(3, 554, 600); //C#5
  chuva(4, 7, 3, 600);

  tone(3, 466, 300); //A#4
  chuva(4, 3, 1, 300);

  tone(3, 466, 300); //A#4
  chuva(4, 1, 0, 150);
  delay(150);

  tone(3, 415, 600); //G#4
  chuva(3, 9, 5, 600);

  tone(3, 369, 300); //F#4
  chuva(3, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva(3, 3, 1, 300);

  tone(3, 415, 600); //G#4
  chuva(3, 1, 0, 150);
  delay(450);

  tone(3, 311, 900); //D#4
  chuva(1, 9, 0, 1350);
  delay(150);

  tone(3, 369, 450); //F#4
  chuva(0, 9, 6, 450);

  tone(3, 311, 150); //D#4
  chuva(0, 6, 5, 150);

  tone(3, 369, 300); //F#4
  chuva(0, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva(0, 3, 1, 300);

  tone(3, 369, 150); //F#4
  chuva(0, 1, 0, 150);

  tone(3, 369, 150); //F#4
  chuva2col(1, 3, 9, 8, 150);

  tone(3, 311, 150); //D#4
  chuva2col(1, 3, 8, 7, 150);

  tone(3, 277, 150); //C#4
  chuva2col(1, 3, 7, 6, 150);

  tone(3, 369, 300); //F#4
  chuva2col(1, 3, 6, 4, 300);

  tone(3, 369, 300); //F#4
  chuva2col(1, 3, 4, 2, 300);

  tone(3, 369, 150); //F#4
  chuva2col(1, 3, 2, 1, 150);

  tone(3, 369, 150); //F#4
  chuva2col(1, 3, 1, 0, 150);
  delay(300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 4, 9, 7, 300);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 7, 6, 150);
  Serial.print("Score: ");
  Serial.println(score);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 6, 5, 150);

  tone(3, 369, 300); //F#4
  chuva2col(0, 4, 5, 3, 300);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 3, 2, 150);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 2, 1, 150);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 1, 0, 150);

  tone(3, 369, 150); //F#4
  chuva(4, 9, 8, 150);

  tone(3, 369, 300); //F#4
  chuva(4, 8, 6, 300);

  tone(3, 466, 150); //A#4
  chuva(4, 6, 5, 150);

  tone(3, 369, 450); //F#4
  chuva(4, 5, 2, 450);

  tone(3, 466, 150); //A#4
  chuva(4, 2, 1, 150);

  tone(3, 466, 150); //A#4
  chuva(4, 1, 0, 150);

  tone(3, 554, 300); //C#5
  chuva2col(0, 1, 9, 7, 300);

  tone(3, 494, 300); //B4
  chuva2col(0, 1, 7, 5, 300);

  tone(3, 466, 150); //A#4
  chuva2col(0, 1, 5, 4, 150);

  tone(3, 369, 150); //F#4
  chuva2col(0, 1, 4, 3, 150);

  tone(3, 415, 300); //G#4
  chuva2col(0, 1, 3, 1, 300);

  tone(3, 415, 300); //G#4
  chuva2col(0, 1, 1, 0, 150);
  delay(150);

  tone(3, 415, 450); //G#4
  chuva2col(0, 2, 9, 6, 450);

  tone(3, 415, 150); //G#4
  chuva2col(0, 2, 6, 5, 150);

  tone(3, 466, 300); //A#4
  chuva2col(0, 2, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 2, 3, 1, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 2, 1, 0, 150);
  delay(150);

  tone(3, 311, 150); //D#4
  chuva2col(0, 3, 9, 8, 150);

  tone(3, 277, 150); //C#4
  chuva2col(0, 3, 8, 7, 150);

  tone(3, 369, 300); //F#4
  chuva2col(0, 3, 7, 5, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 3, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 3, 3, 0, 450);
  delay(150);

  tone(3, 466, 150); //A#4
  chuva2col(0, 4, 9, 8, 150);

  tone(3, 554, 300); //C#5
  chuva2col(0, 4, 8, 6, 300);

  tone(3, 466, 150); //A#4
  chuva2col(0, 4, 6, 5, 150);

  tone(3, 622, 300); //D#5
  chuva2col(0, 4, 5, 3, 300);

  tone(3, 466, 150); //A#4
  chuva2col(0, 4, 3, 2, 150);

  tone(3, 554, 300); //C#5
  chuva2col(0, 4, 2, 0, 300);
  Serial.print("Score: ");
  Serial.println(score);

  tone(3, 466, 150); //A#4
  chuva2col(2, 3, 9, 8, 150);

  tone(3, 622, 300); //D#5
  chuva2col(2, 3, 8, 6, 300);

  tone(3, 466, 150); //A#4
  chuva2col(2, 3, 6, 5, 150);

  tone(3, 554, 300); //C#5
  chuva2col(2, 3, 5, 3, 300);

  tone(3, 494, 300); //B4
  chuva2col(2, 3, 3, 1, 300);

  tone(3, 466, 300); //A#4
  chuva2col(2, 3, 1, 0, 150);
  delay(150);

  tone(3, 415, 300); //G#4
  chuva2col(0, 4, 9, 7, 300);

  tone(3, 369, 300); //F#4
  chuva2col(0, 4, 7, 5, 300);

  tone(3, 369, 150); //F#4
  chuva2col(0, 4, 5, 4, 150);

  tone(3, 415, 300); //G#4
  chuva2col(0, 4, 4, 2, 300);

  tone(3, 369, 600); //F#4
  chuva2col(0, 4, 2, 0, 300);
  delay(450);

  tone(3, 369, 150); //F#4
  chuva(2, 9, 8, 150);

  tone(3, 369, 150); //F#4
  chuva(2, 8, 7, 150);

  tone(3, 369, 150); //F#4
  chuva(2, 7, 6, 150);

  tone(3, 369, 300); //F#4
  chuva(2, 6, 4, 300);

  tone(3, 369, 150); //F#4
  chuva(2, 4, 3, 150);

  tone(3, 369, 150); //F#4
  chuva(2, 3, 2, 150);

  tone(3, 369, 300); //F#4
  chuva(2, 2, 0, 300);

  tone(3, 369, 600); //F#4
  chuva2col(1, 2, 9, 3, 900);

  tone(3, 369, 150); //F#4
  chuva2col(1, 2, 3, 2, 150);

  tone(3, 369, 150); //F#4
  chuva2col(1, 2, 2, 1, 150);

  tone(3, 466, 150); //A#4
  chuva2col(1, 2, 1, 0, 150);

  tone(3, 369, 150); //F#4
  chuva2col(2, 3, 9, 8, 150);

  tone(3, 369, 300); //F#4
  chuva2col(2, 3, 8, 6, 300);

  tone(3, 369, 150); //F#4
  chuva2col(2, 3, 6, 5, 150);

  tone(3, 311, 150); //D#4
  chuva2col(2, 3, 5, 4, 150);

  tone(3, 311, 300); //D#4
  chuva2col(2, 3, 4, 2, 300);

  tone(3, 311, 600); //D#4
  chuva2col(2, 3, 2, 0, 300);
  delay(900);

  //chorus

  tone(3, 466, 300); //A#4
  chuva(4, 9, 7, 300);

  tone(3, 369, 600); //F#4
  chuva(4, 7, 3, 600);

  tone(3, 369, 150); //F#4
  chuva(4, 3, 2, 150);
  Serial.print("Score: ");
  Serial.println(score);

  tone(3, 311, 150); //D#4
  chuva(4, 2, 1, 150);

  tone(3, 369, 300); //F#4
  chuva(4, 1, 0, 150);
  delay(150);

  tone(3, 369, 600); //F#4
  chuva(3, 9, 5, 600);

  tone(3, 369, 150); //F#4
  chuva(3, 5, 4, 150);

  tone(3, 311, 150); //D#4
  chuva(3, 4, 3, 150);

  tone(3, 369, 300); //F#4
  chuva(3, 3, 1, 300);

  tone(3, 369, 600); //F#4
  chuva(3, 1, 0, 150);
  delay(600);

  tone(3, 369, 600); //F#4
  chuva2col(0, 2, 9, 5, 600);

  tone(3, 466, 900); //A#4
  chuva2col(0, 2, 5, 0, 750);
  delay(150);

  tone(3, 466, 300); //A#4
  chuva2col(2, 4, 9, 7, 300);

  tone(3, 369, 600); //F#4
  chuva2col(2, 4, 7, 3, 600);

  tone(3, 369, 150); //F#4
  chuva2col(2, 4, 3, 2, 150);

  tone(3, 311, 150); //D#4
  chuva2col(2, 4, 2, 1, 150);

  tone(3, 369, 300); //F#4
  chuva2col(2, 4, 1, 0, 150);
  delay(150);

  tone(3, 369, 600); //F#4
  chuva(3, 9, 5, 600);

  tone(3, 369, 150); //F#4
  chuva(3, 5, 4, 150);

  tone(3, 311, 150); //D#4
  chuva(3, 4, 3, 150);

  tone(3, 369, 300); //F#4
  chuva(3, 3, 1, 300);

  tone(3, 369, 600); //F#4
  chuva(3, 1, 0, 150);
  delay(450);

  tone(3, 369, 600); //F#4
  chuva2col(0, 3, 9, 5, 600);

  tone(3, 466, 600); //A#4
  chuva2col(0, 3, 5, 1, 600);

  tone(3, 369, 300); //F#4
  chuva2col(0, 3, 1, 0, 150);
  delay(150);

  tone(3, 466, 600); //A#4
  chuva2col(1, 2, 9, 5, 600);

  tone(3, 554, 600); //C#5
  chuva2col(1, 2, 5, 1, 600);

  tone(3, 494, 300); //B4
  chuva2col(1, 2, 1, 0, 150);
  delay(150);

  tone(3, 554, 300); //C#5
  chuva(3, 9, 7, 300);

  tone(3, 622, 300); //D#5
  chuva(3, 7, 5, 300);

  tone(3, 740, 600); //F#5
  chuva(3, 5, 1, 600);
  Serial.println(score);

  tone(3, 831, 300); //G#5
  chuva(3, 1, 0, 150);
  delay(150);

  tone(3, 740, 600); //F#5
  chuva(2, 9, 5, 600);

  tone(3, 369, 300); //F#4
  chuva(2, 5, 3, 300);

  tone(3, 369, 300); //F#4
  chuva(2, 3, 1, 300);

  tone(3, 415, 300); //G#4
  chuva(2, 1, 0, 150);
  delay(150);

  tone(3, 369, 300); //F#4
  chuva2col(0, 4, 9, 7, 300);

  tone(3, 466, 300); //A#4
  chuva2col(0, 4, 7, 5, 300);

  tone(3, 415, 600); //G#4
  chuva2col(0, 4, 5, 1, 600);

  tone(3, 415, 600); //G#4
  chuva2col(0, 4, 1, 0, 150);
  delay(450);

  tone(3, 369, 600); //F#4
  chuva2col(1, 3, 9, 5, 600);

  tone(3, 415, 600); //G#4
  chuva2col(1, 3, 5, 1, 600);

  tone(3, 311, 1800); //D#4
  chuva2col(1, 3, 1, 0, 150);
  delay(1650);
  verifdmus = 3;
  highscoreread();
  finalstats();
}

void chuva2col(int col, int col2, int ini, int fim, int temp) { //eu criei um novo so pq to com preguica de muda os outro chuva q ja ta sabe
  for (int loop = ini; loop >= fim; loop--) {
    digitalWrite(matrizV[col], HIGH);
    digitalWrite(matrizV[col2], HIGH);
    digitalWrite(matrizH[loop], LOW);

    if (digitalRead(botoes[0]) == HIGH || digitalRead(botoes[1]) == HIGH || digitalRead(botoes[2]) == HIGH || digitalRead(botoes[3]) == HIGH || digitalRead(botoes[4] == HIGH)) {
      contadordclicks++;
    }

    if (loop != ini) {
      digitalWrite(matrizH[loop + 1], HIGH);
    } //desligar o de tras tone 1

    if (loop == 3 || loop == 4) {
      if (digitalRead(botoes[col]) == HIGH && digitalRead(botoes[col2])) {
      // //valveanticheat = 1;
      } else {
        valveanticheat = 0;
      }
    }
    if (loop == 1) {
      if (digitalRead(botoes[col]) == HIGH && digitalRead(botoes[col2]) == HIGH && valveanticheat == 0) {
        //if (verif == 0) {
        contadornotasparaACERTARkkk++;
        chain++;
        scores();
        simounao = 1;
        //}
      }
    }
    if (loop == 0) {
      contadornotasparaapertarkkk++;
      if (simounao == 0) {
        if (digitalRead(botoes[col]) == HIGH && digitalRead(botoes[col2]) == HIGH && valveanticheat == 0) {
          contadornotasparaACERTARkkk++;
          chain++;
          scores();
        } else {
          vida = vida - 1;
          chain = 0;
        }
      }
    }
    if (loop == 9) {
      simounao = 0;
    }
    escolha4 = Serial.read();
    if (escolha4 == 98) {
      Serial.println("");
      Serial.print("Voce cancelou a musica, voltando para o home...");
      noTone(3);
      delay(1000);
      resetFunc();
    }
    vidas();
    int c = temp / (ini - fim + 1);
    delay(c);
  }
  digitalWrite(matrizV[col], LOW);
  digitalWrite(matrizV[col2], LOW);
  digitalWrite(matrizH[0], HIGH);
}
