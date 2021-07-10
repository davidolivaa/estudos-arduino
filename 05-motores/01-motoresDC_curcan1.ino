// //Circuito com mtor ligado no arduino

#define motor 2
int tmp=1000;


void setup(){
  pinMode(motor, OUTPUT);  
  
  //digitalWrite(motor, HIGH); 
  //depois de desconectar oo motor do ground
  //ele fica conectado so no 5V e agora na porta 2 tambem
  //mas para voltar a funcionar temos que alterar a porta 2 para HIGH
}


void loop(){
  digitalWrite(motor, HIGH);
  delay(tmp); // Wait for 1000 millisecond(s)
  digitalWrite(motor, LOW);
  delay(tmp); // Wait for 1000 millisecond(s)
}
