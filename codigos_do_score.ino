void scores() {
  if (chain >= 24) {
    score = score + 8;
    chain++;
    if (chain > 24) {
      if (caraca2 == 2) {
        contadorchainamais = 0;
        caraca2 = 1;
      }
      contadorchainamais++;
    }
  } else {
    if (chain >= 16) {
      score = score + 4;
      chain++;
      if (caraca2 != 1) {
        if (caraca2 == 3) {
          caraca2 = 2;
          contadorchainamais++;
        }
      }

    } else {
      if (chain >= 8) {
        score = score + 2;
        chain++;
        if ((caraca2 != 1) && (caraca2 != 2)) {
          if (caraca2 == 4) {
            contadorchainamais = 0;
          }
          caraca2 = 3;
          contadorchainamais++;
        }
      } else {
        if (chain >= 0) {
          score++;
          chain++;
          if((caraca2 != 1) && (caraca2 != 2) && (caraca2 != 3)){
            contadorchainamais = 0;
          }
          caraca2 = 4;
          contadorchainamais++;
        }
      }
    }
  }
}
