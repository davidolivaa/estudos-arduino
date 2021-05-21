//aprenderemos o que sao as portas analogicas ou portas digitais pwm
//pwm significa modularizaçao de largura de pulso
//portas pwm simulam as portas analogicas, por isso tem um '~'
//usamos quando precisamos que o led mude seu estado devagar
//pois com elas podemos trabalhar com cargas diferentes de high e low
//ondas digitais sao quadradas, pois estao ligadas ou desligadas

#define led 3
#define maximo 16
#define minimo 0
#define tempo 100

void setup()
{
  pinMode(led, OUTPUT);
}

void loop(){
  for(int i=minimo; i<maximo; i++){
    analogWrite(led, i); 
    //metodo para portas analogicas ou portas digitais pwm
    //com esse metodo podemos fazer o led acender progressivamente
    //para isso usaremos um loop
    //porem esse processe é muito rapido e quase inperceptivel
    //por isso é necessario um delay
    
    delay(tempo);
  }  
  
   for(int i=maximo; i<minimo; i--){
    analogWrite(led, i); 
    delay(tempo);
  }  
  //so é possivel fazer isso com portas pwm
 
}