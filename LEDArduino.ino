//Saludos a la Noga :D
//Como encender un LED con código y con tiempo establecido.



void setup() {
  // put your setup code here, to run once:
  //En void setup, se establece el uso que se le va a dar al microcontrolador. También se puede iniciar variables e iniciar otros procesos.
  //generalmente los LEDS, los altavoces, son de salida, es decir realizan acciones en cambio los sensores son de entrada, leen, codifican y te envián información.
  pinMode(13, OUTPUT);
  //En el setup estableceremos el pin 13 del Arduino como Output, (salida)
  //es decir, que entregará un voltaje, el voltaje es normalmente 3.5 o 5 voltios. Debido a esto se debe usar una resistencia normalmente de 250 a 500 omhs  
  //Pero el  pin 13 posee una resistencia interna de protección, por lo que protejera al led de sobrecarga. Y no es necesario usar una resistencia.
  //NOTA: Si se usara un pin diferente al 13 es necesario colocar resistencia.
  //Si deseas colocar otro led debes iniciarlo cómo salida como con el pin 13 asi: pinMode(Puerto, OUTPUT); Ejemplo: pinMode(12,OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // En void loop, se establece los procesos que se ejecutarán cuando
  // se inicie el microcontrolador. Es decir las órdenes.
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  //Al escribir HIGH, encendido, se refiere a que entrega un voltaje a ese puerto. Osea lo enciende.
  //Al escribir LOW, apagado, se refiere a que deja de entregar voltaje al puerto dado, osea lo apaga.
  //El delay se refiere al tiempo que le dará al Microcontolador para estar en su estado HIGH o LOW, luego pasará al otro estado y cuando no haya otro, se reinicia y vuelve al primer estado.
  //El delay mide en microsegundos por eso es que 1000ms = 1 segundo.
  //Se puede configurar el delay a la cantidad que se desee si quieres 5 segundos pues se coloca 5000.
   
  //Si deseas otro led al haberlo iniciado deberas proceder en el void loop cómo en el pin 13.

}
