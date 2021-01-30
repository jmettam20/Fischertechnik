import controlP5.*; //import ControlP5 library
import processing.serial.*;//import serial processing 

Serial port;

ControlP5 cp5; //create ControlP5 object
PFont font;//variable for font  
PFont font2;//variable for font2 
PImage img; //variable for an image

void setup(){ //setup UI

 img = loadImage("robot.PNG");//load image of the robot with the arro indicators on it
 
  size(1200, 600);    //window size, (width, height)
  
  printArray(Serial.list());   //prints all available serial ports
  
  port = new Serial(this, "COM3", 9600);  //i have connected arduino to /dev/COM3
  
  
  cp5 = new ControlP5(this);//new GUI
  font = createFont("calibri light bold", 10);    // custom fonts for buttons 
font2 = createFont("calibri light bold", 25);//font for titles 
  
  cp5.addButton("Clockwise")     //"clockwise" is the name of button
    .setPosition(165, 435)  //x and y coordinates of upper left corner of button
    .setSize(80, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 255, 102, 0 ) );//sets background collour
 
  ; 
  
    cp5.addButton("AntiClockwise")     //"AntiClockwise" is the name of button
    .setPosition(255, 435)  //x and y coordinates of upper left corner of button
    .setSize(80, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 255, 102, 0  ) );//sets background collour
 
  ;  
  
    cp5.addButton("Pulse_CW")     //"Pulse_CW" is the name of button
    .setPosition(165, 480)  //x and y coordinates of upper left corner of button
    .setSize(80, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color(  255, 102, 0  ) );//sets background collour
  ;
  
  cp5.addButton("Pulse_ACW")     //"Pulse_ACW" is the name of button
    .setPosition(255, 480)  //x and y coordinates of upper left corner of button
    .setSize(80, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color(  255, 102, 0  ) );//sets background collour
  ;
  
   cp5.addButton("Forward")     //"Forward" is the name of button
    .setPosition(110, 340)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)     //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,125,168 ) );//sets background collour
     
  ; 
  
     cp5.addButton("Backward")     //"Backward" is the name of button
    .setPosition(110, 385)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)       //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,125,168 ) );//sets background collour
    
  ; 
  
    cp5.addButton("Pulse_FWD")     //"Pulse_FWD" is the name of button
    .setPosition(20, 340)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,125,168  ) );//sets background collour
  ;
  
     cp5.addButton("Pulse_BWD")     //"Pulse_BWD" is the name of button
    .setPosition(20, 385)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,125,168  ) );//sets background collour
  ;
  
     cp5.addButton("Up")     //"Up" is the name of button
    .setPosition(165, 285)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,168,67 ) );//sets background collour
     textSize(12); 
  ; 
  
     cp5.addButton("Down")     //"Down" is the name of button
    .setPosition(260, 285)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,168,67 ) );//sets background collour
     textSize(12); 
  ; 
  
    cp5.addButton("Pulse_Up")     //"Pulse_Up" is the name of button
    .setPosition(165, 240)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,168,67  ) );//sets background collour
  ;
  
     cp5.addButton("Pulse_Down")     //"Pulse_Down" is the name of button
    .setPosition(260, 240)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 52,168,67  ) );//sets background collour
  ;
  
     cp5.addButton("Open")     //"Open" is the name of button
    .setPosition(305, 340)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)       //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 127,52,168 ) );//sets background collour
     textSize(12); 
  ; 
  
      cp5.addButton("Close")     //"Close" is the name of button
    .setPosition(305, 385)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)       //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 127,52,168 ) );//sets background collour
     textSize(12); 
  ; 
  
    cp5.addButton("Pulse_Open")     //"Pulse_Open" is the name of button
    .setPosition(395, 340)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 127,52,168  ) );//sets background collour
  ;
  
  cp5.addButton("Pulse_Close")     //"Pulse_Close" is the name of button
    .setPosition(395, 385)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 127,52,168  ) );//sets background collour
  ;
  
  cp5.addButton("STOP")     //"STOP" is the name of button
    .setPosition(200, 330)  //x and y coordinates of upper left corner of button
    .setSize(100, 100)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 168,66,52  ) );//sets background collour
     
  ;
  
  cp5.addButton("Move_Block")     //"Move_Block" is the name of button
    .setPosition(10, 50)  //x and y coordinates of upper left corner of button
    .setSize(85, 40)      //(width, height)
    .setFont(font)//sets the font to be the previously set font 
    .setColorBackground( color( 61,202,191  ) );//sets background collour
  ;
    
  
}

void draw(){  //draw UI elements 


  background(89, 92 , 91); // background color of window (r, g, b) 
 
  image (img,600,10,600,480);///inset image (location,location,size,size)
  
  fill(50, 207, 242);               //text color (r, g, b)
  textFont(font2);//set title font to font2
  text("Josh's Robot Arm Controller V4.0", 80, 30);  // ("text", x coordinate, y coordinat) title 
  
  

}


//functionsfor buttons
//when you press any button, it sends perticular char over serial port
//clockwise button///
void Clockwise(){
port.write('a');//send a to serial 
}
/////////////
//Anti clockwise button
void AntiClockwise(){//send b to serial 
port.write('b');
}
////////////
///Forward button//
void Forward(){
port.write('d');//send d to serial 
}
///
///Backward button///
void Backward(){
port.write('c');//send c to serial 
}
////
//Up button///
void Up(){
port.write('e');//send e to serial 

}
///////////
///Down Button////
void Down(){
port.write('f');//send f to serial 
}
/////
//Open Button///
void Open(){
port.write('g');//send g to serial 
}
/////
///Colse button////
void Close(){
port.write('h');//send h to serial 
}
////
///Stop button///
void STOP(){
port.write('i');//send i to serial 
}
/////
///Pulse open///
void Pulse_Open(){
port.write('j');//send j to serial 
}
//////
///Pulse close////
void Pulse_Close(){
port.write('k');//send k to serial 
}
/////////
///Pulse clockwise////
void Pulse_CW(){
port.write('l');//send l to serial 
}
/////////
///Oulse anticlockwise////
void Pulse_ACW(){ //<>//
port.write('m');//send m to serial 
}
/////////
///Pulse forward////
void Pulse_FWD(){
port.write('o');//send o to serial 
}
/////////
///Pulse backward////
void  Pulse_BWD(){
port.write('n');//send n to serial 
}
//////////
///Pulse up////
void Pulse_Up(){
port.write('q');//send q to serial 
}
////////////
///Pulse down///////
void Pulse_Down(){
port.write('p');//send p to serial 
}
/////////////
////Move block///////
void Move_Block(){
port.write('r');//send r to serial 
}
////////////
