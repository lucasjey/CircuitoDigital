int a = 13;
int b = 12;
int s = 11;

int arrayA[] = {0, 0, 1, 1};
int arrayB[] = {0, 1, 0, 1};

void funcaoAnd() {
  int arrayAnd[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == 0 || arrayB[i] == 0) {
      arrayAnd[i] = 0;
    } else {
      arrayAnd[i] = 1;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayAnd[i]);
  
    delay(2000);
  }
}

void funcaoOr() {
  int arrayOr[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == 1 || arrayB[i] == 1) {
      arrayOr[i] = 1;
    } else {
      arrayOr[i] = 0;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayOr[i]);
  
    delay(2000);
  }
}

void funcaoNand() {
  int arrayNand[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == 1 && arrayB[i] == 1) {
      arrayNand[i] = 0;
    } else {
      arrayNand[i] = 1;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayNand[i]);
  
    delay(2000);
  }
}

void funcaoNor() {
  int arrayNor[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == 0 && arrayB[i] == 0) {
      arrayNor[i] = 1;
    } else {
      arrayNor[i] = 0;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayNor[i]);
  
    delay(2000);
  }
}

void funcaoXor() {
  int arrayXor[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == arrayB[i]) {
      arrayXor[i] = 0;
    } else {
      arrayXor[i] = 1;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayXor[i]);
  
    delay(2000);
  }
}

void funcaoXnor() {
  int arrayXnor[4];
  
  for(int i = 0; i < 4; i++) {
    if(arrayA[i] == arrayB[i]) {
      arrayXnor[i] = 1;
    } else {
      arrayXnor[i] = 0;
    }

    digitalWrite(a, arrayA[i]);
    digitalWrite(b, arrayB[i]);
    digitalWrite(s, arrayXnor[i]);
  
    delay(2000);
  }
}

void passarParaAProxima() {
  for(int i = 0; i < 3; i++) {
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(s, 1);
  
    delay(500);
  
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(s, 0);
  
    delay(500);
  }  
}

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(s, OUTPUT);
}

void loop() {
  passarParaAProxima();
  
  funcaoAnd();

  passarParaAProxima();
  
  funcaoOr();

  passarParaAProxima();
  
  funcaoNand();

  passarParaAProxima();
  
  funcaoNor();

  passarParaAProxima();
  
  funcaoXor();

  passarParaAProxima();
  
  funcaoXnor();
}
