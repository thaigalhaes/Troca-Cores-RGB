int led_R = 7;                                  
 
int led_G = 6;                                        
 
int led_B = 5;                                       
 
int pot = A0;                                         
 
int valorPot;                                         
 
 

 
void acendeVermelho() {
 
  digitalWrite(led_R, LOW);                           
  
  digitalWrite(led_G, HIGH);                         
  
  digitalWrite(led_B, HIGH);                          
 
}
 
  
void acendeVerde() {
 
  digitalWrite(led_R, HIGH);                          
 
  digitalWrite(led_G, LOW);                           
 
  digitalWrite(led_B, HIGH);                       
 
}
 
 
void acendeAzul() {
 
  digitalWrite(led_R, HIGH);                         
 
  digitalWrite(led_G, HIGH);                         
 
  digitalWrite(led_B, LOW);                           
 
}
 
 
void apagaLed() {
 
  digitalWrite(led_R, HIGH);                         
 
  digitalWrite(led_G, HIGH);                         
 
  digitalWrite(led_B, HIGH);                         
 
}
 
 
void setup() {
 
  pinMode(led_R, OUTPUT);                             
  
  pinMode(led_G, OUTPUT);                            
  
  pinMode(led_B, OUTPUT);                             
  
  apagaLed();                                         
 
}
 

 
void loop() {
 
  valorPot = analogRead(pot);                        
 
  if(valorPot >= 0 && valorPot <= 256) {             
 
    apagaLed();                                      
  
  }
 
 
  if(valorPot > 256 && valorPot <= 512) {             
 
    acendeVermelho();                                 
 
  }
 
 
  if(valorPot > 512 && valorPot <= 768) {            
 
    acendeVerde();                                    
 
  }
 
  if(valorPot > 768 && valorPot <= 1023) {            
    acendeAzul();                                     
 
  }   
 
}
