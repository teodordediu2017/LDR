/**********************************************************************************
** **
** Lector de Llum **
** **
** **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 9; // donar nom al pin 9 de l’Arduino
const int led1 = 10; // donar nom al pin 9 de l’Arduino
const int led2 = 11; // donar nom al pin 9 de l’Arduino
const int ldr0 = A0; // donar nom al pin A0 de l’Arduino
const int ldr1 = A1; // donar nom al pin A1 de l’Arduino
const int ldr2 = A2; // donar nom al pin A2 de l’Arduino
int valLdr0, valLdr1, valLdr2; // per guardar valors del ldrs
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  pinMode(led0, OUTPUT); //DEFINIR el pin9 cum una sortida//
  pinMode(led1, OUTPUT); //DEFINIR el pin 10 cum una sortida//
  pinMode(led2, OUTPUT); //DEFINIR el pin 11 cum una sortida//
  
}
//********** Loop *****************************************************************
void loop()
{
  Serial.println("El valor del LDR 0 és de: ");
  Serial.println(valLdr0);
  Serial.println("El valor del LDR 1 és de: ");
  Serial.println(valLdr1);
  Serial.println("El valor del LDR 2 és de: ");
  Serial.println(valLdr2);
  delay(100);
  
valLdr0 = analogRead(ldr0); // llegir valor ldr0
valLdr0 = map(valLdr0, 400, 1023, 0, 255); // mapejar valor de 0-1023 a 0-255
analogWrite(led0, valLdr0); // actualitzar l'estat del 

valLdr1 = analogRead(ldr1); // llegir valor ldr1
valLdr1 = map(valLdr1, 400, 1023, 0, 255); // mapejar valor de 0-1023 a 0-255
analogWrite(led1, valLdr1); // actualitzar l'estat del 

valLdr2 = analogRead(ldr2); // llegir valor ldr2
valLdr2 = map(valLdr2, 400, 1023, 0, 255); // mapejar valor de 0-1023 a 0-255
analogWrite(led2, valLdr2); // actualitzar l'estat del 
}
//********** Funcions *************************************************************
