#include<windows.h>
#include<tchar.h>
#define HEIGHT 600
#define WIDTH  800
#define MY_ARRAY_SIZE(X) sizeof(X)/sizeof(X[0])

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
	HDC hdc;
	TEXTMETRIC tm;
	PAINTSTRUCT ps;
	static RECT rect;
	int cxChar =0;
	int iTemp=0;
	static int cxClient;
	static int cyClient;
	static int cxCaps;
	static int iNoOfCols = 0;
	static int cyChar;
	static int iNoOfRow;
	TCHAR szText[255]={0};
	int iCnt ;
	
	switch (uiMessage)
	{
		case WM_CREATE:
			hdc=GetDC(hWnd);
			GetTextMetrics(hdc,&tm);
			cxChar = tm.tmMaxCharWidth;
			
			if((tm.tmPitchAndFamily & 1) != 0)
				cxCaps = 3 * cxChar / 2;
			else
				cxCaps = cxChar;
			
			cyChar = tm.tmHeight + tm.tmExternalLeading;
			
			
			ReleaseDC(hWnd,hdc);
		break;

		case WM_SIZE:
			iNoOfCols = 0;
			cxClient =LOWORD(lParam);
			cyClient =HIWORD(lParam);
			iNoOfCols = cxClient / cxCaps;
			rect.left = 0;
			rect.top = 0;
			rect.right =cxClient;
			rect.bottom =cyClient;
			iNoOfRow = 0;
			iNoOfRow = rect.bottom /cyChar;
			
			break;
		
		case WM_PAINT:
			GetClientRect(hWnd,&rect);
			hdc = BeginPaint(hWnd,&ps);
			_stprintf_s(szText,254,TEXT("Total Number of Cols :%d"),iNoOfCols);
			TextOut(hdc,30,40,szText,(int)_tcslen(szText));
			
			for(iCnt = 0 ; iCnt < cxClient ; )
			{
				TextOut(hdc,iCnt,0,_T("A"),(int)_tcslen(_T("A")));
				iCnt = iCnt + cxCaps;
			}
			_stprintf_s(szText,255,TEXT("Total Number of Row : %d"),iNoOfRow);
			
			TextOut(hdc,30,60,szText,(int)_tcslen(szText));
			
			for(iCnt = 0 ; iCnt < cyClient; )
			{
				TextOut(hdc,0,iCnt,_T("A"),(int)_tcslen(_T("A")));
				iCnt = iCnt + cyChar;
			}
					
			EndPaint(hWnd,&ps);
			break;
		case WM_LBUTTONDOWN:
			
			hdc = GetDC(hWnd);
			
			for(iCnt = 0 ; iCnt < cxClient ; )
			{
				
				_stprintf_s(szText,255,TEXT("%d"),iTemp);
				TextOut(hdc,iCnt,20,szText,(int)_tcslen(szText));
				iCnt = iCnt + cxCaps;
				iTemp ++;
			}
			iTemp = 0;
			for(iCnt = 1 ; iCnt < cyClient; )
			{
				_stprintf_s(szText,255,TEXT("%d"),iTemp);
				TextOut(hdc,20,iCnt,szText,(int)_tcslen(szText));
				iCnt = iCnt + cyChar;
				iTemp ++;
			}
			ReleaseDC(hWnd,hdc);
			break ;
		case WM_DESTROY:
			PostQuitMessage(0);
	}

	return DefWindowProc(hWnd,uiMessage,wParam,lParam);

}