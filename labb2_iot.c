//laboration 2
//skapad av Betty Kroon
//https://www.tinkercad.com/things/7SP1OzCOTqG-labb2/editel

int RedPin = 11;   	//red pin ansluten till digital out pin 11
int BluePin = 10;	//blue pin ansluten till digital out pin 10
int GreenPin = 9;	//green pin ansluten till digital out pin 9
String color;		

void setup()
{
  pinMode(RedPin, OUTPUT);		//sätter RedPin som output
  pinMode(BluePin, OUTPUT);		//sätter BluePin som output
  pinMode(GreenPin, OUTPUT);	//sätter GreenPin som output

  Serial.begin(9600);			//gör serial monitor redo att kommunicera
}

void loop()
{
  Serial.println("Write a color: ");	//Skriver ut i serial monitor
  while (Serial.available()==0)			//om inget skrivs i serial monitor, gör ingenting
  {										//annars skrivs "Write a color: " flera gånger
  	
  }
  color = Serial.readString();			//det jag skriver i serial monitor hamnar i color
  if(color == "red")					//om jag skrev red...
  {
  	analogWrite(RedPin, 255);			//sätter RedPin till. 255
    analogWrite(BluePin, 0);			//BluePin till 0
    analogWrite(GreenPin, 0);			//GreenPin till 0 som tillsammans blir röd
  }	
  if(color == "blue")
  {
  	analogWrite(RedPin, 0);
    analogWrite(BluePin, 255);
    analogWrite(GreenPin, 0);
  }
  if(color == "green")
  {
  	analogWrite(RedPin, 0);
    analogWrite(BluePin, 0);
    analogWrite(GreenPin, 255);
  }
  if(color == "white")
  {
  	analogWrite(RedPin, 255);
    analogWrite(BluePin, 255);
    analogWrite(GreenPin, 255);
  }
  if(color == "grey")
  {
  	analogWrite(RedPin, 64);
    analogWrite(BluePin, 64);
    analogWrite(GreenPin, 64);
  }
  if(color == "black")
  {
  	analogWrite(RedPin, 0);
    analogWrite(BluePin, 0);
    analogWrite(GreenPin, 0);
  }
  if(color == "orange")
  {
  	analogWrite(RedPin, 255);
    analogWrite(BluePin, 0);
    analogWrite(GreenPin, 100);
  }
  if(color == "purple")
  {
  	analogWrite(RedPin, 255);
    analogWrite(BluePin, 255);
    analogWrite(GreenPin, 0);
  }
  if(color == "turkos")
  {
  	analogWrite(RedPin, 51);
    analogWrite(BluePin, 255);
    analogWrite(GreenPin, 255);
  }
  if(color == "yellow")
  {
  	analogWrite(RedPin, 204);
    analogWrite(BluePin, 51);
    analogWrite(GreenPin, 204);
  }
  if(color == "pink")
  {
  	analogWrite(RedPin, 255);
    analogWrite(BluePin, 147);
    analogWrite(GreenPin, 20);
  }
  if(color == "brown")
  {
  	analogWrite(RedPin, 120);
    analogWrite(BluePin, 0);
    analogWrite(GreenPin, 0);
  }
}