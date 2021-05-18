//podemos inicializar uma var com escopo global ou dentro de setup
//mas a criaçao/declaraçao deve ser feita fora
int led = 10;

void setup() {
  // put your setup code here, to run once:
  // configuraçoes e inicializaçoes iniciais do programa

  //pinMode(13, OUTPUT); // OUTPUT=pino de saida, INPUT=pino de entrada 
  
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

	/*
	digitalWrite(13, HIGH); //HIGH=ligado(5v), LOW=deligado(0v)
	delay(2000); //metodo delay faz uma pausa antes de continuar o loop
  	//usado pra fazer o led piscar
  	digitalWrite(13, LOW);
  	delay(2000);
  	*/
  
  	digitalWrite(led, HIGH); 
	delay(2000);   	
  	digitalWrite(led, LOW);
  	delay(2000);
	
}