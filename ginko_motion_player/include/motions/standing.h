int standing_Motion_Start[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{2000,    0,    0, -130,   60,   60, -110,    0,  130,  -60,  -60, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   60,   60,  -60,  -60, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  99,    0,    0,  200,   50,  150,   50,    0,  125,   50, -200,  -35, -100,    0,    0,    0,    0,    0,    0,    0,    0,   50,  150,   50, -200,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};

int standing_Motion_Loop[8][27]={
{   6,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -130,   60,   60, -110,    0,  130,  -60,  -60, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   60,   60,  -60,  -60, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  99,    0,    0,  200,   50,  300,   70,    0,   30,   50,  400,  -50,   80,    0,    0,    0,    0,    0,    0,    0,    0,   50,  300,   50,  400,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{  66,    0,    0,   70,    0,  300,   70,    0,  -20,  300,  200,  -30,  -50,    0,    0,    0,    0,    0,    0,    0,    0,    0,  300,  300,  200,    0,    0},
{  33,    0,    0,  -30,  200,  450,  120,    0,  -20,   50,  -50,    0, -100,    0,    0,    0,    0,    0,    0,    0,    0,  200,  450,   50,  -50,    0,    0},
{  99,    0,    0,  -30,  -50, -400,  -50,    0, -200,  -50, -300,   70,  -80,    0,    0,    0,    0,    0,    0,    0,    0,  -50, -400,  -50, -300,    0,    0},
{  66,    0,    0,   20, -300, -200,  -30,    0,  -70,    0, -300,   70,   50,    0,    0,    0,    0,    0,    0,    0,    0, -300, -200,    0, -300,    0,    0},
{  33,    0,    0,   20,  -50,   50,    0,    0,   30, -200, -450,  120,  100,    0,    0,    0,    0,    0,    0,    0,    0,  -50,   50, -200, -450,    0,    0}
};

int standing_Motion_End[6][27]={
{   4,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -130,   60,   60, -110,    0,  130,  -60,  -60, -110,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,   60,   60,  -60,  -60, -625,  625},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  99,    0,    0,   70, -200,    0,   70,    0,   30, -250,  250, -150,   80,    0,    0,    0,    0,    0,    0,    0,    0, -200,    0, -250,  250,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{  66,    0,    0,   70, -200, -100,   70,    0,  -20,  450,  150,  -30, -450,    0,    0,    0,    0,    0,    0,    0,    0, -200, -100,  450,  150,    0,    0},
{  33,    0,    0,   70, -200, -150,   70,    0,  -20,  250,  150,  -30,    0,    0,    0,    0,    0,    0,    0,    0,    0, -200, -150,  250,  150,    0,    0},
{  66,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}
};

