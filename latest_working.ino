int analogInPin0 = A0;
int analogOutPin0 = 0; 
int analogInPin1 = A1;
int analogOutPin1 = 1; 
int analogInPin2 = A2;
int analogOutPin2 = 2; 
int analogInPin3 = A3;
int analogOutPin3 = 3; 
int analogInPin4 = A4;
int analogOutPin4 = 4; 
int analogInPin5 = A5;
int analogOutPin5 = 5; 
int analogInPin6 = A6;
int analogOutPin6 = 6; 
int analogInPin7 = A7;
int analogOutPin7 = 7; 
int analogInPin8 = A8;
int analogOutPin8 = 8; 
int analogInPin9 = A9;
int analogOutPin9 = 9; 
int analogInPin10 = A10;
int analogOutPin10 = 10;
int analogInPin11 = A11;
int analogOutPin11 = 11;
int analogInPin12 = A12;
int analogOutPin12 = 12;
int analogInPin13 = A13;
int analogOutPin13 = 13;
int analogInPin14 = A14;
int analogOutPin14 = 14;
int analogInPin15 = A15;
int analogOutPin15 = 15;

int sensorValue0 = 0;        // value read from the IR sensor
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;        // value read from the IR sensor
int sensorValue4 = 0;
int sensorValue5 = 0;
int sensorValue6 = 0;        // value read from the IR sensor
int sensorValue7 = 0;
int sensorValue8 = 0;
int sensorValue9 = 0;        // value read from the IR sensor
int sensorValue10= 0;
int sensorValue11= 0;
int sensorValue12= 0;        // value read from the IR sensor
int sensorValue13= 0;
int sensorValue14= 0;
int sensorValue15= 0;        // value read from the IR sensor

int outputValue0 = 0;        // value output to the Actuator
int outputValue1 = 0;        // value output to the Actuator
int outputValue2 = 0;        // value output to the Actuator
int outputValue3 = 0;        // value output to the Actuator
int outputValue4 = 0;        // value output to the Actuator
int outputValue5 = 0;        // value output to the Actuator
int outputValue6 = 0;        // value output to the Actuator
int outputValue7 = 0;        // value output to the Actuator
int outputValue8 = 0;        // value output to the Actuator
int outputValue9 = 0;        // value output to the Actuator
int outputValue10= 0;        // value output to the Actuator
int outputValue11= 0;        // value output to the Actuator
int outputValue12= 0;        // value output to the Actuator
int outputValue13= 0;        // value output to the Actuator
int outputValue14= 0;        // value output to the Actuator
int outputValue15= 0;        // value output to the Actuator

void setup() 
{
  Serial.begin(9600); 
}

