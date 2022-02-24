const int LED[] = {21,19};


void setup() {


  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
}

void loop () {
  for(int i=0, i <=3; i++) {

    digitalWrite (LED[i], HIGH); 
    delay(1000);
    digitalWrite (LED[i], LOW);
    delay(1000);


  }
}
  

