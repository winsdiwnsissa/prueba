void setup() {
  // put your setup code here, to run once:
#define puls1 3
#define puls2 4
#define tiempo 1
int a;
int b;
int c;
int count1;
int count2;
bool mostrar;
void setup() {
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
 a = digitalRead(puls1);
  b = digitalRead(puls2);

  if (a == 0 and b == 0) {
    mostrar = 0;
  }
  while (a == 1) {
    count1++;
    delay(tiempo);
      mostrar=1;
    break;

  }
  while (b == 1) {
    count2--;
    delay(tiempo);
      mostrar=1;
    break;
  }

  if (mostrar == 0) {

    Serial.print(" La diferencia entre el Jugador 1 y el Jugador 2 es de : ");
    c = count2 + count1;
    Serial.println(c);
   
    mostrar = 0;
  }
}
