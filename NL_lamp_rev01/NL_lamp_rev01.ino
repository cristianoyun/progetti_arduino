/*
Progetto ler rgb Marghe e Cri

22 Giugno 2014

rev01 - Accendi led

ho ggiunto un commento
adeso ho aggiunto unaltro commnto
 */
 int Blue = 9;
int Verde =  6;
int Rosso = 3;
int intensita =255;
const int slittaColore = A0;

int colore =0;
int colore255=0;


// the setup routine runs once when you press reset:
void setup() {                
  
  Serial.begin(9600);
  
  // initialize the digital pin as an output.
  pinMode(Rosso, OUTPUT); 
pinMode (Verde, OUTPUT); 
pinMode (Blue, OUTPUT);
}


// the loop routine runs over and over again forever:
void loop() {
  
  colore=analogRead(slittaColore);
  colore255 = map(colore, 0, 1023, 0, 255);
  Serial.println(colore255);
  delay(500);
  
  
  if (colore255 < 20){
   analogWrite(Rosso, 0);
   analogWrite(Verde, 0);
   analogWrite(Blue, 0);  
  }
  
  if (colore255 >=20 && colore255<70){
   analogWrite(Rosso, 255);
   analogWrite(Verde, 0);
   analogWrite(Blue, 0);  
   
   }
   
   if (colore255 >=70 && colore255< 175 ){
   analogWrite(Rosso, 0);
   analogWrite(Verde, 255);
   analogWrite(Blue, 0);  

   }
   
   
  if (colore255 >= 175){
   analogWrite(Rosso, 0);
   analogWrite(Verde, 0);
   analogWrite(Blue, 255);  

   }
   
      
/*  
  analogWrite(Rosso, 143);   // turn the LED on (HIGH is the voltage level)
  analogWrite(Verde, 0);
  analogWrite  ( Blue,intensita);
  delay(2000);               // wait for a second
  analogWrite(Rosso, LOW);    // turn the LED off by making the voltage LOW
  analogWrite (Verde,LOW);
  analogWrite(Blue,LOW);
 delay (500);
 */
  
} // chiude il void loop
