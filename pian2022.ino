#define DO 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392
#define T_A 440
#define SI 494

/*************************************************
 * The pitches for the songs
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

//vector for the first melody
int melody4[] = {
  NOTE_FS5,8, NOTE_FS5,8,NOTE_D5,8, NOTE_B4,8, REST,8, NOTE_B4,8, REST,8, NOTE_E5,8, 
  REST,8, NOTE_E5,8, REST,8, NOTE_E5,8, NOTE_GS5,8, NOTE_GS5,8, NOTE_A5,8, NOTE_B5,8,
  NOTE_A5,8, NOTE_A5,8, NOTE_A5,8, NOTE_E5,8, REST,8, NOTE_D5,8, REST,8, NOTE_FS5,8, 
  REST,8, NOTE_FS5,8, REST,8, NOTE_FS5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8,
  NOTE_FS5,8, NOTE_FS5,8,NOTE_D5,8, NOTE_B4,8, REST,8, NOTE_B4,8, REST,8, NOTE_E5,8, 
  
  REST,8, NOTE_E5,8, REST,8, NOTE_E5,8, NOTE_GS5,8, NOTE_GS5,8, NOTE_A5,8, NOTE_B5,8,
  NOTE_A5,8, NOTE_A5,8, NOTE_A5,8, NOTE_E5,8, REST,8, NOTE_D5,8, REST,8, NOTE_FS5,8, 
  REST,8, NOTE_FS5,8, REST,8, NOTE_FS5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8,
  NOTE_FS5,8, NOTE_FS5,8,NOTE_D5,8, NOTE_B4,8, REST,8, NOTE_B4,8, REST,8, NOTE_E5,8, 
  REST,8, NOTE_E5,8, REST,8, NOTE_E5,8, NOTE_GS5,8, NOTE_GS5,8, NOTE_A5,8, NOTE_B5,8,
  
  NOTE_A5,8, NOTE_A5,8, NOTE_A5,8, NOTE_E5,8, REST,8, NOTE_D5,8, REST,8, NOTE_FS5,8, 
  REST,8, NOTE_FS5,8, REST,8, NOTE_FS5,8, NOTE_E5,8, NOTE_E5,8, NOTE_FS5,8, NOTE_E5,8,
};

//vector for the second melody
int melody2[] = {
   // Asa branca - Luiz Gonzaga
  // Score available at https://musescore.com/user/190926/scores/181370

  NOTE_G4,8, NOTE_A4,8, NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_B4,4, 
  NOTE_C5,4, NOTE_C5,2, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_C5,4,

  NOTE_B4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,
  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,

  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,

  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,
  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,

  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,
  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,
  NOTE_G4,-2, REST,4
  
};

//tempo = 140
int melody3[] = {

  // Silent Night, Original Version
  // Score available at https://musescore.com/marcsabatella/scores/3123436
  NOTE_G4,-4, NOTE_A4,8, NOTE_G4,4,
  NOTE_E4,-2, 
  NOTE_G4,-4, NOTE_A4,8, NOTE_G4,4,
  NOTE_E4,-2, 
  NOTE_D5,2, NOTE_D5,4,
  NOTE_B4,-2,
  NOTE_C5,2, NOTE_C5,4,
  NOTE_G4,-2,

  NOTE_A4,2, NOTE_A4,4,
  NOTE_C5,-4, NOTE_B4,8, NOTE_A4,4,
  NOTE_G4,-4, NOTE_A4,8, NOTE_G4,4,
  NOTE_E4,-2, 
  NOTE_A4,2, NOTE_A4,4,
  NOTE_C5,-4, NOTE_B4,8, NOTE_A4,4,
  NOTE_G4,-4, NOTE_A4,8, NOTE_G4,4,
  NOTE_E4,-2, 
  
  NOTE_D5,2, NOTE_D5,4,
  NOTE_F5,-4, NOTE_D5,8, NOTE_B4,4,
  NOTE_C5,-2,
  NOTE_E5,-2,
  NOTE_C5,4, NOTE_G4,4, NOTE_E4,4,
  NOTE_G4,-4, NOTE_F4,8, NOTE_D4,4,
  NOTE_C4,-2,
  NOTE_C4,-1,
};

int melody1[] = {

  // Hedwig's theme fromn the Harry Potter Movies
  // Socre from https://musescore.com/user/3811306/scores/4906610
  
  REST, 2, NOTE_D4, 4,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_C5, -2, 
  NOTE_A4, -2,
  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4,
  NOTE_F4, 2, NOTE_GS4, 4,
  NOTE_D4, -1, 
  NOTE_D4, 4,

  NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, //10
  NOTE_G4, 2, NOTE_D5, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_B4, 4,
  NOTE_G4, -1,
  NOTE_AS4, 4,
     
  NOTE_D5, 2, NOTE_AS4, 4,//18
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_DS5, 2, NOTE_D5, 4,
  NOTE_CS5, 2, NOTE_A4, 4,
  NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_D4, 4,
  NOTE_D5, -1, 
  REST,4, NOTE_AS4,4,  

  NOTE_D5, 2, NOTE_AS4, 4,//26
  NOTE_D5, 2, NOTE_AS4, 4,
  NOTE_F5, 2, NOTE_E5, 4,
  NOTE_DS5, 2, NOTE_B4, 4,
  NOTE_DS5, -4, NOTE_D5, 8, NOTE_CS5, 4,
  NOTE_CS4, 2, NOTE_AS4, 4,
  NOTE_G4, -1,  
  
};


int notedurations1[] = {
   8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 4, 8, 8, 8, 8, 2
};

int notedurations2[] = {
   3, 6, 6, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 3, 6, 6, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 3, 6, 6, 3, 6, 
  6, 6, 6, 6, 6, 6, 6, 6, 6, 3, 6, 6, 3, 6, 6, 8, 6, 6, 6, 6, 6, 6, 6,
};

int notes = 0;

int divider = 0, noteDuration = 0;

unsigned const LED = 13;
unsigned const BUTTON = 2;
const int BUZZER_PIN        = A2;
const int ANALOG_THRESHOLD  = 500;


const int BUTTON_C = 6;
const int BUTTON_D = 5;
const int BUTTON_E = 4;
const int BUTTON_F = 3;
const int BUTTON_G = 7;
const int BUTTON_A = 9;
const int BUTTON_S = 10;
unsigned const BUTTON_T = 8;
const int MUSIC = 11;
const int STOP = 12;

int status = false;
int status_t = false;
int on = 0;
int t = 0;
int mode2 = false;
int song = 1;
uint8_t btn_prev_c;
uint8_t btn_prev_d;
uint8_t btn_prev_e;
uint8_t btn_prev_f;
uint8_t btn_prev_g;
uint8_t btn_prev_a;
uint8_t btn_prev_s;
uint8_t btn_prev_music;
uint8_t btn_prev_stop;
uint8_t btn_prev_t;


void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
    pinMode(BUZZER_PIN, INPUT);

    pinMode(BUTTON_T, INPUT_PULLUP);
    btn_prev_t = digitalRead(BUTTON_T);
 
    pinMode(BUTTON_C, INPUT_PULLUP);
    btn_prev_c = digitalRead(BUTTON_C);

    pinMode(BUTTON_D, INPUT_PULLUP);
    btn_prev_d = digitalRead(BUTTON_D);

    pinMode(BUTTON_E, INPUT_PULLUP);
    btn_prev_e = digitalRead(BUTTON_E);

    pinMode(BUTTON_F, INPUT_PULLUP);
    btn_prev_f = digitalRead(BUTTON_F);

    pinMode(BUTTON_G, INPUT_PULLUP);
    btn_prev_g = digitalRead(BUTTON_G);

    pinMode(BUTTON_A, INPUT_PULLUP);
    btn_prev_a = digitalRead(BUTTON_A);
    
    pinMode(BUTTON_S, INPUT_PULLUP);
    btn_prev_s = digitalRead(BUTTON_S);

    pinMode(MUSIC, INPUT_PULLUP);
    btn_prev_music = digitalRead(MUSIC);
    
    pinMode(STOP, INPUT_PULLUP);
    btn_prev_stop = digitalRead(STOP);
}


void loop()
{
  if (digitalRead(BUTTON) == true) {
    status = !status;
    Serial.println(on);
    if (status == 1) {
      on = 1;
      digitalWrite(LED, HIGH);
    }else {
      on = 0;
      digitalWrite(LED, LOW);
    }
   } 

     uint8_t btn_t = digitalRead(BUTTON_T);
   if (btn_t == LOW && btn_prev_t == HIGH && on == 1) { 
    status_t = !status_t;

    if (status_t == 1 && mode2 == 0) {
       t = 1;
       mode2 = !mode2;
       Serial.println("pressed mode 1");
       Serial.println(t);
      } else  if (status_t == 1 && mode2 == 1) {
        t = 2;
        mode2 = 0;
        Serial.println("pressed mode 2");
        Serial.println(t);
      } else {
          t = 0;
          Serial.println("unpressed trumpet mode");
          Serial.println(t);
      }
      
     
      digitalWrite(LED,HIGH);
      delay(100);
   }
   
   uint8_t btn_c = digitalRead(BUTTON_C);
   if (btn_c == LOW && btn_prev_c == HIGH && on == 1) { 
       Serial.println("pressed DO");
       if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, 262);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1915 );
        } else if (t == 2) {
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1088);
          }

       digitalWrite(LED,HIGH);
      delay(300);
   }

   uint8_t btn_d = digitalRead(BUTTON_D);
   if (btn_d == LOW && btn_prev_d == HIGH && on == 1) { 
       Serial.println("pressed RE");
       
        if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, T_D);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1700 );
        } else if (t == 2) {
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 997);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

  uint8_t btn_e = digitalRead(BUTTON_E);
   if (btn_e == LOW && btn_prev_e == HIGH && on == 1) { 
       Serial.println("pressed MI");
        if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, T_E);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1519);
        } else if (t == 2) {
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 924);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

  uint8_t btn_f = digitalRead(BUTTON_F);
   if (btn_f == LOW && btn_prev_f == HIGH && on == 1) { 
       Serial.println("pressed FA");
         if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, T_F);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1432 );
        } else if (t == 2) {
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 890);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

     uint8_t btn_g = digitalRead(BUTTON_G);
   if (btn_g == LOW && btn_prev_g == HIGH && on == 1) { 
       Serial.println("pressed SO");
         if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, T_G);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 1275);
        } else if (t == 2) {
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 820);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

        uint8_t btn_a = digitalRead(BUTTON_A);
   if (btn_a == LOW && btn_prev_a == HIGH && on == 1) { 
       Serial.println("pressed LA");
        if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, T_A);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN,  1014);
        } else if (t == 2) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, 727);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

       uint8_t btn_s = digitalRead(BUTTON_S);
   if (btn_s == LOW && btn_prev_s == HIGH && on == 1) { 
       Serial.println("pressed SI");
          if (t == 0) {
           pinMode(BUZZER_PIN, OUTPUT);
           tone(BUZZER_PIN, SI);
        } else if (t == 1){
          pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 956 );
        } else if (t == 2) {
           pinMode(BUZZER_PIN, OUTPUT);
          tone(BUZZER_PIN, 700);
        }
       digitalWrite(LED,HIGH);
      delay(300);
   }

   uint8_t btn_music = digitalRead(MUSIC);
   if (btn_music == LOW && btn_prev_music == HIGH && on == 1) { 
      
        if (song == 1) {
           Serial.println("pressed music 1");
       notes = sizeof(melody1) / sizeof(melody1[0]);
       playSong(melody1, notes, 144);
       song++;
     }else if (song == 2) {
       Serial.println("pressed music 2");
       notes = sizeof(melody2) / sizeof(melody2[0]);
       playSong(melody2, notes, 120);
       song++;
     } else if (song == 3) {
       Serial.println("pressed music 3");
       notes = sizeof(melody3) / sizeof(melody3[0]);
       playSong(melody3, notes, 140);
       song ++;
     }else if (song == 4) {
       Serial.println("pressed music 4");
       notes = sizeof(melody4) / sizeof(melody4[0]);
       playSong(melody4, notes, 140);
       song = 1;
     }
   }
    
    btn_prev_c = digitalRead(BUTTON_C);
    btn_prev_d = digitalRead(BUTTON_D);
    btn_prev_e = digitalRead(BUTTON_E);
    btn_prev_f = digitalRead(BUTTON_F);
    btn_prev_g = digitalRead(BUTTON_G);
    btn_prev_a = digitalRead(BUTTON_A);
    btn_prev_s = digitalRead(BUTTON_S);
    
    while(digitalRead(BUTTON) == true && digitalRead(BUTTON_C) == true);
    noTone(BUZZER_PIN);
    pinMode(BUZZER_PIN, INPUT);
    delay(300);

}

void playSong(int melody[], int notes, int tempo){
  // this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    pinMode(BUZZER_PIN, OUTPUT);
    tone(BUZZER_PIN, melody[thisNote]);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);
    
    noTone(BUZZER_PIN);
    pinMode(BUZZER_PIN, INPUT);
    
    //stop the song 
   if (digitalRead(STOP) == LOW){
      break;
     thisNote = notes*2 +1;}  
  } 

}
