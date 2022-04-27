#include<windows.h>
#include<tchar.h>
#include <math.h>

#define WIDTH  800
#define HEIGHT 600
#define TWO_PI (2.0*3.14159)

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
	int iHeight = 0 ; 
	int iWidth = 0 ; 
	

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
	HDC hdc;
	HRGN hRgnTemp[6];
	static HRGN hRgnClip;
	static int cxClient;
	static int cyClient;
	int iCounter;
	PAINTSTRUCT ps;
	static double dRedius;
	static double dAngle;

	static RECT rect;
	switch (uiMessage)
	{
			case WM_SIZE:
			cxClient =LOWORD(lParam);
			cyClient =HIWORD(lParam);
			
			if(hRgnClip)
				DeleteObject(hRgnClip);

			hRgnTemp[0] = CreateEllipticRgn(0,cyClient/3,cxClient/2,2*cyClient/3);
			hRgnTemp[1] = CreateEllipticRgn(cxClient/2,cyClient/3,cxClient,2*cyClient/3);
			hRgnTemp[2] = CreateEllipticRgn(cxClient/3,0,2*cxClient/3,cyClient/2);
			hRgnTemp[3] = CreateEllipticRgn(cxClient/3,cyClient/2,2*cxClient/3,cyClient);
			hRgnTemp[4] = CreateEllipticRgn(0,0,1,1);
			hRgnTemp[5] = CreateEllipticRgn(0,0,1,1);
			
			hRgnClip = CreateRectRgn(0,0,1,1);

			CombineRgn(hRgnTemp[4],hRgnTemp[0],hRgnTemp[1],RGN_OR);
			CombineRgn(hRgnTemp[5],hRgnTemp[2],hRgnTemp[3],RGN_OR);
			CombineRgn(hRgnClip,hRgnTemp[4],hRgnTemp[5],RGN_XOR);

			for(iCounter =0 ; iCounter < 6 ;iCounter ++)
			{
				DeleteObject(hRgnTemp[iCounter]);		
			}
			break;
	
		case WM_PAINT:
			hdc = BeginPaint(hWnd,&ps);
			SetViewportOrgEx(hdc,cxClient/2 ,cyClient/2 ,NULL);
			SelectClipRgn(hdc,hRgnClip);
			SetTextColor(hdc,RGB(255,1,1));
			dRedius = _hypot(cxClient/2.0,cyClient/2.0);

			for(dAngle = 0.0 ; dAngle < TWO_PI ; dAngle = dAngle +TWO_PI/360)
			{
				MoveToEx(hdc,0,0,NULL);
				LineTo(hdc,(int)(dRedius*cos(dAngle)+0.5),(int)(-dRedius*sin(dAngle)+0.5));

			
			}
			EndPaint(hWnd,&ps);
		break;
		case WM_DESTROY:
			PostQuitMessage(0);
			
	}
	return DefWindowProc(hWnd,uiMessage,wParam,lParam);
}
