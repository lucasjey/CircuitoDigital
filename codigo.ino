#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8

#define primeiro 9
#define segundo 10
#define terceiro 11
#define quarto 12


void setup()
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(primeiro, INPUT);
  pinMode(segundo, INPUT);
  pinMode(terceiro, INPUT);
  pinMode(quarto, INPUT);
  
}

void loop()
{
  int a = digitalRead(primeiro);
  int b = digitalRead(segundo);
  int c = digitalRead(terceiro);
  int d = digitalRead(quarto);
  
  acendA(a, b, c, d);
  acendB(a, b, c, d);
  acendC(a, b, c, d);
  acendD(a, b, c, d);
  acendE(a, b, c, d);
  acendF(a, b, c, d);
  acendG(a, b, c, d);
  
}

void acendA(int a, int b, int c, int d){
  bool liga = (b&&c) || (a&&!c&&!d) || (!b&&!d) || (!a&&b&&d) || (!a&&c&&d) || (a&&!b&&!c);
  digitalWrite(segA, liga);
}
void acendB(int a, int b, int c, int d){
  bool liga = (!a&&!b) || (!a&&!c&&!d) || (a&&!c&&d) || (!a&&c&&d) || (!b&&!d);
  digitalWrite(segB, liga);
}
void acendC(int a, int b, int c, int d){
  bool liga = (!a&&!c) || (a&&!b) ||  || (!a&&c&&d) || (a&&!c&&d)(!a&&b&&c);
  digitalWrite(segC, liga);
}
void acendD(int a, int b, int c, int d){
  bool liga = (a&&!c) || (!a&&!b&&!d) || (!a&&!b&&c) || (b&&c&&!d) || (a&&!b&&d) || (b&&!c&&d);
  digitalWrite(segD, liga);
}
void acendE(int a, int b, int c, int d){
  bool liga = (!a&&!b&&!d) || (a&&c) || (a&&!b&&!d) || (a&&b&&!c) || (!a&&c&&!d);
  digitalWrite(segE, liga);
}
void acendF(int a, int b, int c, int d){
  bool liga = (!c&&!d) || (!a&&b&&!c) || (b&&c&&!d) || (a&&!b&&d) || (a&&c);
  digitalWrite(segF, liga);
}
void acendG(int a, int b, int c, int d){
  bool liga = (!a&&b&&!c) || (a&&!b) || (!a&&!b&&c) || (a&&d) || (c&&!d);
  digitalWrite(segG, liga);
}