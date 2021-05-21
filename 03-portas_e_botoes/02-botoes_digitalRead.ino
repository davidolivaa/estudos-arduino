#define led 4
#define btn 3
int btnclicado=0;
int btnliberado=0;

//funcao que troca o estado do led
void trocaLed(){
  //se o led estiver ligado, sera desligado
  if(digitalRead(led)==HIGH){
    digitalWrite(led, LOW);
  } else{
  	digitalWrite(led, HIGH);
  }
}

//funcao que troca o estado do botao
//so vai funcionar quando ambas variaveis estiverem como 1
//que é depois que o botao é apertado e liberado
//entao as variaveis voltam pra 0
//e a funçao so vai funcionar novamente quando as vars voltarem a ser 1
//que vai ser quando o botao for pressionado e soltado de novo
//mas dessa vez pra apagar/acender se ele estiver ligado/desligado
void keyup(){
  if( (btnclicado==1) and (btnliberado==1) ){
  	btnclicado=0;
    btnliberado=0;
    trocaLed();
  }
}

void setup(){
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop(){
  if(digitalRead(btn) == HIGH){
	btnclicado=1;
    btnliberado=0;
  } else{
    btnliberado=1;
  }
  keyup();
}



//resistores
//nesse exercicio o resistor esta como pull-down
//pois esta ligado ao GND no seu estado padrao/liberado
//quando esta ligado a uma tensao entao é pull-up



//loop em que o led acende enquanto o botao estiver pressionado
//apaga quando libera o botao

/*
void loop(){
  // o metodo digitalRead retorna HIGH ou LOW
  // logo se o botao estiver pressionado as ligacoes verticais se desconectam
  // e as ligacoes diagonais se ligam, entao 5v passarao e entram na porta 3
  if(digitalRead(btn) == HIGH){
    // se o botao estiver pressionado o metodo vai ligar o led
  	digitalWrite(led, HIGH);
  } else{
    // quando o botao nao esta pressionado, no estado 0
    //quem chega a porta 3 atraves do botao é o GND/terra
    //logo o led permanece apagado
    digitalWrite(led, LOW);
  }
}
*/