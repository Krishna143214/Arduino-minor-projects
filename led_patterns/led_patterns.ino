const int a[12]={2,3,4,5,6,7,8,9,10,11,12,13};


void setup(){

  for(int i=0;i<12;i++){
    pinMode(a[i],OUTPUT);
    
  }


}
void loop(){
int k=0;

while(k<3){
for(int i=0;i<5;i++){
   digitalWrite(a[i],HIGH);
   delay(200);

}
  for(int i=0;i<5;i++){
    digitalWrite(a[i],LOW);
delay(200);
  }
  k++;


}





  int l=0;
  while(l<10){

  for(int i=0;i<5;i++){
    digitalWrite(a[i],HIGH);
  }

  delay(100);
    for(int i=0;i<5;i++){
    digitalWrite(a[i],LOW);

  }
      delay(100);
  l++;
  }



  
int o=0;
while(o<3){

int g=4;
   for(int i=0;i<5;i++){
    digitalWrite(a[i],HIGH);
     digitalWrite(a[g],HIGH);
     delay(400);
      digitalWrite(a[i],LOW);
     digitalWrite(a[g],LOW);
     g--;
    

   }
o++;

}






int m=0;

while(m<3){
  for(int i=0;i<4;i++){
    digitalWrite(a[i],HIGH);
     digitalWrite(a[i+1],HIGH);
     delay(200);

  }
    for(int i=0;i<4;i++){
    digitalWrite(a[i],LOW);
     digitalWrite(a[i+1],LOW);
     delay(200);

  }
  m++;
  }


    int q=0;

  while(q<3){

  for(int i=0;i<5;i++){
    if(i%2==0){
      digitalWrite(a[i],HIGH);
    }

   
    
  }
  delay(400);
    for(int i=0;i<5;i++){
    if(i%2==0){
      digitalWrite(a[i],LOW);
    }
    
  }


delay(800);

  for(int i=0;i<5;i++){
    if(i%2!=0){
      digitalWrite(a[i],HIGH);
    }

    
    
  }
  delay(400);
  
    for(int i=0;i<5;i++){
    if(i%2!=0){
      digitalWrite(a[i],LOW);
    }
    
  }

  delay(800);
  q++;
  }


  int p=0;
  while(p<3){

  for(int i=0;i<5;i++){
    digitalWrite(a[i],HIGH);
    delay(100);
  }

delay(1000);
  
    for(int i=5;i>=0;i--){
    digitalWrite(a[i],LOW);
      delay(100);

  }
  delay(1000);
    
  p++;
  }

  




  delay(4000);


}
