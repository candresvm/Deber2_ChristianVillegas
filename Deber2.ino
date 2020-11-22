const int A=8; //decodificador
 const int B=9; //decodificador
 const int C=10; //decodificador
 const int D=11; //decodificador
 const int btn=7; //pulsador
 const int unidades=12;
 const int decenas=13;
 int j=1;
 int uni;
 int dec;
 int i;
 int a;
 
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(btn,INPUT);
  pinMode(unidades,OUTPUT);
  pinMode(decenas,OUTPUT);
}

void loop() {
if (digitalRead (btn) == HIGH){
    
    j++;
    if (j<=100){
      a=0;
      for(i=1;i<=100;i++){
        if(j%i == 0)
          a++;
        }
    if(a==2){
      dec=j/10; 
      uni=j-(dec*10);
      digitalWrite(decenas,HIGH);
      digitalWrite(unidades,LOW);
      contador(dec);
      delay(200);
      
      digitalWrite(decenas,LOW);
      digitalWrite(unidades,HIGH);
      contador(uni);
      delay(200); 
    }
      
    }else{
      digitalWrite(decenas,LOW);
      digitalWrite(unidades,LOW);
      }
    }else{
      digitalWrite(decenas,LOW);
      digitalWrite(unidades,LOW);
      }
}

void contador (int i){
  switch(i){
      case 0:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 1:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 2:
        digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 3:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,LOW);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 4:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 5:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 6:
        digitalWrite(A,LOW);
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 7:
        digitalWrite(A,HIGH);
        digitalWrite(B,HIGH);
        digitalWrite(C,HIGH);
        digitalWrite(D,LOW);
        delay(200);
      break;
      case 8:
        digitalWrite(A,LOW);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,HIGH);
        delay(200);
      break;
      case 9:
        digitalWrite(A,HIGH);
        digitalWrite(B,LOW);
        digitalWrite(C,LOW);
        digitalWrite(D,HIGH);
        delay(200);
      break;
      }
  }
