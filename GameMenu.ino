unsigned long timestamp_1a = millis();
unsigned long timestamp_2a = millis();
unsigned long timestamp_3a = millis();
unsigned long timestamp_4a = millis();
unsigned long timestamp_5a = millis();
unsigned long timestamp_6a = millis();
unsigned long timestamp_7a = millis();
unsigned long timestamp_8a = millis();
unsigned long timestamp_9a = millis();
unsigned long timestamp_spawn = millis();
unsigned long timestamp_Y = millis();
unsigned long timestamp_bulletSp = millis();
unsigned long timestamp_spawnSp = millis();
byte disp[8] = {};
//int hpArr[8] = {1,1,1,1,1,1,1,1};
int loadinginArr0[8]= {255,129,129,129,129,129,129,255};
int loadinginArr1[8]= {255,255,195,195,195,195,255,255};
int loadinginArr2[8]= {255,255,255,231,231,255,255,255};
int loadinginArr3[8]= {255,255,255,255,255,255,255,255};
int tetrisArr[8] = {255,129,131,135,147,145,177,255};
int snakeArr[8] = {255,129,137,129,241,129,129,255};
int spaceShooterArr[8] = {255,145,193,135,161,145,129,255};
int fallingArr[8] = {255,145,145,145,131,129,145,255};
int counterGames = 0;
bool wasUsed = false;
int numbSp[8];
int shipSp[2] = {51, 59};
int oldShipSp[2] = {51, 59};
int defShipSp[2] = {51, 59};
int fallingAmount = 5;
int topLeft = 27;
int topRight = 28;
int bottomLeft = 35;
int bottomRight = 36;
int fallingSp[5] = {1,3,4,7,6};
int hp = 8;
int missed = 0;
int bulletSp = 421;
bool wasPressedSp = false;
int button = 11;
int icon = 1;
bool wasPressed = false;
bool selectedTe = false;
bool selectedFa = false;
bool selectedSn = false;
bool selectedSp = false;
bool playingSn = false;
bool playingSp = false;
bool playingFa = false;
bool playingTe = false;
int highScoreFa = 0;
int highScoreSn = 0;
int highScoreT = 0;
int highScoreSp = 0;
int score = 0; 
int playerF = 59;
int fallingAmountF = 8;
int defFall0F[6][8] = {{69,69,69,3,4,5,6,7},
                      {0,69,69,69,4,5,6,7},
                      {0,1,69,69,69,5,6,7},
                      {0,1,2,69,69,69,6,7},
                      {0,1,2,3,69,69,69,7},
                      {0,1,2,3,4,69,69,69},  
};
int defFall1F[7][8] = {{69,69,2,3,4,5,6,7},
                      {0,69,69,3,4,5,6,7},
                      {0,1,69,69,4,5,6,7},
                      {0,1,2,69,69,5,6,7},
                      {0,1,2,3,69,69,6,7},
                      {0,1,2,3,4,69,69,7},
                      {0,1,2,3,4,5,69,69},             
};
int defFall2F[8][8] = {{69,1,2,3,4,5,6,7},
                      {0,69,2,3,4,5,6,7},
                      {0,1,69,3,4,5,6,7},
                      {0,1,2,69,4,5,6,7},
                      {0,1,2,3,69,5,6,7},
                      {0,1,2,3,4,69,6,7},
                      {0,1,2,3,4,5,69,7},
                      {0,1,2,3,4,5,6,69},
};
int fallingF[8];
int falling1F[8];
int currentFallF = 0;
int currentFall1F = 4;
bool shouldSpawnF = true;
bool shouldSpawn1F = false;
int defB[7][4] = {
                  {4,12,20,12}, //0
                  {5,13,12,11}, //1
                  {3,4,12,13},  //2
                  {5,4,12,11},  //3
                  {4,11,12,13}, //4
                  {3,11,12,13}, //5
                  {3,4,11,12}   //6
};
int rotate[7][4][4] = {
                        {{0,0,0,0}, {9,0,-9,0}, {16,0,-16,0}, {7,0,-7,0}}, //0
                        {{0,0,0,0}, {16,7,0,-7}, {14,-2,0,2}, {-2,-9,0,9}},//1
                        {{0,0,0,0}, {2,9,0,7},{10,8,-8,-10},{17,8,1,-8}},  //2
                        {{0,0,0,0}, {16,9,0,-7}, {6,8,-8,-6}, {-1,8,1,10}},//3
                        {{0,0,0,0}, {9,-7,0,7}, {16,2,0,-2}, {7,9,0,-9}},  //4
                        {{0,0,0,0}, {2,-7,0,7}, {18,2,0,-2},{16,9,0,-9}},  //5
                        {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}}       //6
                      };
