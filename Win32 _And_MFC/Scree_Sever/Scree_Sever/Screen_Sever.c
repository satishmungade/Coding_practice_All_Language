#include<windows.h>
#include<tchar.h>
#include <stdio.h>
#define WIDTH  800
#define HEIGHT 600
int g_cxClient;
int g_cyClient;

void drawRandomRectangle(HWND);

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpszCmdLine,
				   int iCmdShow)
{
	TCHAR tszAppName[] = TEXT("MyApp");
	MSG msg;
	HWND hWnd;
	//BOOL bRet;
	int iHeight = 0 ; 
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

	iHeight = GetSystemMetrics(SM_CYSCREEN);
	iWidth = GetSystemMetrics(SM_CXSCREEN);
	iHeight = (iHeight / 2) - (HEIGHT / 2);
	iWidth = (iWidth / 2) - (WIDTH / 2); 

	hWnd=CreateWindow(
					 tszAppName,
					 TEXT("MyWindow"),
					 WS_OVERLAPPEDWINDOW,
					 iWidth,
					 iHeight,
					 WIDTH,
					 HEIGHT,
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

	/*while((bRet = GetMessage(&msg,NULL,0,0))!=0)
	{
		if(-1 == bRet )
		{
			MessageBox(NULL,TEXT("GetMessage : Failuer"),tszAppName,0);
				return -1;
		}
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	} */
	while(1)
	{
		if(PeekMessage(&msg,NULL,0,0,PM_REMOVE))
		{
			if(msg.message == WM_QUIT)
			{
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
			else
			{
				drawRandomRectangle(hWnd);
			}
		}
	}

	return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd
						 ,UINT uiMessage,
						 WPARAM wParam,
						 LPARAM lParam)
{
	HDC hdc;
	//int cxClient;
	//int cyClient;
	PAINTSTRUCT ps;		
	static RECT rect;
	switch (uiMessage)
	{
			case WM_SIZE:
			g_cxClient =LOWORD(lParam);
			g_cyClient =HIWORD(lParam);
			rect.left = 0;
			rect.top = 0;
			rect.right =g_cxClient;
			rect.bottom =g_cyClient;
			
			break;
	
		case WM_PAINT:
			hdc = BeginPaint(hWnd,&ps);
			DrawText(hdc,TEXT("Namaskar Master"),(int)_tcslen(_T("Mamaskar Master")),&rect,DT_CENTER |DT_VCENTER | DT_SINGLELINE);
			EndPaint(hWnd,&ps);
		break;
		case WM_LBUTTONDOWN:
			
		g_cxClient =LOWORD(lParam);
	 	 g_cyClient =HIWORD(lParam);
		 rect.left =200;
		 rect.top = 200;
		 rect.right =g_cxClient;
		 rect.bottom =g_cyClient;			
		 InvalidateRect(hWnd,NULL,TRUE);
			break;
		case WM_DESTROY:
			PostQuitMessage(0);
			
	}
	return DefWindowProc(hWnd,uiMessage,wParam,lParam);
}
void drawRandomRectangle(HWND hWnd)
{
	
	HDC hdc;
	RECT rect;
	HBRUSH hBrush;
	if(g_cxClient == 0 || g_cyClient == 0)
	{
		MessageBox(hWnd,_T("CxClient and CyClient both Zero"),_T("Error"),0);		
		 return ;
	}
	
	SetRect(&rect,(rand() % g_cxClient),(rand() % g_cyClient),(rand() %g_cxClient),(rand() % g_cyClient));
	hBrush = CreateSolidBrush(RGB(rand() % 256,rand() % 256,rand() % 256));
	hdc = GetDC(hWnd);
	FillRect(hdc,&rect,hBrush);
	ReleaseDC(hWnd,hdc);
	DeleteObject(hBrush);
	//Sleep(20000);
}
