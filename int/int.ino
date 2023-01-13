/*
  ARDUINO TUTORIALS - VARIABLES/INT
  MELIH KARAGOZ
  ## https://github.com/melihkaragoz ##
*/

unsigned char  c; // c degiskenini char tipinde (karakter) bir degisken olarak global scope'ta declare ediyoruz.
char  str[100]; // c degiskenini kullanarak formatlayacagimiz string'i tutacak bir array tanimliyoruz.

void setup() {
  Serial.begin(9600); // 9600 baud rate degeri ile seri haberlesmeyi baslatiyoruz.
  c = 65; // c degiskenini 'A' degeri ile initialize ediyoruz. 
}

void loop() {
  if(c >= 127) // c degiskenimizin degeri 127'yi yani yazdirilabilir karakter esigini gecerse tekrar 65'e sabitliyoruz.
    c = 65;
  sprintf(str,"%d => %c\n",c,c); // ekrana basilacak stringimizi formatliyoruz.
  Serial.print(str); // formatlanan stringi seri monitore basiyoruz.
  c++;
  delay(100); // her dongu cycle'i icin 100ms bekleme suresi veriyoruz.
}
