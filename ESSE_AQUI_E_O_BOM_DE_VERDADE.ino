#include <EEPROM.h>

float konami = 0;
int displayD[] = {31, 32, 33, 34, 35, 36, 37, 38};
int botoes[] = {53, 52, 51, 50, 49};
int botoesV[6] = {};
int matrizV[] = {22, 24, 39, 28, 30};
int qntpinV = 5;
int qntpinH = 10;
int R = 6;
int G = 4;
int B = 5;
int matrizH[] = {13, 12, 11, 10, 9, 8, 7, 36, 34, 32};
int pinoagr3 = 0;
int led = 52;
int menu = 0;
int escolha = 0;
int score = 0;
int simounao = 0;
int tempochance;
int vida = 10;
int cont = 9;
int verif = 0;
int highscore[] = {};
int eofim;
int veriffoda;
int veriffoda2;
int veriffoda3;
int verifdmus;
int escolha2;
int escolha3;
bool valveanticheat = false;
int chain = 0;
float contadornotasparaapertarkkk;
float contadornotasparaACERTARkkk;
int caraca;
float porcentagem;
int caraca2;
int contadorchainamais;
int chainmaxzica;
int contadordclicks;
int escolha4;
int escolha5;
int uau2;
int uau;

void(* resetFunc) (void) = 0;
void setup() {
  // put your setup code here, to run once: bom dia
  for (int ledagr2 = 0; ledagr2 < qntpinV; ledagr2++) {
    digitalWrite(matrizV[ledagr2], LOW);
  }
  for (int ledagr = 0; ledagr < qntpinH; ledagr++) {
    digitalWrite(matrizH[ledagr], HIGH);
  }
  analogWrite(A14, 0);
  analogWrite(A13, 0);
  Serial.begin(9600);
  Serial.println("Aperte ENTER para começar");
  Serial.println("");
  Serial.println("               _  _                 _               ");
  Serial.println("              (_)| |               (_)              ");
  Serial.println("  __ _  _   _  _ | |_   __ _  _ __  _  _ __    ___  ");
  Serial.println(" / _` || | | || || __| / _` || '__|| || '_ \  / _ \ ");
                 Serial.println("| (_| || |_| || || |_ | (_| || |   | || | | || (_) |");
                                    Serial.println("    \__, | \__,_||_| \__| \__,_||_|   |_||_| |_|   \___/ ");
                                    Serial.println("  __/ |                                             ");
                                    Serial.println(" |___/                                              ");
                                    Serial.println("                                                    ™");
                                    Serial.println("________________________________________________________");
                                    menu = Serial.read();
                                    while (Serial.available() <= 0) {}

                                    Serial.println("________________________________________________________");
                                    Serial.println("");
                                    Serial.println("Guitarino: Knights of Leo™");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Escolha uma musica pelo numero:");
                                    delay(250);
                                    Serial.println("");
                                    Serial.println("1 - Default Dance Fortnite - Easy - Duração: 19s");
                                    Serial.println("2 - Super Tetris Theme - Medium - Duração: 43s");
                                    Serial.println("3 - All Star - Hard - Duração: 1min");
                                    Serial.println("4 - Megalovania - Expert - Duração: 2min 22s");
                                    Serial.println("");
                                    Serial.println("H - Ver highscore");
                                    Serial.println("C - Configuracao");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Copyright 2019©");

                                    for (int agr; agr < 5; agr++) {
                                    pinMode(botoes[agr], INPUT);
                                  }

                                    for (int pinoagr = 0; pinoagr < qntpinV; pinoagr++) {
                                    pinMode(matrizV[pinoagr], OUTPUT);
                                  }

                                    for (int pinoagr2 = 0; pinoagr2 < qntpinH; pinoagr2++) {
                                    pinMode(matrizH[pinoagr2], OUTPUT);
                                  }
                                    for (int pinoagr = 0; pinoagr > 8; pinoagr) {
                                    pinMode(displayD[pinoagr], OUTPUT);
                                  }

                                    pinMode(R, OUTPUT);
                                    pinMode(G, OUTPUT);
                                    pinMode(B, OUTPUT);


                                  }
                                    void loop() {
                                    // put your main code here, to run repeatedly:
                                    escolha = Serial.read();
                                    contadorchainamais = 0;
                                    caraca2 = 0;
                                    score = 0;
                                    contadornotasparaACERTARkkk = 0;
                                    contadornotasparaapertarkkk = 0;
                                    chain = 0;
                                    vida = 20;
                                    caraca = 0;
                                    noTone(3);
                                    

                                    //KONAMICODE
                                    if (escolha == 94 && konami < 1){konami = konami + 0.5; //cima
                                    if (escolha == 94 && konami == 1){ konami = 2;}} //cima
                                    if (escolha == 118 || escolha == 86 && konami < 3){konami = 0.5; //baixo
                                    if (escolha == 118 || escolha == 86 && konami == 3){ konami = 4;}} //baixo
                                    if (escolha == 60 && konami == 2){konami = 5;} //esquerda
                                    if (escolha == 62 && konami == 3){konami = 6;} //direita
                                    if (escolha == 60 && konami == 4){konami = 7;} //esquerda
                                    if (escolha == 62 && konami == 5){konami = 8;} //direita
                                    if (escolha == 98 || escolha == 66 && konami == 9){konami = 10;} //b
                                    if (escolha == 97 || escolha == 65 && konami == 10){konami = 11; //a
                                      vida = -1;
                                      Serial.println("vidas infinitas habilitadas!");}

                                    
                                    //nao sei programar entao so escreve quala
                                    if (escolha == 49) {
                                    Serial.println("                                                    ");
                                    Serial.println(" - Tocando Fortnite Default Theme - By: Darren Sugg ");
                                    Serial.println("");
                                    inicio();
                                    funccom();
                                    Serial.println("");
                                    Serial.println("________________________________________________________");
                                    Serial.println("");
                                    Serial.println("Guitarino: Knights of Leo™");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Escolha uma musica pelo numero:");
                                    delay(250);
                                    Serial.println("");
                                    Serial.println("1 - Default Dance Fortnite - Easy - Duração: 19s");
                                    Serial.println("2 - Super Tetris Theme - Medium - Duração: 43s");
                                    Serial.println("3 - All Star - Hard - Duração: 1min");
                                    Serial.println("4 - Megalovania - Expert - Duração: 2min 22s");
                                    Serial.println("");
                                    Serial.println("H - Ver highscore");
                                    Serial.println("C - Configuracao");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Copyright 2019©");
                                  }
                                    if (escolha == 50) {
                                    Serial.println("                                                    ");
                                    Serial.println(" - Tocando Tetris Theme - By: Alexey Pajitnov ");
                                    Serial.println("");
                                    inicio();
                                    functetris();
                                    Serial.println("________________________________________________________");
                                    Serial.println("");
                                    Serial.println("Guitarino: Knights of Leo™");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Escolha uma musica pelo numero:");
                                    delay(250);
                                    Serial.println("");
                                    Serial.println("1 - Default Dance Fortnite - Easy - Duração: 19s");
                                    Serial.println("2 - Super Tetris Theme - Medium - Duração: 43s");
                                    Serial.println("3 - All Star - Hard - Duração: 1min");
                                    Serial.println("4 - Megalovania - Expert - Duração: 2min 22s");
                                    Serial.println("");
                                    Serial.println("H - Ver highscore");
                                    Serial.println("C - Configuracao");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Copyright 2019©");
                                  }
                                    if (escolha == 51) {
                                    Serial.println("                                                    ");
                                    Serial.println(" - Tocando All Star  - By: Smash Mouth ");
                                    Serial.println("");
                                    inicio();
                                    funcall();
                                    Serial.println("________________________________________________________");
                                    Serial.println("");
                                    Serial.println("Guitarino: Knights of Leo™");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Escolha uma musica pelo numero:");
                                    delay(250);
                                    Serial.println("");
                                    Serial.println("1 - Default Dance Fortnite - Easy - Duração: 19s");
                                    Serial.println("2 - Super Tetris Theme - Medium - Duração: 43s");
                                    Serial.println("3 - All Star - Hard - Duração: 1min");
                                    Serial.println("4 - Megalovania - Expert - Duração: 2min 22s");
                                    Serial.println("");
                                    Serial.println("H - Ver highscore");
                                    Serial.println("C - Configuracao");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Copyright 2019©");
                                  }
                                    if (escolha == 52) {
                                    Serial.println("                                                    ");
                                    Serial.println(" - Tocando Megalovania - By: Toby Fox ");
                                    Serial.println("");
                                    inicio();
                                    funcmeg();
                                    Serial.println("________________________________________________________");
                                    Serial.println("");
                                    Serial.println("Guitarino: Knights of Leo™");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Escolha uma musica pelo numero:");
                                    delay(250);
                                    Serial.println("");
                                    Serial.println("1 - Default Dance Fortnite - Easy - Duração: 19s");
                                    Serial.println("2 - Super Tetris Theme - Medium - Duração: 43s");
                                    Serial.println("3 - All Star - Hard - Duração: 1min");
                                    Serial.println("4 - Megalovania - Expert - Duração: 2min 22s");
                                    Serial.println("");
                                    Serial.println("H - Ver highscore");
                                    Serial.println("C - Configuracao");
                                    Serial.println("________________________________________________________");
                                    Serial.println("Copyright 2019©");
                                  }
                                    if (escolha == 104) {
                                    highscoretabela();
                                  }
                                    if (escolha == 99) {
                                    configuracao();
                                  }
                                    funcled();
                                  }
