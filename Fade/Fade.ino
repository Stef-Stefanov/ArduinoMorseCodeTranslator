bool showSigns = false;
char myString[255];

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println();
  Serial.println("Show dots and dashes? Answer 1 for yes:");
  while(Serial.available() == 0){
  }
  int decision = Serial.parseInt();
  if (decision == 1){
    showSigns = true;
  }
  Serial.println();
  Serial.println("Please input up to 255 chars to be translated into morese code:");
  while(Serial.available() == 0){
  }
  String input = Serial.readString();
  input.toLowerCase();
  input.toCharArray(myString, 255);
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println(myString);
  int borderCond = strlen(myString);
  //Serial.print(borderCond);
  for (int i = 0; i < borderCond; i++){
    char current = myString[i];
    displayChar(current);
  }
  endSequence();
}

void shortBlink(){
  if (showSigns){
    Serial.print(" . ");
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(420);
  digitalWrite(LED_BUILTIN, LOW);
  delay(420);
}

void longBlink(){
    if (showSigns){
    Serial.print(" _ ");
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1260);
  digitalWrite(LED_BUILTIN, LOW);
  delay(420);
}

void extraShortBlink(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(155);
  digitalWrite(LED_BUILTIN, LOW);
  delay(105);
}

void endSequence(){
  delay(2000);
  for(int x = 2; x >= 0 ; x--){
      extraShortBlink();
  }
  Serial.println();
  delay(2000);
}

void afterCharDelay(){
  delay(1000);
}

void displayChar(char c){

  Serial.print(' ');
  Serial.print(c);
  switch (c) {
    case 'a':
      aBlink();
      break;
    case 'b':
      bBlink();
      break;
    case 'c':
      cBlink();
      break;
    case 'd':
      dBlink();
      break;
    case 'e':
      eBlink();
      break;
    case 'f':
      fBlink();
      break;
    case 'g':
      gBlink();
      break;
    case 'h':
      hBlink();
      break;
    case 'i':
      iBlink();
      break;
    case 'j':
      jBlink();
      break;
    case 'k':
      kBlink();
      break;
    case 'l':
      lBlink();
      break;
    case 'm':
      mBlink();
      break;
    case 'n':
      nBlink();
      break;
    case 'o':
      oBlink();
      break;
    case 'p':
      pBlink();
      break;
    case 'q':
      qBlink();
      break;
    case 'r':
      rBlink();
      break;
    case 's':
      sBlink();
      break;
    case 't':
      tBlink();
      break;
    case 'u':
      uBlink();
      break;
    case 'v':
      vBlink();
      break;
    case 'w':
      wBlink();
      break;
    case 'x':
      xBlink();
      break;
    case 'y':
      yBlink();
      break;
    case 'z':
      zBlink();
      break;
    default:
      break;
  }
  afterCharDelay();
}

void aBlink(){
  shortBlink();
  longBlink();
}

void bBlink(){
  longBlink();
  for(int x = 2; x >= 0 ; x--){
    shortBlink();
  }
}

void cBlink(){
  for(int x = 1; x >= 0 ; x--){
    longBlink();
    shortBlink();
  }
}

void dBlink(){
  longBlink();
  for(int x = 1; x >= 0 ; x--){
    shortBlink(); 
  }
}

void eBlink(){
  shortBlink();
}

void fBlink(){
  for(int x = 1; x >= 0 ; x--){
    shortBlink();
  }
  longBlink();
  shortBlink(); 
}

void gBlink(){
  for(int x = 2; x >= 0 ; x--){
    longBlink();
  }
  shortBlink();
}

void hBlink(){
  for(int x = 3; x >= 0 ; x--){
    shortBlink();
  }
}

void iBlink(){
  for(int x = 1; x >= 0 ; x--){
    shortBlink();
  }
}

void jBlink(){
  shortBlink();
  for(int x = 2; x >= 0 ; x--){
    longBlink();
  }
}

void kBlink(){
  longBlink();
  shortBlink();
  longBlink();
}

void lBlink(){
  shortBlink();
  longBlink();
  for(int x = 1; x >= 0 ; x--){
    shortBlink();
  }
}

void mBlink(){
  for(int x = 1; x >= 0 ; x--){
    longBlink();
  }
}

void nBlink(){
  longBlink();
  shortBlink();
}

void oBlink(){
  for(int x = 2; x >= 0 ; x--){
    longBlink();
  }
}

void pBlink(){
  shortBlink();
  longBlink();
  longBlink();
  shortBlink();
}

void qBlink(){
  for(int x = 1; x >= 0 ; x--){
    longBlink();
  }
  shortBlink();
  longBlink();
}

void rBlink(){
  shortBlink();
  longBlink();
  shortBlink();
}

void sBlink(){
  for(int x = 2; x >= 0 ; x--){
    shortBlink();
  }
}

void tBlink(){
  longBlink();
}

void uBlink(){
  for(int x = 1; x >= 0 ; x--){
    shortBlink();
  }
  longBlink();
}

void vBlink(){
  for(int x = 2; x >= 0 ; x--){
    shortBlink();
  }
  longBlink();
}

void wBlink(){
  shortBlink();
  for(int x = 1; x >= 0 ; x--){
    longBlink();
  }
}

void xBlink(){
  longBlink();
  shortBlink();
  shortBlink();
  longBlink();
}

void yBlink(){
  longBlink();
  shortBlink();
  for(int x = 1; x >= 0 ; x--){
    longBlink();
  }
}

void zBlink(){
  for(int x = 1; x >= 0 ; x--){
    longBlink();
  }
  for(int x = 1; x >= 0 ; x--){
    shortBlink();
  }
}