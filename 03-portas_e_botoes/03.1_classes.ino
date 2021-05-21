//definindo portas

/*
#define ledR 2
#define ledG 4
#define ledB 3
#define botao 7
*/

int btnclicado=0;
int btnliberado=0;
int ciclo=0;


class Btn(){
  public:
    int btnclicado, btnliberado, pino;
    Btn(int p){
      pino=p; //pino 7
      btnclicado=btnliberado=0;
    }
  bool press(){
    if(digitalRead(pino)==HIGH){ //botao clicado
      btnclicado=1;
      btnliberado=0;
    } else{
      btnliberado=1;
    }
    if( (btnclicado==1) and (btnliberado==1) ){
      btnclicado=0;
      btnliberado=0;
      return true;
    } else{
      return false;
    }
  }
};

class Cor{
 public:
   int pinoR, pinoG, pinoB, ciclo, maximo;
    Cor(int pr, int pg, int pb): pinoR(pr), pinoG(pg), pinoB(pb){
      ciclo=0;
      maximo=0;
    }
    void trocaLed(){
      if(ciclo==0){
        corLed(1, 0, 0);
      } else if(ciclo==1){
        corLed(0, 1, 0);
      } else if(ciclo==2){
        corLed(0, 0, 1);
      }
      ciclo++;
      if(ciclo>maximo-1){
        ciclo=0;
      }
    }
  private:
  void corLed(int r, int g, int b){
    digitalWrite(pinoR, r);
    digitalWrite(pinoG, g);
    digitalWrite(pinoB, b);
  }
};
 

//instanciando um objeto
Btn btn(7); // enviando o botao/porta 7
Cor cor(2, 4, 3); //enviando as portas


void setup(){
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(7, INPUT);
}

void loop(){
  if(btn.press()){ //true, quando o botao foi clicado e liberado
    cor.trocaLed();
  }
}