#define echoPin 8
#define trigPin 9
#define Lft 4
#define Rt 5
#define bk 10
int p1=3;
int p2=2;
int p3=6;
int p4=7;
int distance;
long duration;
void setup() {
  // put your setup code here, to run once:
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(Lft, INPUT);
  pinMode(Rt, INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration  = pulseIn(echoPin,HIGH);
distance =duration*0.034/2 ;
int r = digitalRead(Lft);
int l = digitalRead(Rt);
int b = digitalRead(bk);
if(distance >=5)
{
if((r==0)&&(l==0) ) 
{
digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
}
if((r==1)&&(l==0)) 
{
digitalWrite(p1,HIGH);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,HIGH);
}
if((r==0)&&(l==1)) 
{
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
}
if((r==1)&&(l==1)) 
{
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
}
else
{
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
}
}
else if( b == 1)
{
digitalWrite(p1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(p3,HIGH);
digitalWrite(p4,LOW);
}
else
{
digitalWrite(p1,LOW);
digitalWrite(p2,LOW);
digitalWrite(p3,LOW);
digitalWrite(p4,LOW);
}
}
