

   #define C3 123.47
   #define D3 146.83
   #define E3 164.81
   #define F3 174
   #define G3 196
   #define A3 220
   #define B3 264.94
   
   #define C4 261.63 
   #define D4 293.66
   #define E4 329.23
   #define F4 349.23
   #define G4 391.99
   #define A4 440
   #define B4 494
   #define C5 523
   


int pinSebastian = 1;
int peppa1[] = {G4, E4, C4, D4, G3};
int peppa1time[] = {500, 400, 400, 500, 500};

int peppa2[] = {G3, B3, D4, F4, E4,C4};
int peppa2time[] = {400, 400, 400, 400, 500, 500};

void setup() {
 
  pinMode(pinSebastian, OUTPUT);
  
}


void loop() {
  

 
  for ( int i = 0; i < sizeof(peppa1); i++){
    
          tone(pinSebastian, peppa1[i] , peppa1time[i]);
          delay(peppa1time[i]);
  
    }
      for ( int i = 0; i < sizeof(peppa2); i++){
    
          tone(pinSebastian, peppa2[i] , peppa2time[i]);
          delay(peppa2time[i]);
  
    }

  delay(1000);



  
}
