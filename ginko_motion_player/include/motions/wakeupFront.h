int wakeupFront_Motion_Start[7][27]={
{   5,   25,    1,    2,    3,    5,    7,    8,    9,   10,   12,   14,   15,   16,   17,   19,   20,   21,   22,   24,   25,    4,    6,   11,   13,   18,   23},//(一個目モーションの総フレーム数、二個目サーボの総数、三個目以降が指定したID)
{   2,    0,    0, -100,    0,    0, -100,    0,  100,    0,    0, -100,  -40, -225,  625, 1300, 1300,  225, -625,-1300,-1300,  -74,   22,   34,  -64, -685,  630},//初期姿勢(一個目移動時間、二個目待機時間、三個目以降角度)
{ 500,    0,    0,  100,  400, -500,  100,    0, -100, -400,  500,  100,    0, -100, -150,    0,    0,  100,  150,    0,    0,  400, -500, -400,  500,  150, -150},//以下モーションデータ(一個目移動時間、二個目待機時間、三個目以降角度)
{ 500,  500,    0, -450,  400, -500, -450,    0,  450, -400,  500, -450,    0, -250, -250,-1300,-1300,  250,  250, 1300, 1300,  400, -500, -400,  500,  250, -250},
{ 500,    0,    0, -200,  400, -500, -200,    0,  200, -400,  500, -200,    0,  150, -300,-1500,-1500, -150,  300, 1500, 1500,  400, -500, -400,  500,  300, -300},
{ 500,    0,    0,  200,  400, -500,  200,    0, -200, -400,  500,  200,    0,  250, -200,    0,    0, -250,  200,    0,    0,  400, -500, -400,  500,  200, -200},
{ 800,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0}
};

