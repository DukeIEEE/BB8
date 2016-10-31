const int AIA = A4; // D3(pwm) pin 9 connected to pin A-IA
const int AIB = A5; // D2(pwm) pin 5 connected to pin A-IB
const int BIA = RX; // D5(pwm) pin 10 connected to pin B-IA
const int BIB = TX;

byte speed = 255;  // change this (0-255) to control the speed of the motors

void setup() {
  pinMode(AIA, OUTPUT); // set pins to output
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

    Spark.function("up", up);
    Spark.function("down", down);
    Spark.function("stop", stop);
}

int up(String ayy)
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
   return 0;
}

int down(String nothing)
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
  return 0;
}

int left(String ayy)
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
   return 0;
}

int right(String nothing)
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
  return 0;
}

int stop(String ayy)
{
  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);
   return 0;
}
