int walkRight_Motion_Start[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -130,   40,   40, -110,    0,  130,  -40,  -40, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   40,   40,  -40,  -40, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{ 100,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};

int walkRight_Motion_Loop[12][27]={
{  10,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -130,   40,   40, -110,    0,  130,  -40,  -40, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   40,   40,  -40,  -40, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  66,    0,    0,    0,  -80,   80,  -80,    0, -100,    0,    0,   80,    0,    0,    0,    0,    0,    0,    0,    0,    0,  -80,   80,    0,    0,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{  33,    0,    0,    0,  150, -150,  -50,    0, -100,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,  150, -150,    0,    0,    0,    0},
{  99,    0,    0,  -20,  200, -200, -250,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,  200, -200,    0,    0,    0,    0},
{  99,    0,    0,  -35,  -50,   50,  -80,    0,    0,    0,    0,  -20,    0,    0,    0,    0,    0,    0,    0,    0,    0,  -50,   50,    0,    0,    0,    0},
{  50,    0,    0,  -50,  -30,   30,  -20,    0,   50,   50,  -50,  -80,    0,    0,    0,    0,    0,    0,    0,    0,    0,  -30,   30,   50,  -50,    0,    0},
{  50,    0,    0,   20,    0,    0,   10,    0,  150,  120, -120, -120,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,  120, -120,    0,    0},
{  33,    0,    0,  100,   10,  -10,   70,    0,  150,  200, -200, -170,    0,    0,    0,    0,    0,    0,    0,    0,    0,   10,  -10,  200, -200,    0,    0},
{  33,    0,    0,  120,   20,  -20,   50,    0,  150, -100,  100, -200,    0,    0,    0,    0,    0,    0,    0,    0,    0,   20,  -20, -100,  100,    0,    0},
{  99,    0,    0,  100,   30,  -30,   60,    0,    0, -150,  150,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,   30,  -30, -150,  150,    0,    0},
{ 200,  500,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}
};

int walkRight_Motion_End[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -130,   40,   40, -110,    0,  130,  -40,  -40, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   40,   40,  -40,  -40, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  10,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};