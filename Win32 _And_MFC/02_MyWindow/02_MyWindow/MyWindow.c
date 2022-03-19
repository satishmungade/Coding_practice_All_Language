#include<windows.h>
#include<tchar.h>
#define WIDTH 800
#define HIGHT 600
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpszCmdLine,
				   int iCmdShow)
{
	TCHAR tszAppName[] = TEXT("MyApp");
	MSG msg;
	HWND hWnd;
	BOOL bRet;
	int iHight = 0 ; 
	int iWidth = 0 ; 
	//WNDCLASSEC initilize
	WNDCLASSEX wndclass;
	wndclass.hInstance = hInstance;
	wndclass.lpszClassName = tszAppName;
	wndclass.lpfnWndProc = WndProc;
	wndclass.style = CS_VREDRAW | CS_HREDRAW;
	wndclass.hIcon = LoadIcon(NULL,IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL,IDC_ARROW);
	wndclass.hbrBackground = GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.cbSize = sizeof(wndclass);
	wndclass.hIconSm = NULL;
	
	if(! RegisterClassEx(&wndclass))
	{
		MessageBox(NULL,TEXT("Register class : Failuer"),tszAppName,0);
			return -1;
	}

	iHight = GetSystemMetrics(SM_CXSCREEN);
	iWidth = GetSystemMetrics(SM_CXSCREEN);
	
	iHight = (iHight / 2) - (HIGHT / 2);
	iWidth = (iWidth / 2) - (WIDTH / 2); 

	hWnd=CreateWindow(
					 tszAppName,
					 TEXT("MyWindow"),
					 WS_OVERLAPPEDWINDOW,
					 iWidth,
					 iHight,
					 WIDTH,
					 HIGHT,
					 NULL,
					 NULL,
					 hInstance,
					 NULL);
	
	if(NULL == hWnd)
	{
		MessageBox(NULL,TEXT("Create Window : Failuer"),tszAppName,0);
			return -1;
	}
	ShowWindow(hWnd,iCmdShow);
	UpdateWindow(hWnd);

	while((bRet = GetMessage(&msg,NULL,0,0))!=0)
	{
		if(-1 == bRet )
		{
			MessageBox(NULL,TEXT("GetMessage : Failuer"),tszAppName,0);
				return -1;
		}
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd
						 ,UINT uiMessage,
						 WPARAM wParam,
						 LPARAM lParam)
{
	switch (uiMessage)
	{
		case WM_PAINT :
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
	}
	return DefWindowProc(hWnd,uiMessage,wParam,lParam);
}