void loop() 
{
  float volts0 = analogRead(analogInPin0)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue0= analogRead(analogInPin0);
  float distance0 = 65*pow(volts0, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk
  
  float volts1 = analogRead(analogInPin1)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue1 = analogRead(analogInPin1);
  float distance1 = 65*pow(volts1, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk
  
  float volts2 = analogRead(analogInPin2)*0.000273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue2 = analogRead(analogInPin2);
  float distance2 = 65*pow(volts2, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts3 = analogRead(analogInPin3)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue3= analogRead(analogInPin3);
  float distance3 = 65*pow(volts3, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts4 = analogRead(analogInPin4)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue4= analogRead(analogInPin4);
  float distance4 = 65*pow(volts4, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts5 = analogRead(analogInPin5)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue5= analogRead(analogInPin5);
  float distance5 = 65*pow(volts5, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts6 = analogRead(analogInPin6)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue6= analogRead(analogInPin6);
  float distance6 = 65*pow(volts6, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts7 = analogRead(analogInPin7)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue7= analogRead(analogInPin7);
  float distance7 = 65*pow(volts7, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts8 = analogRead(analogInPin8)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue8= analogRead(analogInPin8);
  float distance8 = 65*pow(volts8, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts9 = analogRead(analogInPin9)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue9= analogRead(analogInPin9);
  float distance9 = 65*pow(volts9, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts10 = analogRead(analogInPin10)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue10 = analogRead(analogInPin10);
  float distance10 = 65*pow(volts10, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts11 = analogRead(analogInPin11)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue11 = analogRead(analogInPin11);
  float distance11 = 65*pow(volts11, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts12 = analogRead(analogInPin12)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue12 = analogRead(analogInPin12);
  float distance12 = 65*pow(volts12, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts13 = analogRead(analogInPin13)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue13 = analogRead(analogInPin13);
  float distance13 = 65*pow(volts13, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts14 = analogRead(analogInPin14)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue14 = analogRead(analogInPin14);
  float distance14 = 65*pow(volts14, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  float volts15 = analogRead(analogInPin15)*0.00273;   // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  sensorValue15 = analogRead(analogInPin15);
  float distance15 = 65*pow(volts15, -1.10);          // worked out from graph 65 = theoretical distance / (1/Volts)S - luckylarry.co.uk

  if(distance0>150)
    distance0=150;
  if(distance0<30)
    distance0=30;
  if(distance1>150)
    distance1=150;
  if(distance1<30)
    distance1=30;
  if(distance2>150)
    distance2=150;
  if(distance2<30)
    distance2=30;
  if(distance3>150)
    distance3=150;
  if(distance3<30)
    distance3=30;
  if(distance4>150)
    distance4=150;
  if(distance4<30)
    distance4=30;
  if(distance5>150)
    distance5=150;
  if(distance5<30)
    distance5=30;
  if(distance6>150)
    distance6=150;
  if(distance6<30)
    distance6=30;
  if(distance7>150)
    distance7=150;
  if(distance7<30)
    distance7=30;
  if(distance8>150)
    distance8=150;
  if(distance8<30)
    distance8=30;
  if(distance9>150)
    distance9=150;
  if(distance9<30)
    distance9=30;
  if(distance10>150)
    distance10=150;
  if(distance10<30)
    distance10=30;
  if(distance11>150)
    distance11=150;
  if(distance11<30)
    distance11=30;
  if(distance12>150)
    distance12=150;
  if(distance12<30)
    distance12=30;
  if(distance13>150)
    distance13=150;
  if(distance13<30)
    distance13=30;  
  if(distance14>150)
    distance14=150;
  if(distance14<30)
    distance14=30;
  if(distance15>150)
    distance15=150;
  if(distance15<30)
    distance15=30;
    
    
  outputValue0 = map(distance0, 30, 150, 270, 0);  
  outputValue1 = map(distance1, 30, 150, 270, 0);  
  outputValue2 = map(distance2, 30, 150, 270, 0);  
  outputValue3 = map(distance3, 30, 150, 270, 0);  
  outputValue4 = map(distance4, 30, 150, 270, 0);  
  outputValue5 = map(distance5, 30, 150, 270, 0);  
  outputValue6 = map(distance6, 30, 150, 270, 0);  
  outputValue7 = map(distance7, 30, 150, 270, 0);  
  outputValue8 = map(distance8, 30, 150, 270, 0);  
  outputValue9 = map(distance9, 30, 150, 270, 0);  
  outputValue10= map(distance10, 30, 150, 270, 0);  
  outputValue11= map(distance11, 30, 150, 270, 0);  
  outputValue12= map(distance12, 30, 150, 270, 0);  
  outputValue13= map(distance13, 30, 150, 270, 0);  
  outputValue14= map(distance14, 30, 150, 270, 0);  
  outputValue15= map(distance15, 30, 150, 270, 0);  
  Serial.print("  distance Value0 = " );     
  Serial.print(distance0);  
  Serial.print("  output Value0 = " );     
  Serial.print(outputValue0);  
  Serial.println();
  Serial.print("  distance Value1 = " );     
  Serial.print(distance1);  
  Serial.print("  output Value1 = " );     
  Serial.print(outputValue1);  
  Serial.println();
  Serial.print("  distance Value2 = " );     
  Serial.print(distance2);  
  Serial.print("  output Value2 = " );     
  Serial.print(outputValue2);  
  Serial.print("  distance Value3 = " );     
  Serial.print(distance3);  
  Serial.print("  output Value3 = " );     
  Serial.print(outputValue3);  
  Serial.println();
  Serial.print("  distance Value4 = " );     
  Serial.print(distance4);  
  Serial.print("  output Value4 = " );     
  Serial.print(outputValue4);  
  Serial.println();
  Serial.print("  distance Value5 = " );     
  Serial.print(distance5);  
  Serial.print("  output Value5 = " );     
  Serial.print(outputValue5);  
  Serial.print("  distance Value6 = " );     
  Serial.print(distance6);  
  Serial.print("  output Value6 = " );     
  Serial.print(outputValue6);  
  Serial.println();
  Serial.print("  distance Value7 = " );     
  Serial.print(distance7);  
  Serial.print("  output Value7 = " );     
  Serial.print(outputValue7);  
  Serial.println();
  Serial.print("  distance Value8 = " );     
  Serial.print(distance8);  
  Serial.print("  output Value8 = " );     
  Serial.print(outputValue8);  
  Serial.print("  distance Value9 = " );     
  Serial.print(distance9);  
  Serial.print("  output Value9 = " );     
  Serial.print(outputValue9);  
  Serial.println();
  Serial.print("  distance Value10 = " );     
  Serial.print(distance10);  
  Serial.print("  output Value10 = " );     
  Serial.print(outputValue10);  
  Serial.println();
  Serial.print("  distance Value11 = " );     
  Serial.print(distance11);  
  Serial.print("  output Value11 = " );     
  Serial.print(outputValue11);  
  Serial.print("  distance Value12 = " );     
  Serial.print(distance12);  
  Serial.print("  output Value12 = " );     
  Serial.print(outputValue12);  
  Serial.println();
  Serial.print("  distance Value13 = " );     
  Serial.print(distance13);  
  Serial.print("  output Value13 = " );     
  Serial.print(outputValue13);  
  Serial.println();
  Serial.print("  distance Value14 = " );     
  Serial.print(distance14);  
  Serial.print("  output Value14 = " );     
  Serial.print(outputValue14);  
  Serial.print("  distance Value15 = " );     
  Serial.print(distance15);  
  Serial.print("  output Value15 = " );     
  Serial.print(outputValue15);  
  Serial.println();
  delay(1000);
}
 
