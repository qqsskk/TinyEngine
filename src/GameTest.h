/* ========================================================== 
*	�� �� ����GameTest.cpp
*	��ǰ�汾��1.0.0
*	����ʱ�䣺2014-03-21 
*	�޸�ʱ�䣺2014-03-21
*	����˵������Ϸ��������� WinMain
*	���뻷����VS2008
*
*	��    ��������ʵ��111��
*	��    ��������
*	ѧ    �ţ�8000611063
*	ʵ�����ƣ�
*	ʵ����ţ�ʵ��3
*	ʵ��ص㣺ͼ���406
*	ʵ��ʱ�䣺2014-03-21 16:10-18:00
 ==========================================================*/
#include "T_Engine.h"

class GameTest:public T_Engine{
public:
	int wnd_width,wnd_height;


public:
	GameTest(HINSTANCE hInstance, LPCTSTR szWindowClass, LPCTSTR szTitle,WORD Icon, WORD SmIcon, int iWidth, int iHeight);
	~GameTest();

	void GameInit();                                       
	void GameLogic();
	void GameEnd();
	void GamePaint(HDC hdc);
	void GameKeyAction(int ActionType=KEY_SYS_NONE);
	void GameMouseAction(int x, int y, int ActionType);
};
