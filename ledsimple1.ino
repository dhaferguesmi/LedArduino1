const int red=13; 
const int blue=12;
const int green=11;  
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT); //definir le port 13 comme sortie
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   // red 
  digitalWrite(red, HIGH); //envoie du courant dans le port 13
  delay(100); //delai de 1s 
  digitalWrite(red, LOW);
  delay(100);
   // blue
   digitalWrite(blue, HIGH); //envoie du courant dans le port 13
  delay(200); //delai de 1s 
  digitalWrite(blue, LOW);
  delay(200);

   digitalWrite(green, HIGH); //envoie du courant dans le port 13
  delay(300); //delai de 1s 
  digitalWrite(green, LOW);
  delay(300);

}
