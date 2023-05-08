//Gabriela Marques dos Santos, Larissa dos Santos Cavalheiro e Felipe S Santili 
//Coreografia com LED

// constants won't change. They're used here to set pin numbers:
const int buttonPin1  = 1; 
const int buttonPin2  = 2;

// variables will change:
int buttonState1 = 0;  
int buttonState2 = 0;  //utiliza para guardar a variavel do botao q vai ler 

void setup() {
  // initializar os leds como output
  pinMode(13, OUTPUT); //saida
  pinMode(12, OUTPUT); //saida
  pinMode(11, OUTPUT); //saida
  pinMode(10, OUTPUT); //saida
  pinMode(9, OUTPUT); //saida
  pinMode(8, OUTPUT); //saida

  // inicializar os botões como input
  pinMode(buttonPin1, INPUT); //entrada
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH && buttonState2 == LOW) {
    // turn LED on:
  digitalWrite(13, HIGH);  //liga o led
  delay(500);             //tempo que o led fica ligado (milisegundos)   
  digitalWrite(13, LOW);   //desliga o led

  digitalWrite(12, HIGH);  
  delay(500);                     
  digitalWrite(12, LOW);  

  digitalWrite(11, HIGH);  
  delay(500);                     
  digitalWrite(11, LOW);  

  digitalWrite(10, HIGH); 
  delay(500);              
  digitalWrite(10, LOW);   

  digitalWrite(9, HIGH);  
  delay(500);                     
  digitalWrite(9, LOW);  

  digitalWrite(8, HIGH);  
  delay(500);                     
  digitalWrite(8, LOW);  
  } else if (buttonState2 == HIGH && buttonState1 == LOW) {
    
  digitalWrite(8, HIGH);  
  delay(500);             
  digitalWrite(8, LOW);   

  digitalWrite(9, HIGH);  
  delay(500);                     
  digitalWrite(9, LOW);  

  digitalWrite(10, HIGH);  
  delay(500);                     
  digitalWrite(10, LOW);  

  digitalWrite(11, HIGH); 
  delay(500);               
  digitalWrite(11, LOW);  

  digitalWrite(12, HIGH);  
  delay(500);                     
  digitalWrite(12, LOW);  

  digitalWrite(13, HIGH);  
  delay(500);                     
  digitalWrite(13, LOW); 
  }
}