int tens[10][8] = {
  {0,0,0,0,0,124,68,124},     //0
  {0,0,0,0,0,124,32,16},      //1
  {0,0,0,0,0,116,84,92},      //2
  {0,0,0,0,0,124,84,84},      //3
  {0,0,0,0,0,124,16,112},     //4
  {0,0,0,0,0,92,84,116},      //5
  {0,0,0,0,0,92,84,124},      //6
  {0,0,0,0,0,124,64,64},      //7
  {0,0,0,0,0,124,84,124},     //8
  {0,0,0,0,0,124,68,116}      //9
};
int units[10][8] = {
  {124,68,124,0,0,0,0,0},     //0
  {124,32,16,0,0,0,0,0},      //1
  {116,84,92,0,0,0,0,0},      //2
  {124,84,84,0,0,0,0,0},      //3
  {124,16,112,0,0,0,0,0},     //4
  {92,84,116,0,0,0,0,0},      //5
  {92,84,124,0,0,0,0,0},      //6
  {124,64,64,0,0,0,0,0},      //7
  {124,84,124,0,0,0,0,0},     //8
  {124,84,116,0,0,0,0,0}      //9
};
int lifes[9][8] = {
  {0,0,0,0,0,0,0,0},     //0
  {1,0,0,0,0,0,0,0},      //1
  {1,1,0,0,0,0,0,0},      //2
  {1,1,1,0,0,0,0,0},      //3
  {1,1,1,1,0,0,0,0},     //4
  {1,1,1,1,1,0,0,0},      //5
  {1,1,1,1,1,1,0,0},      //6
  {1,1,1,1,1,1,1,0},      //7
  {1,1,1,1,1,1,1,1},     //8
};
struct POS {
  int x = 0;
  int y = 0;
};
const int maxNumApple = 3;
POS apple[maxNumApple];
POS snake[64];
int counterApple = 0;
bool blink = false;
int snakeLength = 3;
unsigned long snakeSpeed;
int direction;
int newX = 0;
int newY = 1;
bool down = false;
bool up = false;
bool right = false;
bool left = false;
byte counterAvg;
int resultAvg;
int speedS = 300;
int fallB[4]{};
int fallBOld[4]{};
int fallBDefault[4]{};
bool layB[64]{};
bool layBOld[64]{};
bool zeroleft = false;
bool zeroright = false;
bool sevenleft = false;
bool sevenright = false;
int rowC = 0; 
bool playing = false;
bool hasLost = false;
bool tooHigh = false;
bool tooLow = false;  
int rotationC = 0;
bool allowSpeed = true;
bool allowBeam = true;
int currentB = 0;
int oldB = 0; 
int speedT = 2000;
bool rowRemoved = false;
int layer = 0;
bool rotateRight = false;
bool rotateLeft = false;
int DIN1 = 2;
int LOAD1 = 3;
int CLK1 = 4;
int DIN2 = 5;
int LOAD2 = 6;
int CLK2 = 7;
byte DECODE_MODE = 9;
byte INTENSITY = 10;
byte SCAN_LIMIT = 11;
byte SHUTDOWN = 12;
byte DISPLAY_TEST = 15;

void writeMax(byte Address, byte Data) 
{
  digitalWrite(LOAD1, LOW);
  for (int i = 7; i >= 0; i--) {
    digitalWrite(CLK1, LOW);
    digitalWrite(DIN1, bitRead(Address, i));
    digitalWrite(CLK1, HIGH);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(CLK1, LOW);
    digitalWrite(DIN1, bitRead(Data, i));
    digitalWrite(CLK1, HIGH);
  }
  digitalWrite(LOAD1, HIGH);
}
void writeMax2(byte Address, byte Data) 
{
  digitalWrite(LOAD2, LOW);
  for (int i = 7; i >= 0; i--) {
    digitalWrite(CLK2, LOW);
    digitalWrite(DIN2, bitRead(Address, i));
    digitalWrite(CLK2, HIGH);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(CLK2, LOW);
    digitalWrite(DIN2, bitRead(Data, i));
    digitalWrite(CLK2, HIGH);
  }
  digitalWrite(LOAD2, HIGH);
}
void clearDisp() 
{
  for (int j = 0; j < 64; j++) {
      setPoint(j, false);
  }
  drawArray();
}

void setup() 
{
  Serial.begin(9600);
  delay(2000);

  pinMode(DIN1, OUTPUT);
  pinMode(LOAD1, OUTPUT);
  pinMode(CLK1, OUTPUT);

  pinMode(DIN2, OUTPUT);
  pinMode(LOAD2, OUTPUT);
  pinMode(CLK2, OUTPUT);
  
  pinMode(button, INPUT_PULLUP);

  digitalWrite(DIN1, LOW);
  digitalWrite(LOAD1, LOW);
  digitalWrite(CLK1, LOW);

  digitalWrite(DIN2, LOW);
  digitalWrite(LOAD2, LOW);
  digitalWrite(CLK2, LOW);

  delay(2000);

  writeMax(SHUTDOWN, 1);
  writeMax(DECODE_MODE, 0);
  writeMax(INTENSITY, 2);
  writeMax(SCAN_LIMIT, 7);
  writeMax(DISPLAY_TEST, 0);

  writeMax2(SHUTDOWN, 1);
  writeMax2(DECODE_MODE, 0);
  writeMax2(INTENSITY, 2);
  writeMax2(SCAN_LIMIT, 7);
  writeMax2(DISPLAY_TEST, 0);

  for (int i = 0; i <= 64; i++)
    setPoint(i, false);
  drawArray();

  for (int i = 0; i < 4; i++)
  {
    fallB[i] = defB[currentB][i];
    fallBDefault[i] = defB[currentB][i];
  }

  for (int i = 0; i < 4; i++)
  { 
    fallB[i] -= 8;
    fallBDefault[i] -= 8;
  }
  for(int i = 0; i < 2; i++)
  {
    shipSp[i] = defShipSp[i];
    oldShipSp[i] = defShipSp[i];
  }
  for (int i = 0; i < 8; i++)
  {
    fallingF[i] = defFall0F[currentFallF][i];
    falling1F[i] = 69;
  }
  randomSeed(analogRead(A0));
  for (int i = 0; i < snakeLength; i++) {
    snake[i].y = 4 - i;
    snake[i].x = 3;
  }
  newY = 4;
  resetApple();
  setApple();
}
void resetApple()
{
  for(int i = 0; i < maxNumApple; i++)
  {
    apple[i].x = -1;
    apple[i].y = -1;
  }
}

