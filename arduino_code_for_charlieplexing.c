
int A = 2;
int B = 3;
int C = 4;

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT); 
  pinMode(C, OUTPUT);  

}


/*
* Turn on the given LED
*
* @paramledNum LED to turn on (1..6)
*
*/
void setLED(int ledNum)
{
	if(ledNum == 1)
	{
                pinMode(A, OUTPUT);
                pinMode(B, INPUT);  // changed to input to trigger tri state.
                pinMode(C, OUTPUT); 
  
                digitalWrite(A, HIGH);             
                digitalWrite(C, LOW);
	}

	if(ledNum == 2)
	{
                pinMode(A, OUTPUT);
                pinMode(B, INPUT); 
                pinMode(C, OUTPUT);
                
                digitalWrite(A, LOW);             
                digitalWrite(C, HIGH);
	}

	if(ledNum == 3)
	{ 
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
             
                 digitalWrite(A, HIGH);
                 digitalWrite(B, LOW);        
	}

	if(ledNum == 4)
	{
                pinMode(A, OUTPUT);
                pinMode(B, OUTPUT);
                pinMode(C, INPUT);
                
                digitalWrite(A, LOW);
                digitalWrite(B,HIGH);
	}

	if(ledNum == 5)
	{

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);               

                digitalWrite(B, HIGH);
                digitalWrite(C, LOW);
	}

	if(ledNum == 6)
	{

                pinMode(A, INPUT);
                pinMode(B, OUTPUT);
                pinMode(C, OUTPUT);  

                digitalWrite(B, LOW);
                digitalWrite(C, HIGH);
	}
}

void loop()
{


		
	for(;;)
	{
		setLED(1);
		delay(500);
		setLED(2);
		delay(500);
		setLED(3);
		delay(500);
		setLED(4);
		delay(500);
		setLED(5);
		delay(500);
		setLED(6);
		delay(500);
	}


}

