void highscoreread() {
  if (verifdmus == 1) { //caso for fortnite
    if (score > EEPROM[0]) {
      EEPROM[2] = EEPROM[1];
      EEPROM[1] = EEPROM[0];
      EEPROM[0] = score;
      veriffoda = 1;
      caraca = 1;
    }
    if (veriffoda != 1) {
      if (score > EEPROM[1]) {
        EEPROM[2] = EEPROM[1];
        EEPROM[1] = score;
        veriffoda = 1;
        caraca = 2;
      }
      if (veriffoda != 1) {
        if (score > EEPROM[2]) {
          EEPROM[2] = score;
          caraca = 3;
        }
      }
    }
  }

  if (verifdmus == 2) { // caso for tetris
    if (score > EEPROM[3]) {
      EEPROM[5] = EEPROM[4];
      EEPROM[4] = EEPROM[3];
      EEPROM[3] = score;
      veriffoda = 1;
      caraca = 1;
    }
    if (veriffoda != 1) {
      if (score > EEPROM[4]) {
        EEPROM[5] = EEPROM[4];
        EEPROM[4] = score;
        veriffoda = 1;
        caraca = 2;
      }
      if (veriffoda != 1) {
        if (score > EEPROM[5]) {
          EEPROM[5] = score;
          caraca = 3;
        }
      }
    }
  }

  if (verifdmus == 3) { //caso for all star
    if (score > EEPROM[6]) {
      EEPROM[8] = EEPROM[7];
      EEPROM[7] = EEPROM[6];
      EEPROM[6] = score;
      veriffoda = 1;
      caraca = 1;
    }
    if (veriffoda != 1) {
      if (score > EEPROM[7]) {
        EEPROM[8] = EEPROM[7];
        EEPROM[7] = score;
        veriffoda = 1;
        caraca = 2;
      }
      if (veriffoda != 1) {
        if (score > EEPROM[8]) {
          EEPROM[8] = score;
          caraca = 3;
        }
      }
    }
  }

  if (verifdmus == 4) { // caso for megalovania
    if (score > EEPROM[9]) {
      EEPROM[11] = EEPROM[10];
      EEPROM[10] = EEPROM[9];
      EEPROM[9] = score;
      veriffoda = 1;
      caraca = 1;
    }
    if (veriffoda != 1) {
      if (score > EEPROM[10]) {
        EEPROM[11] = EEPROM[10];
        EEPROM[10] = score;
        veriffoda = 1;
        caraca = 2;
      }
      if (veriffoda != 1) {
        if (score > EEPROM[11]) {
          EEPROM[11] = score;
          caraca = 3;
        }
      }
    }
  }
  veriffoda = 0;
}
void highscoretabela() {
  Serial.println("Escolha uma musica para saber a highscore dela:");
  delay(250);
  Serial.println("");
  Serial.println("1 - Default Dance Fortnite");
  Serial.println("2 - Super Tetris Theme");
  Serial.println("3 - All Star");
  Serial.println("4 - Megalovania");
  Serial.println("H - Home");
  Serial.println("________________________________________________________");
  for (int loopkkk; loopkkk == 0;) {

    escolha2 = Serial.read();
    if (escolha2 == 49) {
      Serial.print("1 - ");
      Serial.println(EEPROM[0]);
      Serial.print("2 - ");
      Serial.println(EEPROM[1]);
      Serial.print("3 - ");
      Serial.println(EEPROM[2]);
      Serial.println("________________________________________________________");
      Serial.println("B - Retornar");
      Serial.println("H - Home");
      Serial.println("________________________________________________________");
    }
    if (escolha2 == 50) {
      Serial.print("1 - ");
      Serial.println(EEPROM[3]);
      Serial.print("2 - ");
      Serial.println(EEPROM[4]);
      Serial.print("3 - ");
      Serial.println(EEPROM[5]);
      Serial.println("________________________________________________________");
      Serial.println("B - Retornar");
      Serial.println("H - Home");
      Serial.println("________________________________________________________");
    }
    if (escolha2 == 51) {
      Serial.print("1 - ");
      Serial.println(EEPROM[6]);
      Serial.print("2 - ");
      Serial.println(EEPROM[7]);
      Serial.print("3 - ");
      Serial.println(EEPROM[8]);
      Serial.println("________________________________________________________");
      Serial.println("B - Retornar");
      Serial.println("H - Home");
      Serial.println("________________________________________________________");
    }
    if (escolha2 == 52) {
      Serial.print("1 - ");
      Serial.println(EEPROM[9]);
      Serial.print("2 - ");
      Serial.println(EEPROM[10]);
      Serial.print("3 - ");
      Serial.println(EEPROM[11]);
      Serial.println("________________________________________________________");
      Serial.println("B - Retornar");
      Serial.println("H - Home");
      Serial.println("________________________________________________________");
    }
    if (escolha2 == 98) {
      highscoretabela();
    }
    if (escolha2 == 104) {
      escolha2 = 0;
      delay(100);
      resetFunc();
    }
  }
}

void finalstats() {
  delay(400);
  Serial.println("");
  Serial.print("__________________________");
  Serial.print("Parabens");
  Serial.println("__________________________");
  Serial.println("");
  delay(500);
  if (caraca == 1) {
    Serial.println("Incrivel! Voce e o Guitarino Master!");
  }
  if (caraca == 2) {
    Serial.println("Wow! Voce chegou em segundo lugar!");
  }
  if (caraca == 3) {
    Serial.println("Otimo! Voce esta no top 3!");
  }
  delay(500);
  Serial.print("Sua pontuacao final: ");
  Serial.println(score);
  delay(3000);
  Serial.println("__________________________");
  Serial.println("Selecione uma opcao:");
  Serial.println("");
  Serial.println("E - estatisticas Extras");
  Serial.println("H - voltar para o Home");
  Serial.println("");
  for (int ocaraqterminaescolhene = 1; ocaraqterminaescolhene > 0;) {
    escolha3 = Serial.read();

    if (escolha3 == 104) {
      score = 0;
      return;
    }
    if (escolha3 == 101) {
      porcentagem = 100 * (contadornotasparaACERTARkkk / contadornotasparaapertarkkk);
      Serial.print("Porcentagem de acertos: ");
      Serial.print(porcentagem);
      Serial.println("%");
      if (caraca2 == 1) {
        chainmaxzica = 24 + contadorchainamais;
      }
      if (caraca2 == 2) {
        chainmaxzica = 16 + contadorchainamais;
      }
      if (caraca2 == 3) {
        chainmaxzica = 8 + contadorchainamais;
      }
      if (caraca2 == 4) {
        chainmaxzica = 0 + contadorchainamais;
      }
      Serial.print("Maximo de acertos seguidos: ");
      Serial.println(chainmaxzica);
      Serial.print("Vidas sobrando: ");
      Serial.println(vida);
                   Serial.println("");
                   Serial.println("E - estatisticas Extras");
                   Serial.println("H - voltar para o Home");
                   Serial.println("");
                 }
                 }

                 }
