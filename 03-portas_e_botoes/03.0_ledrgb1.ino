//definindo portas
#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
#define maximo 3

int btnclicado=0;
int btnliberado=0;
int ciclo=0;

void vermelho(){
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

void verde(){
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
}

void azul(){
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
}

//inicialmente o ciclo é 0
void trocaLed(){
  if(ciclo==0){
    vermelho();
  } else if(ciclo==1){
    verde();
  } else if(ciclo==2){
    azul();
  }
  
  ciclo++;
  
  if(ciclo>maximo-1){
    ciclo=0;
  }
}

//inicialmente os das vars btn estados sao 0 e 0
//apos o clique passa a ser 1 e 1 
//entao a funcao trocaLed é chamada 
//e os btn voltam pra 0 e 0
void verificaBtn(){
  if( digitalRead(botao)==HIGH ){
    btnclicado=1;
    btnliberado=0;
  } else{
    btnliberado=1;
  }
  if( (btnclicado==1) and (btnliberado==1) ){
    btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup(){
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(botao, INPUT);
}

void loop(){
  verificaBtn();
}