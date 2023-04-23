#define LIGHT 8
#define OBJECT 5
#define LED 9

int light;
int object;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600)
   pinMode(LED,OUTPUT)
   pinMode(LIGHT,INPUT)
   pinMode(OBJECT,INPUT)
   }

void loop() {
  // put your main code here, to run repeatedly:
 Light=digitRead(LIGHT);
 Serial.println("Light="+String(light));
 If(object==1)
 {
  Object=digitalRead(OBJECT);
  If(object==0)
  {
    analogWrite(LED,50);
    Delay(2000);
    analogWrite(LED,1);
    
  }
  Serial.println("obj='+String(object));
  analogWrite(LED,1);
 }
 Else
 {
  analogWrite(LED,0)
 }
 Delay(500)
}

  
 }
}