bool collision()
{
  for (int i = 0; i < 64; i++)
  {
    for (int k = 0; k < 4; k++)
    {
      if ((layB[i] == true && fallB[k] == i) || fallB[k] >= 64)
      {
        return true;
      }
    }
  }
  return false;
}
void resetLayB()
{
  for (int i = 0; i < 64; i++)
  {
    layB[i] = false;
  }
}

void checkForCollision()
{
  if (collision() == true)
  {
    for (int j = 0; j < 4; j++)
      layB[fallBOld[j]] = true;
    for (int i = 0; i < 4; i++)
    {
      fallB[i] = defB[currentB][i];
      fallBDefault[i] = defB[currentB][i];
    }
    for (int i = 0; i < 64; i++)
    {
      if (layB[i] == true)
      setPoint(i, true);
    }
    drawArray();
    rotationC = 0;
    rowC = 0;
    oldB = currentB;
    currentB = random(0,7);
    allowSpeed = false;
    allowBeam = false;
    speedT = 2000;
    score++;
    delay(250);
    Serial.print("score: ");
    Serial.println(score);
  }
}

bool lost()
{
  for (int i = 0; i < 64; i++)
  {
    if ((layB[i] == true && (i == 3 || i == 4 || i == 5 || i == 11 || i == 12 || i == 13)) && (layB[i] == true && layB[i] != 0))
    {
      return true;
    }
  }
  return false;
}

void delRow()
{
  for(int j = 7; j >= 0; j--)
  {
    bool allLedOn = true;
    for (int i = 7; i >= 0; i--)
    {
      if (layB[j*8+i] == false)
      {
        allLedOn = false;
        break;
      }
    }
    if(allLedOn)
    {
      rowC++;
      for (int k = j*8; k <= j*8+7; k++)
      {
        for (int i = 7; i >= 0; i--)
        {
          layB[j*8+i] = false;
          setPoint(j*8+i, false);
          rowRemoved = true;
          layer = j;
        }
      }
    }
  }
  if (rowRemoved)
  {
    for (int i = 0; i < 64; i++)
    {
      if (layB[i] == true)
      {
        setPoint(i, false);
        drawArray();
      } 
    }
    for (int i = 0; i < 64; i++)
    {
      layBOld[i] = layB[i];
    }
    for (int i = 0; i < layer*8; i++)
    {
      layB[i] = false;
    }
    for (int i = 0; i < layer*8; i++)
    {
      if (layBOld[i] == true)
      {
        layB[i+8*rowC] = true;
      }
    }
    rowRemoved = false;
  }
}

void moveY()
{
  if (timerY(speedT) == true)
  {
    for (int i = 0; i < 4; i++)
      fallBOld[i] = fallB[i];

    for (int i = 0; i < 4; i++)
    {
      fallB[i] += 8;
      fallBDefault[i] += 8;
    }
    checkForCollision();
  }
  if (allowBeam && !digitalRead(button))
    speedT = 0;
  if (digitalRead(button))
    allowBeam = true;

  if (allowSpeed && analogRead(A2) > 600)
    speedT = map(analogRead(A2), 600, 1000, 2000, 200);;
  if (speedT < 0)
    speedT = 0;

  if (collision() == false)
  {
    allowSpeed = true;
  }
}
void drawBuildings()
{
  for (int i = 1; i < 64; i++)
  {
    if (layB[i] == true)
    setPoint(i, true);
  }
  for (int i = 0; i < 4; i++)
    setPoint(fallB[i], true);
  drawArray();
  for (int i = 0; i < 4; i++)
    setPoint(fallB[i], false);
}

void calcRotate()
{
  if (analogRead(A1) > 700)
  {
    if (timerRotate(300) == true)
    {
      rotationC++;
      rotationCcheck();
      runOutCheck();
      for (int i = 0; i < 4; i++)
        fallB[i] = fallBDefault[i] + rotate[oldB][rotationC][i];
    }
  }
  else if (analogRead(A1) < 300)
  {
    if (timerRotate(300) == true)
    {
      rotationC--;
      rotationCcheck();
      runOutCheck();
      for (int i = 0; i < 4; i++)
        fallB[i] = fallBDefault[i] + rotate[oldB][rotationC][i];
    }
  }
}

void rotationCcheck()
{
  if (rotationC > 3)
  {
    rotationC = 0;
  } else if (rotationC < 0) 
  {
    rotationC = 3;
  }  
}

void checkIfLost()
{
  if (lost() == true)
  {
    Serial.println("LOST");
    clearDisp();
    loadingScreenLost();
    clearDisp();
    rotationC = 0;
    hasLost = true;
    for (int i = 0; i < 64; i++)
      setPoint(i, false);
    drawArray();
    resetLayB();
    if (score > highScoreT)
      highScoreT = score;
    drawHighScore();
    drawScore();
    score = 0;
    currentB = random(0,7);
    oldB = currentB;
    for (int i = 0; i <= 4; i++)
    {
      fallB[i] = defB[currentB][i];
      fallBDefault[i] = defB[currentB][i];
    }
    delay(100);
    while (digitalRead(button)){}
    icon = 0;
    playing = false;
    playingTe = false;
    delay(223);
  }
}

