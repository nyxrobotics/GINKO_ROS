int walkBack_Motion_Start[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0,  -50,  -20,    2,   80,    0,   70,   10,  -43, -170,  -40,  -50,  200, 1300, 1250,  -50, -150,-1300,-1250,  -50,  -50,  -39, -100, -131,  207},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  66,   66,    0,  150, -100, -100,   50,    0,   50,  200,    0,   50, -100,    0,    0,    0,    0,    0,    0,    0,    0, -100, -100,  200,    0,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};

int walkBack_Motion_Loop[8][27]={
{   6,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0,  -50,  -20,    2,   80,    0,   70,   10,  -43, -170,  -40,  -50,  200, 1300, 1250,  -50, -150,-1300,-1250,  -50,  -50,  -39, -100, -131,  207},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  33,   66,    0,  150, -150,    0,   50,    0,  100, -150,   80,   50,  -50,    0,    0,    0,    0,    0,    0,    0,    0, -150,    0, -150,   80,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{  33,    0,    0,    0, -100,  -50,   30,    0,  -50, -200, -250,  -50,   50,    0,    0,    0,    0,    0,    0,    0,    0, -100,  -50, -200, -250,    0,    0},
{  66,    0,    0,   50, -300,    0,   30,    0, -100,   50,  -50,  -50,  100,    0,    0,    0,    0,    0,    0,    0,    0, -300,    0,   50,  -50,    0,    0},
{  33,   66,    0, -100,  150,  -80,  -50,    0, -150,  150,    0,  -50,   50,    0,    0,    0,    0,    0,    0,    0,    0,  150,  -80,  150,    0,    0,    0},
{  33,    0,    0,   50,  200,  250,   50,    0,    0,  100,   50,  -30,  -50,    0,    0,    0,    0,    0,    0,    0,    0,  200,  250,  100,   50,    0,    0},
{  66,    0,    0,  100,  -50,   50,   50,    0,  -50,  300,    0,  -30, -100,    0,    0,    0,    0,    0,    0,    0,    0,  -50,   50,  300,    0,    0,    0}
};

int walkBack_Motion_End[5][27]={
{   3,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0,  -50,  -20,    2,   80,    0,   70,   10,  -43, -170,  -40,  -50,  200, 1300, 1250,  -50, -150,-1300,-1250,  -50,  -50,  -39, -100, -131,  207},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  33,   33,    0,  150, -150,  100,   50,    0,  100, -400,   80,   50,  -50,    0,    0,    0,    0,    0,    0,    0,    0, -150,  100, -400,   80,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{  66,    0,    0,    0,  100,  150,    0,    0,    0, -100, -150,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,  100,  150, -100, -150,    0,    0},
{  99,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}
};

