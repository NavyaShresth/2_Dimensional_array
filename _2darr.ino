
int a =12;
int b = 11;
int c= 10;
int d= 9;
int e= 8;
int f= 7;
int g= 6;

byte digit [10][7] ={
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {1,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,1,1}
  
};
byte seg[7]={a,b,c,d,e,f,g};
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<=6;i++){
  
  pinMode(seg[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i<=9;i++){
    for(int j = 0; j<=6;j++){
      digitalWrite(seg[j],digit[i][j]);
    }
    delay(1000);
 } 
} 