void moveX()
{
  if (collision() == false)
  {
    if (analogRead(A3) > 700)
    { 
      if (timerX(200) == true)
      {
        bool movable = true;
        for (int i = 0; i < 4; i++)
        {
          for (int k = 0; k < 64; k++)
          {
            if(fallB[i]%8==0)
            {
              movable = false;
              break;
            }
            if (layB[k] == true && fallB[i]-1 == k)
            {
              movable = false;
              break;
            }
          }
        }
        if (movable)
        {
          for (int i = 0; i < 4; i++)
            fallBOld[i] = fallB[i];
          for (int i = 0; i < 4; i++)
          {
            fallB[i] -= 1;         //x--;
            fallBDefault[i] -= 1;
          }
        }
      }
    }
    else if (analogRead(A3) < 300)
    {
      if (timerX(200) == true)
      {
        bool movable = true;
        for (int i = 0; i < 4; i++)
        {
          for (int k = 0; k < 64; k++)
          {
            if(fallB[i]%8==7)
            {
              movable = false;
              break;
            }
            if (layB[k] == true && fallB[i]+1 == k)
            {
              movable = false;
              break;
            }
          }
        }
        if (movable)
        {
          for (int i = 0; i < 4; i++)
            fallBOld[i] = fallB[i];
          for (int i = 0; i < 4; i++)
          {
            fallB[i] += 1;         //x++;
            fallBDefault[i] += 1;
          }
        }
      }
    }
  }
}
void runOutCheck()
{
  bool shouldBreakR = false;
  bool shouldBreakL = false;
  bool con1 = false;
  bool con3 = false;
  for (int l = 0; l < 4; l++)
  if ((fallB[l] %8) < 5)
  {
    for (int i = 0; i < 4; i++)
    {
      if((fallBDefault[i] + rotate[oldB][rotationC][i]) %8==0)
      {
        con1 = true;
        break;
      }
    }
    for (int i = 0; i < 4; i++)
    {
      if(con1 == true && (fallBDefault[i] + rotate[oldB][rotationC][i]) %8==7)
      {
        for (int i = 0; i < 4; i++)
        {
          fallB[i] +=1;
          fallBDefault[i] +=1;
        }
        Serial.println("+=1");
        break;
      }
    }
  }
  else if ((fallB[l] %8) > 5)
  {
    for (int i = 0; i < 4; i++)
    {
      if((fallBDefault[i] + rotate[oldB][rotationC][i]) %8==7)
      {
        con3 = true;
        break;
      }
    }
    for (int i = 0; i < 4; i++)
    {
      if(con3 == true && (fallBDefault[i] + rotate[oldB][rotationC][i]) %8==0)
      {
        for (int i = 0; i < 4; i++)
        {
          fallB[i] -=1;
          fallBDefault[i] -=1;
        }
        Serial.println("-=1");
        break;
      }
    }
  }
  for (int k = 0; k < 64; k++)
  {
    for (int i = 0; i < 4; i++)
    {
      if ((fallBDefault[i] + rotate[oldB][rotationC][i]) +1 == k && layB[k] == true)
      {
        if (shouldBreakR)
        {
          break;
          shouldBreakR = true;
        }

        for (int j = 0; j < 4; j++)
          {
            fallB[j] -=1;
            fallBDefault[j] -=1;
            shouldBreakR = true;
            Serial.println("-=1 in for loop");
          }
        Serial.println("buildiung -=1");
      }
    }
  }
  for (int k = 0; k < 64; k++)
  {
    for (int i = 0; i < 4; i++)
    {
      if ((fallBDefault[i] + rotate[oldB][rotationC][i]) == k && layB[k] == true && (fallBDefault[i] + rotate[oldB][rotationC][i]) %8 != 7)
      {
        if (shouldBreakL)
        {
          break;
          shouldBreakL = false;
        }

        for (int j = 0; j < 4; j++)
          {
            fallB[j] +=1;
            fallBDefault[j] +=1;
            shouldBreakL = true;
          }
        Serial.println("buildiung +=1");
      }
    }
  }
}
void deathScreen() {
  for (int i = snakeLength - 1; i > 0; i--) 
  {
    if ((snake[i].x == newX && snake[i].y == newY) && snakeLength > 4) {
      Serial.println("Kaputt");
      clearDisp();
      loadingScreenLost();
      clearDisp();
      Serial.print("Score: ");
      Serial.println(score);
      if (score > highScoreSn)
         highScoreSn = score;
      drawHighScore();
      drawScore();
      score = 0;
      newX = 3;
      newY = 4;
      snakeLength = 3;
      direction = 1;
      resetApple();
      counterApple = 0;
      for (int i = 0; i < snakeLength; i++) {
        snake[i].y = 4 - i;
        snake[i].x = 3;
      }
      delay(100);
      while (digitalRead(button)) {}
      icon = 0;
      playing = false;
      playingSn = false;
      delay(223);
    }
  }
}

void buttonPress() 
{
  if (analogRead(A2) > 700 && direction != 1 && !up) {
    direction = 1;
  } else if (analogRead(A3) < 300 && direction != 2 && !left) {
    direction = 2;
  } else if (analogRead(A2) < 300 && direction != 3 && !down) {
    direction = 3;
  } else if (analogRead(A3) > 700 && direction != 4 && !right) {
    direction = 4;
  }
}

