


int variable = 1;

void setup() {
  // runs once at the start
  Serial.begin(9600); // sets up being able to print statements (press serial monitor at the top right and then setup the serial monitor to 9600 baud at the right of the serial monitor)

  pinMode(10, OUTPUT); // sets pin 10 to output
  digitalWrite(10, HIGH); // sets pin 10 to be always on

  pinMode(LED_BUILTIN, OUTPUT); // sets built in LED to output

  // hi testing github ha ha 
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)

    Serial.println(variable); //prints the variable
    variable += 1; //increments Variable by one

    delay(1000); //waits 1 second


    printHello(); // calls the function

    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW

    Serial.println("New Update:"); // Serial.println STARTS ON A NEW LINE
    Serial.print("One round of Loop completed!");  // Serial.print ADDS MORE CONTENT ON THE SAME LINE (combine stuff like variables, etc.)
    
}

// sets up a function called printHello
void printHello() {
  Serial.println("Hello");
}
