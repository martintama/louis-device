#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

#define pinServo1 A0
#define pinServo2 A1
#define pinServo3 A2
#define pinServo4 A3
#define pinServo5 A4
#define pinServo6 A5

#define MOVE_UP_123 35
#define MOVE_DN_123 10

#define MOVE_UP_456 155
#define MOVE_DN_456 180


const int BRAILLE_A[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_B[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_C[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};

const int BRAILLE_D[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_E[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_F[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};

const int BRAILLE_G[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_H[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_I[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};

const int BRAILLE_J[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_K[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_L[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};

const int BRAILLE_M[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_N[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_NTILDE[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};

const int BRAILLE_O[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_P[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_Q[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};

const int BRAILLE_R[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_S[] = {MOVE_DN_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_T[] = {MOVE_DN_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_DN_456};

const int BRAILLE_U[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_V[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_W[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};

const int BRAILLE_X[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_Y[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};
const int BRAILLE_Z[] = {MOVE_UP_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_UP_456, MOVE_UP_456};

const int BRAILLE_AACUTE[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_DN_456, MOVE_UP_456, MOVE_UP_456};
const int BRAILLE_EACUTE[] = {MOVE_DN_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_IACUTE[] = {MOVE_DN_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_OACUTE[] = {MOVE_DN_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_UACUTE[] = {MOVE_DN_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};

const int BRAILLE_UUML[] = {MOVE_UP_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_UP_456, MOVE_UP_456};
const int BRAILLE_EXCLAMATION[] = {MOVE_DN_123, MOVE_UP_123, MOVE_UP_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_QUESTION[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_SHARP[] = {MOVE_DN_123, MOVE_DN_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};

const int BRAILLE_0[] = {MOVE_DN_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_1[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_2[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_3[] = {MOVE_DN_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_4[] = {MOVE_DN_123, MOVE_DN_123, MOVE_DN_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_5[] = {MOVE_DN_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_6[] = {MOVE_DN_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_UP_456};
const int BRAILLE_14[] = {MOVE_UP_123, MOVE_DN_123, MOVE_DN_123, MOVE_UP_456, MOVE_DN_456, MOVE_DN_456};
const int BRAILLE_25[] = {MOVE_DN_123, MOVE_UP_123, MOVE_DN_123, MOVE_DN_456, MOVE_UP_456, MOVE_DN_456};
const int BRAILLE_36[] = {MOVE_DN_123, MOVE_DN_123, MOVE_UP_123, MOVE_DN_456, MOVE_DN_456, MOVE_UP_456};

const int BRAILLE_UP[] = {MOVE_UP_123, MOVE_UP_123, MOVE_UP_123, MOVE_UP_456, MOVE_UP_456, MOVE_UP_456};
const int BRAILLE_DN[] = {MOVE_DN_123, MOVE_DN_123, MOVE_DN_123, MOVE_DN_456, MOVE_DN_456, MOVE_DN_456};

const int SERVOS[6] = {pinServo1, pinServo2, pinServo3, pinServo4, pinServo5, pinServo6};

char state = '!';
char prev_state = '!';
int letra_br[6] = {};

void setup() {
  //start the Serial connection
  Serial.begin(115200);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW

  //Inicializo los servos en DOWN position
  for (int i = 0 ; i < 3; i++) {
    state = attach_and_move(SERVOS[i], BRAILLE_DN[i],SERVOS[i+3], BRAILLE_DN[i+3]);
    //Serial.print("El servo esta en : [" ); Serial.print(state, DEC); Serial.println("]");
  }

  //Por si al principio hay mugre
  memcpy_funcional(letra_br, BRAILLE_DN, 6);

}

void loop() {

  if (Serial.available()) {
    char state = Serial.read();

    switch (state) {
      case 'a':
        //Serial.println("Recibi A");
        memcpy_funcional(letra_br, BRAILLE_A, 6);
        break;

      case 'b':
        //Serial.println("Recibi B");
        memcpy_funcional(letra_br, BRAILLE_B, 6);
        break;

      case 'c':
        //Serial.println("Recibi c");
        memcpy_funcional(letra_br, BRAILLE_C, 6);
        break;
      
      case 'd':
        //Serial.println("Recibi d");
        memcpy_funcional(letra_br, BRAILLE_D, 6);
        break;
      
      case 'e':
        //Serial.println("Recibi e");
        memcpy_funcional(letra_br, BRAILLE_E, 6);
        break;
      
      case 'f':
        //Serial.println("Recibi f");
        memcpy_funcional(letra_br, BRAILLE_F, 6);
        break;
      
      case 'g':
        //Serial.println("Recibi g");
        memcpy_funcional(letra_br, BRAILLE_G, 6);
        break;
      
      case 'h':
        //Serial.println("Recibi h");
        memcpy_funcional(letra_br, BRAILLE_H, 6);
        break;
      
      case 'i':
        //Serial.println("Recibi i");
        memcpy_funcional(letra_br, BRAILLE_I, 6);
        break;
      
      case 'j':
        //Serial.println("Recibi j");
        memcpy_funcional(letra_br, BRAILLE_J, 6);
        break;
        
      case 'k':
    //  Serial.println("Recibi k");
      memcpy_funcional(letra_br, BRAILLE_K, 6);
      break;
    
    case 'l':
    //  Serial.println("Recibi l");
      memcpy_funcional(letra_br, BRAILLE_L, 6);
      break;
    
    case 'm':
    //  Serial.println("Recibi m");
      memcpy_funcional(letra_br, BRAILLE_M, 6);
      break;
    
    case 'n':
    //  Serial.println("Recibi n");
      memcpy_funcional(letra_br, BRAILLE_N, 6);
      break;
  
    case 'o':
    //  Serial.println("Recibi o");
      memcpy_funcional(letra_br, BRAILLE_O, 6);
      break;
    
    case 'p':
    //  Serial.println("Recibi p");
      memcpy_funcional(letra_br, BRAILLE_P, 6);
      break;
  
    case 'q':
    //  Serial.println("Recibi q");
      memcpy_funcional(letra_br, BRAILLE_Q, 6);
      break;
    
    case 'r':
    //  Serial.println("Recibi r");
      memcpy_funcional(letra_br, BRAILLE_R, 6);
      break;
    
    case 's':
    //  Serial.println("Recibi s");
      memcpy_funcional(letra_br, BRAILLE_S, 6);
      break;
    
    case 't':
    //  Serial.println("Recibi t");
      memcpy_funcional(letra_br, BRAILLE_T, 6);
      break;
    
    case 'u':
    //  Serial.println("Recibi u");
      memcpy_funcional(letra_br, BRAILLE_U, 6);
      break;
    
    case 'v':
    //  Serial.println("Recibi v");
      memcpy_funcional(letra_br, BRAILLE_V, 6);
      break;
    
    case 'w':
    //  Serial.println("Recibi w");
      memcpy_funcional(letra_br, BRAILLE_W, 6);
      break;
    
    case 'x':
    //  Serial.println("Recibi x");
      memcpy_funcional(letra_br, BRAILLE_X, 6);
      break;
    
    case 'y':
    //  Serial.println("Recibi y");
      memcpy_funcional(letra_br, BRAILLE_Y, 6);
      break;
    
    case 'z':
    //  Serial.println("Recibi z");
      memcpy_funcional(letra_br, BRAILLE_Z, 6);
      break;
      
    case '!':
    //  Serial.println("Recibi !");
      memcpy_funcional(letra_br, BRAILLE_EXCLAMATION, 6);
      break;
    
    case '?':
    //  Serial.println("Recibi ?");
      memcpy_funcional(letra_br, BRAILLE_QUESTION, 6);
      break;
    
    case '#':
    //  Serial.println("Recibi #");
      memcpy_funcional(letra_br, BRAILLE_SHARP, 6);
      break;    
      
    case '0':
    //  Serial.println("Recibi 0");
      memcpy_funcional(letra_br, BRAILLE_0, 6);
      break;
    
    case '1':
    //  Serial.println("Recibi 1");
      memcpy_funcional(letra_br, BRAILLE_1, 6);
      break;
    
    case '2':
    //  Serial.println("Recibi 2");
      memcpy_funcional(letra_br, BRAILLE_2, 6);
      break;
    
    case '3':
    //  Serial.println("Recibi 3");
      memcpy_funcional(letra_br, BRAILLE_3, 6);
      break;
    
    case '4':
    //  Serial.println("Recibi 4");
      memcpy_funcional(letra_br, BRAILLE_4, 6);
      break;
    
    case '5':
    //  Serial.println("Recibi 5");
      memcpy_funcional(letra_br, BRAILLE_5, 6);
      break;
    
    case '6':
    //  Serial.println("Recibi 6");
      memcpy_funcional(letra_br, BRAILLE_6, 6);
      break;
    
    case '7': 
    //  Serial.println("Recibi 7");
      memcpy_funcional(letra_br, BRAILLE_14, 6);
      break;
    
    case '8':
    //  Serial.println("Recibi 8");
      memcpy_funcional(letra_br, BRAILLE_25, 6);
      break;
      
    case '9':
  //  Serial.println("Recibi 9");
    memcpy_funcional(letra_br, BRAILLE_36, 6);
    break;

  case 'A':
//    Serial.println("Recibi A");
    memcpy_funcional(letra_br, BRAILLE_UP, 6);
    break;

  case 'B':
//    Serial.println("Recibi B");
    memcpy_funcional(letra_br, BRAILLE_DN, 6);
    break;
    
      case 'Z':
    //  Serial.println("Recibi á");
      memcpy_funcional(letra_br, BRAILLE_AACUTE, 6);
      break;
    
    case 'Y':
    //  Serial.println("Recibi é");
      memcpy_funcional(letra_br, BRAILLE_EACUTE, 6);
      break;
    
    case 'X':
    //  Serial.println("Recibi í");
      memcpy_funcional(letra_br, BRAILLE_IACUTE, 6);
      break;
    
    case 'W':
    //  Serial.println("Recibi ó");
      memcpy_funcional(letra_br, BRAILLE_OACUTE, 6);
      break;
    
    case 'V':
    //  Serial.println("Recibi ú");
      memcpy_funcional(letra_br, BRAILLE_UACUTE, 6);
      break;
    
    case 'U':
    //  Serial.println("Recibi ü");
      memcpy_funcional(letra_br, BRAILLE_UUML, 6);
      break;
      
    case 'T':
    //  Serial.println("Recibi ñ");
      memcpy_funcional(letra_br, BRAILLE_NTILDE, 6);
      break;
    }
    if (state != prev_state) {
      prev_state = state;
      for (int i = 0 ; i < 3; i++) {
        state = attach_and_move(SERVOS[i], letra_br[i],SERVOS[i+3], letra_br[i+3]);
        //Serial.print("El servo esta en : [" ); Serial.print(state, DEC); Serial.println("]");
      }
    }

  }
}

int attach_and_move (int nro_servo1, int mov1, int nro_servo2, int mov2) {
  int pos = 0;

  myservo.attach(nro_servo1);
  myservo2.attach(nro_servo2);
  
  myservo.write(mov1);
  myservo2.write(mov2);
  
  delay(200);

  pos = myservo.read();
  myservo.detach();
  myservo2.detach();
  return pos;
}

void memcpy_funcional (int *array1, const int *array2, int arr_size) {
  for (int i = 0; i < arr_size; i++) {
    array1[i] = array2[i];
  }
}