void move() 
{
  switch (direction) 
  {
    case (1):
      newY++;
      down = true;
      right = false;
      left = false;
      up = false;
      if (newY > 7) {
        newY = 0;
      }
      break;
    case (2):
      newX++;
      right = true;
      down = false;
      left = false;
      up = false;
      if (newX > 7) {
        newX = 0;
      }
      break;
    case (3):
      newY--;
      up = true;
      right = false;
      left = false;
      down = false;
      if (newY < 0) {
        newY = 7;
      }
      break;
    case (4):
      newX--;
      left = true;
      right = false;
      down = false;
      up = false;
      if (newX < 0) {
        newX = 7;
      }
      break;
    default:
      newX = 3;
      newY++;
      down = true;
      right = false;
      left = false;
      up = false;
      if (newY > 7) {
        newY = 0;
      }
      break;
  }
}

void writeSnake() 
{
  for (int i = snakeLength; i > 0; i--) {
    snake[i].x = snake[i - 1].x;
    snake[i].y = snake[i - 1].y;
  }
  snake[0].x = newX;
  snake[0].y = newY;
}

void setApple() 
{
  for (int i = 0; i < 3; i++) {
    if (snake[0].x == apple[i].x && snake[0].y == apple[i].y) 
    {
      score++;
      snakeLength++;
      counterApple--;
      apple[i].x = -1;
      apple[i].y = -1;
      timestamp_3a = millis();
    }

    if (apple[i].x == -1 && apple[i].y == -1 && (counterApple < maxNumApple)) 
    {
      if (delayApple(2000) == true || counterApple <= 0) 
      {
        counterApple++;
        apple[i].x = random(0, 8);
        apple[i].y = random(0, 8);
      }
    }

    for (int j = snakeLength; j > 0; j--) 
    {
      if (snake[j].x == apple[i].x && snake[j].y == apple[i].y) { //if apple is on snake
        apple[i].x = random(0, 8);
        apple[i].y = random(0, 8);
        
      }
    }
  }
}

void drawApple() 
{
  if (delayBlink(100) == true) 
  {
    if (!blink) 
    {
      for (int i = 0; i < maxNumApple; i++) 
      {
        setPointS(apple[i].x, apple[i].y, true);
        drawArray();
      }
    }
    if (blink) 
    {
      for (int i = 0; i < maxNumApple; i++) 
      {
        setPointS(apple[i].x, apple[i].y, false);
        drawArray();
      }
    }
    blink = !blink;
  }
}

void drawSnake() {
  for (int i = 0; i < snakeLength; i++) 
  {
    setPointS(snake[i].x, snake[i].y, true);
  }
  drawArray();
  for (int i = 0; i < snakeLength + 5; i++) 
  { //dont use 64, otherwise 0 0 is constantly false
    setPointS(snake[i].x, snake[i].y, false);
  }
}
void calcSpeed()
{
  if (delaySetSpeed(100))
  {
    if (analogRead(A1) > 700 && speedS > 0)
    {
      speedS -= 10;
    }
    if (analogRead(A1) < 300)
    {
      speedS += 10;
    }
  }
}
bool delayBlink(unsigned long duration) 
{
  unsigned long timestamp_5b = millis();
  if (timestamp_5b - timestamp_5a > duration) {
    timestamp_5a = timestamp_5b;
    return true;
  } else {
    return false;
  }
}


bool delayMove(unsigned long duration) 
{
  unsigned long timestamp_6b = millis();

  if (timestamp_6b - timestamp_6a > duration) {
    timestamp_6a = timestamp_6b;
    return true;
  } else {
    return false;
  }
}

bool delayApple(unsigned long duration) 
{
  unsigned long timestamp_7b = millis();
  if (timestamp_7b - timestamp_7a > duration) {
    timestamp_7a = timestamp_7b;
    return true;
  } else {
    return false;
  }
}

bool delaySetSpeed(unsigned long duration) 
{
  unsigned long timestamp_4b = millis();
  if (timestamp_4b - timestamp_4a > duration) {
    timestamp_4a = timestamp_4b;
    return true;
  } else {
    return false;
  }
}

bool timerX(unsigned long duration) 
{
  unsigned long timestamp_1b = millis();
  if (timestamp_1b - timestamp_1a > duration) {
    timestamp_1a = timestamp_1b;
    return true;
  } else {
    return false;
  }
}

bool timerY(unsigned long duration) 
{
  unsigned long timestamp_2b = millis();
  if (timestamp_2b - timestamp_2a > duration) {
    timestamp_2a = timestamp_2b;
    return true;
  } else {
    return false;
  }
}
bool timerSpawn(unsigned long duration) 
{
  unsigned long timestamp_9b = millis();
  if (timestamp_9b - timestamp_9a > duration) {
    timestamp_9a = timestamp_9b;
    return true;
  } else {
    return false;
  }
}
bool timerRotate(unsigned long duration) 
{
  unsigned long timestamp_3b = millis();
  if (timestamp_3b - timestamp_3a > duration) {
    timestamp_3a = timestamp_3b;
    return true;
  } else {
    return false;
  }
}
bool timerB3(unsigned long duration) 
{
  unsigned long timestamp_8b = millis();
  if (timestamp_8b - timestamp_8a > duration) {
    timestamp_8a = timestamp_8b;
    return true;
  } else {
    return false;
  }
}
void setPoint(byte pos, bool active)
{
  byte X = pos %8;
  byte Y = pos /8;
  byte maskY = 1<<(7-Y);
  X = 7-X;
  if (active)
  {
    disp[X] = disp[X] | maskY;
  }
  else
  {
    disp[X] = disp[X] & ~maskY;
  }
}
void setPointS(byte X, byte Y, bool active)
{
  byte maskY = 1<<(7-Y);
  X = 7-X;
  if (active)
  {
    disp[X] = disp[X] | maskY;
  }
  else
  {
    disp[X] = disp[X] & ~maskY;
  }
}

