
int delay_ms = 200; 

int arr_pin[5]={32,33,25,26,27};

int i, j;

void setup() {
  for (int i=0; i<5; i++) {
    pinMode(arr_pin[i], OUTPUT);
  }
  delay(200);
}

void loop() {
  // loop from the lowest pin to the highest:
   for (i=0; i<5; i++) {
    digitalWrite(arr_pin[i], HIGH);
    delay(delay_ms);
    digitalWrite(arr_pin[i], LOW);
    //delay(delay_ms);
  }
  
  // loop from the highest pin to the lowest:
   for (j=3; j>=0; j--) {
    digitalWrite(arr_pin[j], HIGH);
    delay(delay_ms);
    digitalWrite(arr_pin[j], LOW);
    //delay(delay_ms);
  }
}












 /*Sand glass logic pattern led*/
 /*
 for (j=5; j>=0; j--) {
  for (i=0; i<=j; i++) {
    digitalWrite(arr_pin[i], HIGH);
    delay(delay_ms);
    digitalWrite(arr_pin[i], LOW);
    //delay(delay_ms);
  }
  digitalWrite(arr_pin[j], HIGH); 
}
*/
