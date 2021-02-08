
//definovat vstup A1 jako ldr senzor
#define ldr A1

//definovat segmenty displeje jako jednotlive cleny v poli pro lepsi orientaci
#define a seg[4]
#define b seg[3]
#define c seg[0]
#define d seg[2]
#define e seg[1]
#define f seg[5]
#define g seg[6]

//pole se segmenty na displeji
byte seg[] = {4, 5, 6, 7, 8, 9, 10};

//hodnota ldr senzoru
int val;

void setup() {
  //nastaveni displeje jako output
  for (byte i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
  //nastaveni ldr senzoru jako input
  pinMode(ldr, INPUT);
  //aktivace seriove komunikace
  Serial.begin(9600);

}

void loop() {
  //precist hodnotu na ldr senzoru, premapovat ji a vypsat na serial monitor (Ctrl+Shift+M)
  val = analogRead(ldr);
  val = map(val, 0, 800, 9, 0);
  Serial.println(val);

  //vypsat hodnotu ze serial monitoru na displej
  dispFunkc();

  //opakovat po 200 ms
  delay(200);

}

//urceni zobrazovaneho cisla na displeji podle intenzity svetla
void dispFunkc() {

  switch (val) {
    case 0:
      nula();
      break;
    case 1:
      jedna();
      break;
    case 2:
      dva();
      break;
    case 3:
      tri();
      break;
    case 4:
      ctyri();
      break;
    case 5:
      pet();
      break;
    case 6:
      sest();
      break;
    case 7:
      sedm();
      break;
    case 8:
      osm();
      break;
    case 9:
      devet();
      break;
  }


};
//predurceni zobrazovani cisel na displeji
void nula() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void jedna() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void dva() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void tri() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void ctyri() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void pet() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void sest() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void sedm() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void osm() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void devet() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