void drawArray() 
{
  for (int j = 0; j <= 7; j++) 
    writeMax(j + 1, disp[j]);
}
void checkIfLostF()
{
  for (int i = 0; i < 8; i++)
  {
    if (fallingF[i] == playerF || falling1F[i] == playerF)
    {
      Serial.println("Game Over!");
      clearDisp();
      loadingScreenLost();
      clearDisp();
      Serial.print("Final Score: ");
      Serial.println(score);
      clearDisp();
      playerF = 59;
      if (score > highScoreFa)
         highScoreFa = score;
      drawHighScore();
      drawScore();
      score = 0;
      shouldSpawnF = true;
      currentFallF = random(0,6);
      for (int i = 0; i < 8; i++)
        fallingF[i] = defFall0F[currentFallF][i]-8;
      for (int i = 0; i < 8; i++)
        falling1F[i] = 69;
      while (digitalRead(button)){}
      timestamp_spawn = millis();
      timestamp_Y = millis();
      playing = false;
      playingFa = false;
      delay(223);
    }
  }
}
void tempCheck()
{
  for (int i = 0; i < 8; i++)
  {
    if (falling1F[i] /8 == 4)
      shouldSpawnF = true;
    if (fallingF[i] /8 == 4)
      shouldSpawn1F = true;
  }
}
void spawnFallingF()
{
  if (shouldSpawnF ==  true)
  {
    if ((millis() - timestamp_spawn) > 100000)
    {
      currentFallF = random(0,8);
      for (int i = 0; i < fallingAmountF; i++)
        fallingF[i] = defFall2F[currentFallF][i];
    }
    else if ((millis() - timestamp_spawn) > 50000)
    {
      currentFallF = random(0,7);
      for (int i = 0; i < fallingAmountF; i++)
        fallingF[i] = defFall1F[currentFallF][i];
    }
    else if ((millis() - timestamp_spawn) > 0)
    {
      currentFallF = random(0,6);
      for (int i = 0; i < fallingAmountF; i++)
        fallingF[i] = defFall0F[currentFallF][i];
    }
    shouldSpawnF = false;
  } else if (shouldSpawn1F == true)
  {
    if ((millis() - timestamp_spawn) > 100000)
    {
      currentFall1F = random(0,8);
      for (int i = 0; i < fallingAmountF; i++)
        falling1F[i] = defFall2F[currentFall1F][i];
    }
    else if ((millis() - timestamp_spawn) > 50000)
    {
      currentFall1F = random(0,7);
      for (int i = 0; i < fallingAmountF; i++)
        falling1F[i] = defFall1F[currentFall1F][i];
    }
    else if ((millis() - timestamp_spawn) > 0)
    {
      currentFall1F = random(0,6);
      for (int i = 0; i < fallingAmountF; i++)
        falling1F[i] = defFall0F[currentFall1F][i];
    }
    shouldSpawn1F = false;
  }
}
void moveXF()
{
  if (analogRead(A3) > 600)
  { 
    if (timerX(150) == true)
    { 
      if (playerF %8 != 0)
      playerF-=1;
    }
  } else if (analogRead(A3) < 350)
  {
    if (timerX(150) == true)
    { 
      if (playerF %8 != 7)
      playerF+=1;
    }
  }
}
void setFallingYF()
{
  int speed = 400 - ((millis() - timestamp_Y) / 10000 *10);
  if (speed < 180) speed = 180;
  if (timerY(speed) == true)
  {
    for (int i = 0; i < fallingAmountF; i++)
    {
      fallingF[i]+=8;
      falling1F[i]+=8;
    }
    tempCheck();
    if (fallingF[0] /8 == 7 || fallingF[1] /8 == 7 || fallingF[2] /8 == 7 || fallingF[3] /8 == 7 || falling1F[0] /8 == 7 || falling1F[1] /8 == 7 || falling1F[2] /8 == 7 || falling1F[3] /8 == 7) score++;
    Serial.print("Score: ");
    Serial.println(score);
  }
  for (int i = 0; i < fallingAmountF; i++)
  {
    if (fallingF[i] /8 > 7)
    {
      fallingF[i] = 69;
    }
    if (falling1F[i] /8 > 7)
    {
      falling1F[i] = 69;
    }
  }
}
void drawFallingF()
{
  setPoint(playerF, true);
  for (int i = 0; i < fallingAmountF; i++)
  {
    if (fallingF[i] != 69)
      setPoint(fallingF[i], true);
    if (falling1F[i] != 69)
      setPoint(falling1F[i], true);
  }
  drawArray();
  for (int i = 0; i < fallingAmountF; i++)
  {
    setPoint(fallingF[i], false);
    setPoint(falling1F[i], false);
  }
    setPoint(playerF, false);
}
void drawScore() 
{
  int tens1 = score / 10;
  int units1 = -((tens1 * 10) - score);
  for (int i = 0; i <= 7; i++) 
    writeMax(i + 1, (tens[tens1][i] | units[units1][i]));
}
void moveXSp()
{
  if (analogRead(A3) > 700)
  { 
    if (timerX(200) == true)
    { 
      for (int i = 0; i < 2; i++)
      {
        if (shipSp[i] %8 == 0)
          break;
        shipSp[i]-=1;
      }
    }
  } else if (analogRead(A3) < 300)
  {
    if (timerX(200) == true)
    { 
      for (int i = 0; i < 2; i++)
      {
        if (shipSp[i] %8 == 7)
          break;
        shipSp[i]+=1;
      }
    }
  }
}
void setFallingYSp()
{
  int speedSp = 2000 - ((millis() - timestamp_spawnSp) / 10000 *200);
  if (speedSp < 800) speedSp = 800;
  if (timerY(speedSp) == true)
  {
    for (int i = 0; i < fallingAmount; i++)
      fallingSp[i] +=8;
  }
  for (int i = 0; i < fallingAmount; i++)
  {
    if (fallingSp[i] /8 == 8)
    {
      hp--;
//      hpArr[hp] = 0;
      Serial.print("Hp: ");
      Serial.println(hp);
    }
    if (fallingSp[i] /8 > 7)
    {
      fallingSp[i] = 420;
    }
  }
}
void drawFallingSp()
{
  for (int i = 0; i < 2; i++)
    setPoint(shipSp[i], true);
  for (int i = 0; i < fallingAmount; i++)
    if (fallingSp[i] != 420)
      setPoint(fallingSp[i], true);
  if (bulletSp != 421)
    setPoint(bulletSp, true);
  drawArray();
  for (int i = 0; i < fallingAmount; i++)
    setPoint(fallingSp[i], false);
  for (int i = 0; i < 2; i++)
    setPoint(shipSp[i], false);
  if (bulletSp != 421)
    setPoint(bulletSp, false);
}
void checkForOverlapSp()
{
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      if (j != i)
      {
        if (fallingSp[j] == fallingSp[i])
        {
          int tempRand = random(0,8);
          Serial.print("OVERLAPPPPPP, changed falling[j] from ");
          Serial.print(fallingSp[j]);
          Serial.print("to");
          Serial.println(tempRand);
          fallingSp[j] = tempRand;
        }
      }
    }
  }
}
void spawnFallingSp()
{
  if (timerSpawn(2000) == true)
  {
    for (int i = 0; i < 8; i++) numbSp[i] = i;  
    for (int i = 7; i > 0; i--)
    {
      int j = random(i+1);
      int temp = numbSp[i];
      numbSp[i] = numbSp[j];
      numbSp[j] = temp;
    }
  }
  for (int i = 0; i < 5; i++)
    if (fallingSp[i] == 420) fallingSp[i] = numbSp[i];

  checkForOverlapSp();
}
void shootingSp()
{
  int speedSp = 250 - ((millis() - timestamp_bulletSp) / 6000 *15);
  if (speedSp < 75) speedSp = 75;
  if (!digitalRead(button) && !wasPressedSp)
  {
    wasPressedSp = true;
    bulletSp = shipSp[1];
  }
  if (wasPressedSp == true)
  {
    if (timerB3(speedSp) == true)
      bulletSp -=8;
    
    for (int j = 0; j < fallingAmount; j++)
    {
      if (bulletSp < 0)
      {
        missed++;
        bulletSp = 421;
        wasPressedSp = false; 
      } else if (bulletSp == fallingSp[j])
      {
        score++;
        fallingSp[j] = 420;
        bulletSp = 421;
        wasPressedSp = false;
      }
    }
  }
}
void checkIfLostSp()
{
  if (hp <= 0)
  {
    Serial.println("Game Over!");
    clearDisp();
    loadingScreenLost();
    clearDisp();
    Serial.print("Score: ");
    Serial.println(score);
    Serial.print("Missed: ");
    Serial.println(missed);
    clearDisp();
    drawScore();
    hp = 8;
    //for (int i = 0; i < 8; i++)
    //  hpArr[i] = 1;
    if (score > highScoreSp)
      highScoreSp = score;
    drawHighScore();
    drawScore();
    score = 0;
    missed = 0;
    bulletSp = 421;
    for (int i = 0; i < fallingAmount; i++)
    {
      fallingSp[i] = 420;
    }
    delay(100);
    wasPressedSp = false;
    while (digitalRead(button)) {}
    timestamp_bulletSp = millis();
    timestamp_spawnSp = millis();
    playing = false;
    playingSp = false;  
    delay(223);
  }
}
void playTetris()
{
  moveY();
  moveX();
  drawBuildings();
  checkIfLost();
  delRow();
  calcRotate();
  if (lost == true)
  {
    for (int i = 0; i < 4; i++)
        fallB[i] = fallBDefault[i] + rotate[oldB][rotationC][i];
    hasLost = false;
  }
}
void playSnake()
{
  calcSpeed();
  buttonPress();
  if (delayMove(speedS) == true) {
    move();
    writeSnake();
  }
  setApple();
  drawApple();
  drawSnake();
  deathScreen();
}
void playSpaceShooter()
{
  shootingSp();
  spawnFallingSp();
  setFallingYSp();
  moveXSp();
  drawFallingSp();
  checkIfLostSp();
}
void playFalling()
{
  checkIfLostF();
  spawnFallingF();
  setFallingYF();
  moveXF();
  drawFallingF();
}
void selectGame()
{
  switch(counterGames)
  {
    case(0):  //tetris
      for (int i = 0; i <= 7; i++)
        writeMax(i + 1, (tetrisArr[i]));
      selectedSn = false;
      selectedSp = false;
      selectedFa = false;
      selectedTe = true;
        if (!digitalRead(button))
        {
          clearDisp();
          selectedTe = false;
          playingTe = true;
          playing = true;
          loadingScreenStart();
          playTetris(); 
        }
      break;  
    case(1):  //snake
      for (int i = 0; i <= 7; i++)
        writeMax(i + 1, (snakeArr[i]));
      selectedSn = true;
      selectedSp = false;
      selectedFa = false;
      selectedTe = false;
      if (!digitalRead(button))
      {
        clearDisp();
        selectedSn = false;
        playingSn = true;
        playing = true;
        loadingScreenStart();
        playSnake();
      }
      break;
    case(2):  //spaceShooter
      for (int i = 0; i <= 7; i++)
        writeMax(i + 1, (spaceShooterArr[i]));
      selectedSn = false;
      selectedSp = true;
      selectedFa = false;
      selectedTe = false;
      if (!digitalRead(button))
      {
        selectedSp = false;
        playingSp = true;
        playing = true;
        loadingScreenStart();
        timestamp_bulletSp = millis();
        timestamp_spawnSp = millis();
        playSpaceShooter();
      }
      break; 
    case(3):  //falling
      for (int i = 0; i <= 7; i++)
        writeMax(i + 1, (fallingArr[i]));
      selectedSn = false;
      selectedSp = false;
      selectedFa = true;
      selectedTe = false;
      if (!digitalRead(button))
      {
        selectedFa = false;
        playingFa = true;
        playing = true;
        loadingScreenStart();
        timestamp_spawn = millis();
        timestamp_Y = millis();
        playFalling();
      }
      break;
    default:
      break;
  }
}

