long len;
long t3;
long t4;
float t1;
float t2;
unsigned long m1 = 0;
unsigned long m3 = 0;
const int ledPin =  LED_BUILTIN;
int ledState = LOW; 
String letters[40] = {"A", "B", "C", "D", "E", "F","G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};


//Set up - this is where you get things "set-up". It will only run once
void setup() {
  
  //setup serial communications through the USB
  Serial.begin(9600);
  t1 = random(1, 5000); // seconds
  t2 = random(1, 5000); // seconds
  t3 = t1;//*1000;
  t4 = t2;//1000;
  m1 = millis();
  m3 = millis();
  pinMode(ledPin, OUTPUT);
  //Let's make it more random
  randomSeed(42);   
      
}//close setup
 
void loop() {
  unsigned long m2 = millis();
  unsigned long m4 = millis();
  String s = "";
  len = random(5,10); 
  if (m2-m1 >= t3)
  {
    m1 = m2;
    if (ledState == LOW)
    {
      ledState = HIGH;
      Serial.print("LED is ON. \n");
    }
    else
    {
      Serial.print("LED is OFF. \n");
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
  int i = 0;
  if (m4 - m3 >= t4)
  {
    m3 = m4;
    for(i=0;i<len;i++)
    {
      s += letters[random(0,36)];
    }
    Serial.print("Random String is :");
    Serial.println(s);
  }
    
  }
