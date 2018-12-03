
#define led1 9
#define led2 10
#define led3 11
const int buttonPin = 2; 
int analogvalue = 0 ;
   

int buttonState =0 ; 
//int lastbuttonState;
int analogPin = A0; 


//unsigned long lastDebounceTime = 0; 
//unsigned long debounceDelay = 50; 
int mode = 0 ;
void setup() {
  
  Serial.begin(9600);
  Serial.println("Program Start");
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(buttonPin,INPUT);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}

void loop()

 {
     analogvalue = analogRead(analogPin);
     buttonState = digitalRead(buttonPin) ;
     //int reading = digitalRead(buttonPin);
    // if (reading != lastbuttonState) 
     //{lastDebounceTime = millis();}

      //if ((millis() - lastDebounceTime) > debounceDelay) 
     // {
     
           // if (reading != buttonState) 
           // {
          
            
            
                 if (buttonState == 0)
                  {
                        
                        mode ++ ;
                        Serial.println(mode) ;
                        if (mode > 2 )
                        {
                            mode = 0 ;
                        }
                  }
                  Serial.println(mode) ;
              //}
            // }


   
  if(mode==0)
  {
  analogWrite(led1,analogvalue/4);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  analogWrite(led1, analogvalue / 4);
  Serial.println(analogvalue);
  
  }
  if(mode==1)
  {
  analogWrite(led2,analogvalue/4);
   digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  analogWrite(led2, analogvalue / 4);
  Serial.println(analogvalue);
  
  }
  if(mode==2)
  {
  analogWrite(led3,analogvalue/4);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  analogWrite(led3, analogvalue / 4);
  Serial.println(analogvalue);
 
  }
  delay(200);
}