void menuButtons()
{
  if (analogRead(A1) < 400 && wasUsed == false)
  {
    if (counterGames > 0)
      counterGames--;
    wasUsed = true;
  }
  else if (analogRead(A1) > 650 && wasUsed == false)
  {
    if (counterGames < 3)
      counterGames++;
    wasUsed = true;
  }
  if (analogRead(A1) > 450 && analogRead(A1) < 630)
    wasUsed = false;
}
void drawScore2()
{
  if (playingFa || playingSn || playingTe)
  {
    int tens1 = score / 10;
    int units1 = -((tens1 * 10) - score);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tens1][i] | units[units1][i]));
  }
  if (playingSp)
  {
    int tens1 = score / 10;
    int units1 = -((tens1 * 10) - score);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tens1][i] | units[units1][i] | lifes[hp][i]));
  }
  else if (selectedTe)
  {
    int tensTe = highScoreT / 10;
    int unitsTe = -((tensTe * 10) - highScoreT);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensTe][i] | units[unitsTe][i]));
  }
  else if (selectedSn)
  {
    int tensSn = highScoreSn / 10;
    int unitsSn = -((tensSn * 10) - highScoreSn);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensSn][i] | units[unitsSn][i]));
  }
  else if (selectedSp)
  {
    int tensSp = highScoreSp / 10;
    int unitsSp = -((tensSp * 10) - highScoreSp);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensSp][i] | units[unitsSp][i]));
  }
  else if (selectedFa)
  {
    int tensFa = highScoreFa / 10;
    int unitsFa = -((tensFa * 10) - highScoreFa);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensFa][i] | units[unitsFa][i]));
  }
}
void drawHighScore()
{
  if (playingTe)
  {
    int tensTe = highScoreT / 10;
    int unitsTe = -((tensTe * 10) - highScoreT);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensTe][i] | units[unitsTe][i]));
  }
  else if (playingSn)
  {
    int tensSn = highScoreSn / 10;
    int unitsSn = -((tensSn * 10) - highScoreSn);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensSn][i] | units[unitsSn][i]));
  }
  else if (playingSp)
  {
    int tensSp = highScoreSp / 10;
    int unitsSp = -((tensSp * 10) - highScoreSp);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensSp][i] | units[unitsSp][i]));
  }
  else if (playingFa)
  {
    int tensFa = highScoreFa / 10;
    int unitsFa = -((tensFa * 10) - highScoreFa);
    for (int i = 0; i <= 7; i++) 
      writeMax2(i + 1, (tens[tensFa][i] | units[unitsFa][i]));
  }
}
void goIn()
{
  for (int i = 0; i < 3; i++)
  {
    delay(100);
    topLeft+=9;
    topRight+=7;
    bottomLeft-=7;
    bottomRight-=9; 
    printLoadingScreenLost();
  }
}
void goOut()
{
  for (int i = 0; i < 3; i++)
  {
    delay(100);
    topLeft-=9;
    topRight-=7;
    bottomLeft+=7;
    bottomRight+=9; 
    printLoadingScreenLost();
  }
}
void loadingScreenStart()
{
  for (int i = 0; i <= 7; i++) 
    writeMax(i + 1, loadinginArr0[i]);
  delay(200);
  for (int i = 0; i <= 7; i++) 
    writeMax(i + 1, loadinginArr1[i]);
  delay(200);
  for (int i = 0; i <= 7; i++) 
    writeMax(i + 1, loadinginArr2[i]);
  delay(200);
  for (int i = 0; i <= 7; i++) 
    writeMax(i + 1, 255);
  delay(200);
}
void loadingScreenLost()
{
  goOut();
  goIn();
  goOut();
  goIn();
}
void printLoadingScreenLost()
{
  setPoint(topLeft, true);
  setPoint(topRight, true);
  setPoint(bottomLeft, true);
  setPoint(bottomRight, true);
  drawArray();
  setPoint(topLeft, false);
  setPoint(topRight, false);
  setPoint(bottomLeft, false);
  setPoint(bottomRight, false);
}
void loop()
{
  if (playingTe) playTetris();
  else if (playingSn) playSnake();
  else if (playingSp) playSpaceShooter();
  else if (playingFa) playFalling();
  if (!playing)
  {
    menuButtons();
    selectGame();
  }
  drawScore2();
}
