void configuracao() {
  Serial.println("");
  Serial.println("________________________________________________________");
  Serial.println("Selecione uma opcao: ");
  Serial.println("C - Configuracao de volume");
  Serial.println("R - Resetar highscores");
  Serial.println("T - Teste dos botoes");
  Serial.println("H - Home");
  for (int escolheporra = 1; escolheporra > 0;) {
    escolha5 = Serial.read();

    if (escolha5 == 104) {
      escolha5 = 0;
      delay(100);
      resetFunc();
    }

    if (escolha5 == 99) {
      Serial.println("");
      Serial.println("O buzzer tocara uma nota, configure o volume pelo potenciometro.");
      Serial.println("Para voltar aperte B");
      escolha5 = 0;
      delay(300);
      while (uau2 == 0) {
        escolha5 = Serial.read();
        tone(3, 750, 1);
        if (escolha5 == 98) {
          uau2 = 1;
        }
      }
      uau2 = 0;
      escolha5 = 0;
      configuracao();
    }

    if (escolha5 == 114) {
      Serial.println("");
      Serial.println("Tem certeza que quer zerar os highscores?");
      Serial.println("Y - Sim");
      Serial.println("N - Nao");
      delay(200);
      for (int aff = 1; aff > 0;) {
        escolha5 = Serial.read();
        if (escolha5 == 121) {
          EEPROM[0] = 0;
          EEPROM[1] = 0;
          EEPROM[2] = 0;
          EEPROM[3] = 0;
          EEPROM[4] = 0;
          EEPROM[5] = 0;
          EEPROM[6] = 0;
          EEPROM[7] = 0;
          EEPROM[8] = 0;
          EEPROM[9] = 0;
          EEPROM[10] = 0;
          EEPROM[11] = 0;
          delay(100);
          Serial.println("zerado");
          delay(1000);
          Serial.println("");
          resetFunc();
        }
        if (escolha5 == 110) {
          Serial.println("");
          configuracao();
        }
      }
    }
    if (escolha5 == 116) {
      Serial.println("");
      Serial.println("Mostrara os valores que cada botao esta enviando por 5 segundos, 1 esta apertado, 0 nao esta");
      delay(2200);
      while (uau2 <= 5) {
        Serial.print("botao 4: ");
        Serial.println(digitalRead(botoes[4]));
        Serial.print("botao 3: ");
        Serial.println(digitalRead(botoes[3]));
        Serial.print("botao 2: ");
        Serial.println(digitalRead(botoes[2]));
        Serial.print("botao 1: ");
        Serial.println(digitalRead(botoes[1]));
        Serial.print("botao 0: ");
        Serial.println(digitalRead(botoes[0]));
        delay(1000);
        uau2++;
      }
      configuracao();
    }
  }
}
