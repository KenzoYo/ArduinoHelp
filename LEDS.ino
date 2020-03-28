
//Como encender un LED con código y con tiempo establecido.

const int inputPin = 2;// El puerto donde ira conectado el pulsador
 
int value = 0;//El estado del pulsador
 
void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);//El pulsador es de Entrada
  // put your setup code here, to run once:
  //En void setup, se establece el uso que se le va a dar al microcontrolador. También se puede iniciar variables e iniciar otros procesos.
  //generalmente los LEDS, los altavoces, son de salida, es decir realizan acciones en cambio los sensores son de entrada, leen, codifican y te envián información.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  //En el setup estableceremos el pin 13,12 y 11 del Arduino como Output, (salida)
  //es decir, que entregará un voltaje, el voltaje es normalmente 3.5 o 5 voltios. Debido a esto se debe usar una resistencia normalmente de 250 a 500 omhs  
  //Pero el  pin 13 posee una resistencia interna de protección, por lo que protejera al led de sobrecarga. Y no es necesario usar una resistencia.
  //NOTA: Si se usara un pin diferente al 13, como en el caso del 11 y 12 es necesario colocar resistencia.
  
 
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // En void loop, se establece los procesos que se ejecutarán cuando
  // se inicie el microcontrolador. Es decir las órdenes.value = digitalRead(inputPin);  //lectura digital de pin
 
  //mandar mensaje a puerto serie en función del valor leido
  if (value == HIGH) {
      //Si se pulsa el pulsador, este mandará la señal HIGH, por tanto los leds se encenderan;
      Serial.println("Encendido");
      digitalWrite(13,HIGH);
      delay(15000);
      digitalWrite(12,HIGH);
      delay(10000);
      digitalWrite(11,HIGH);
      delay(5000);
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
      //Al escribir HIGH, encendido, se refiere a que entrega un voltaje a ese puerto. Osea lo enciende.
      //Al escribir LOW, apagado, se refiere a que deja de entregar voltaje al puerto dado, osea lo apaga.
      //El delay se refiere al tiempo que le dará al Microcontolador para estar en su estado HIGH o LOW, luego pasará al otro estado y cuando no haya otro, se reinicia y vuelve al primer estado.
      //El delay mide en microsegundos por eso es que 1000ms = 1 segundo.
      //Se puede configurar el delay a la cantidad que se desee si quieres 5 segundos pues se coloca 5000.
      //El primer led se encenderá durante 15 seg.
      //El segundo led se encenderá durante 10 seg.
      //El segundo Led se encenderá durante 5 seg.

  }
  else {
      Serial.println("Apagado");
      //Si no enviá señal, sigue apagado.
  }
  delay(1000);
  //1 segundo para que se reinicie todo y se pueda volver a pulsar.
  
}
