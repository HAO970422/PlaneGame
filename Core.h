#include <Windows.h>
#include <iostream>
using namespace std;

struct Frame
{
	COORD position[2];
	int flag;
};

// ���ù��
void SetPos(COORD a) ;
void SetPos(int i, int j);

// ���ع��
void HideCursor();

// �ѵ�y�У�(x1, x2) ֮����������Ϊ ch
void drawRow(int y, int x1, int x2, char ch);
// ��a, b ��������ͬ��ǰ���£������� [a, b] ֮�����Ϊ ch
void drawRow(COORD a, COORD b, char ch);

// �ѵ�x�У�[y1, y2] ֮����������Ϊ ch
void drawCol(int x, int y1, int y2, char ch);
// ��a, b ��������ͬ��ǰ���£������� [a, b] ֮�����Ϊ ch
void drawCol(COORD a, COORD b, char ch);

//���Ͻ����ꡢ���½����ꡢ��row����С���col�����
void drawFrame(int x1, int y1, int x2, int y2, char row, char col);
void drawFrame(COORD a, COORD  b, char row, char col);
void drawFrame(Frame frame, char row, char col);

//��[a, b)֮�����һ���������
int random(int a, int b);
COORD random(COORD a, COORD b);

bool  judgeCoordInFrame(Frame frame, COORD spot);

void printCoord(COORD a);
void printFrameCoord(Frame a);
