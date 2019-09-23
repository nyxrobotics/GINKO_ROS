int turnLeft_Motion_Start[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{  20,    0,  -42, -115,  -67,   23, -171,  -71,   52,   96,  -51, -117,  -46, -293,  663, 1321, 1295,  210, -740,-1306,-1302,  -76,   55,   69,  -43, -727,  666},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  10,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};

int turnLeft_Motion_Loop[16][27]={
{  14,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{  20,    0,  -42, -115,  -67,   23, -171,  -71,   52,   96,  -51, -117,  -46, -293,  663, 1321, 1295,  210, -740,-1306,-1302,  -76,   55,   69,  -43, -727,  666},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{ 100,    0, -150,   40,   50,   60,   30, -150,   20,   60,   50,  -10,  150,    0,    0,    0,    0,    0,    0,    0,    0,   50,   60,   60,   50,    0,    0},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{ 100,    0, -150,   90,   70,   40,   70, -150,   40,  130,   30,  -50,  150,    0,    0,    0,    0,    0,    0,    0,    0,   70,   40,  130,   30,    0,    0},
{  50,    0, -150,  200,   70,   40,  120, -150,  100,  150,   10, -100,  150,    0,    0,    0,    0,    0,    0,    0,    0,   70,   40,  150,   10,    0,    0},
{  50,    0, -150,  150,   70,   40,  120, -150,  100, -150,  150, -100,  150,    0,    0,    0,    0,    0,    0,    0,    0,   70,   40, -150,  150,    0,    0},
{ 120,    0, -150,  150,   70,   40,  120,  150,  100, -300,    0, -200,  150,    0,    0,    0,    0,    0,    0,    0,    0,   70,   40, -300,    0,    0,    0},
{ 150,    0, -150,  100,   70,   40,  120,  150,  150,   80, -230, -150,  150,    0,    0,    0,    0,    0,    0,    0,    0,   70,   40,   80, -230,    0,    0},
{ 100,    0, -150,   70,  -20,   10,   20,  150,  100,   50,  -40, -100,  150,    0,    0,    0,    0,    0,    0,    0,    0,  -20,   10,   50,  -40,    0,    0},
{ 250,    0, -150,  -50,  -70,   60,  -80,  150,  -50,    0,   10,   50,  150,    0,    0,    0,    0,    0,    0,    0,    0,  -70,   60,    0,   10,    0,    0},
{ 100,    0, -150, -100, -120,  110, -110,  150, -150,  -30,   40,  120,  150,    0,    0,    0,    0,    0,    0,    0,    0, -120,  110,  -30,   40,    0,    0},
{  50,    0, -150,  -80,  150, -150, -130,  150, -120,  -30,   40,  100,  150,    0,    0,    0,    0,    0,    0,    0,    0,  150, -150,  -30,   40,    0,    0},
{ 100,    0,  150,  -80,   50, -250, -170,  150, -120,  -30,   40,  120,  150,    0,    0,    0,    0,    0,    0,    0,    0,   50, -250,  -30,   40,    0,    0},
{ 200,    0,  150, -120, -250,  -50, -120,  150, -120,  -30,   40,  120,   75,    0,    0,    0,    0,    0,    0,    0,    0, -250,  -50,  -30,   40,    0,    0},
{ 200,    0,  150,  -20, -150,  -90,  -20,  150,  -20,  -30,   30,   20,    0,    0,    0,    0,    0,    0,    0,    0,    0, -150,  -90,  -30,   30,    0,    0},
{ 300,  100,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}
};

int turnLeft_Motion_End[3][27]={
{   1,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{  20,    0,  -42, -115,  -67,   23, -171,  -71,   52,   96,  -51, -117,  -46, -293,  663, 1321, 1295,  210, -740,-1306,-1302,  -76,   55,   69,  -43, -727,  666},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{  10,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
};

