void setup() {
  // put your setup code here, to run once:
  char *direction;
  direction = 0x30;     //PortF Direction register Address
  *direction=0xFF;      //All the pin's are set as output;

}

void loop() {
  // put your main code here, to run repeatedly:
  volatile char *data;
  data=0x31;            //PortF address
  *data = 0x02;         //this makes PortF 2nd pin HIGH;
  delay(1000);
  *data=0x00;
  delay(1000);          //this makes PortF 2nd pin LOW;
}
