#include<windows.h>
#include<tchar.h>
#define HEIGHT 600
#define WIDTH  800
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpszCmdLine,int 
				   iShowCmd)
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
	wndclass.hbrBackground =(HBRUSH) GetStockObject(WHITE_BRUSH);
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
	ShowWindow(hWnd,iShowCmd);
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
	PAINTSTRUCT ps;
	HDC hdc;
	static RECT rect;
	/*rect.left=0;
	rect.top=0;
	rect.right=0;
	rect.bottom=0;
	*/		
	
	BOOL bRet;
	switch (uiMessage)
	{
		case WM_PAINT:
		   hdc = BeginPaint(hWnd,&ps);
		   bRet = TextOutW(hdc,rect.left,rect.right,TEXT("Satish"),7);		  
		   //DrawText(hdc,TEXT("Satish"),7,&rect,DT_CENTER);
		   EndPaint(hWnd,&ps);
		  break;

		case WM_LBUTTONDOWN:
			rect.left=200;
			rect.top=200;
			rect.right=300;
			rect.bottom=200;
			InvalidateRect(hWnd,&rect,FALSE);
			break;
		
		case WM_DESTROY:
			PostQuitMessage(0);
			
	}
	return DefWindowProc(hWnd,uiMessage,wParam,lParam);
}
/*
InvalidateRect(hWnd,NULL,FALSE);			
1.FALSE time get TWO print
2.True time validate rect print
3.BOTH Case Null rect
InvalidateRect(hWnd,&rect,FALSE);			
1.one deflaut rect print
*/