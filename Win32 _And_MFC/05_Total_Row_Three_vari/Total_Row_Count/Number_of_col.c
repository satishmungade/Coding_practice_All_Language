//#include<windows.h>
//#include<tchar.h>
//#define HEIGHT 600
//#define WIDTH  800
//LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
//int WINAPI WinMain(HINSTANCE hInstance,
//				   HINSTANCE hPrevInstance,
//				   LPSTR lpszCmdLine,int 
//				   iShowCmd)
//{
//	
//	TCHAR tszAppName[] = TEXT("MyApp");
//	MSG msg;
//	HWND hWnd;
//	BOOL bRet;
//	int iHeight = 0 ; 
//	int iWidth = 0 ; 
//	
//	WNDCLASSEX wndclass;
//	wndclass.hInstance = hInstance;
//	wndclass.lpszClassName = tszAppName;
//	wndclass.lpfnWndProc = WndProc;
//	wndclass.style = CS_VREDRAW | CS_HREDRAW;
//	wndclass.hIcon = LoadIcon(NULL,IDI_APPLICATION);
//	wndclass.hCursor = LoadCursor(NULL,IDC_ARROW);
//	wndclass.hbrBackground =(HBRUSH) GetStockObject(WHITE_BRUSH);
//	wndclass.lpszMenuName = NULL;
//	wndclass.cbClsExtra = 0;
//	wndclass.cbWndExtra = 0;
//	wndclass.cbSize = sizeof(wndclass);
//	wndclass.hIconSm = NULL;
//	
//	if(! RegisterClassEx(&wndclass))
//	{
//		MessageBox(NULL,TEXT("Register class : Failuer"),tszAppName,0);
//			return -1;
//	}
//
//	iHeight = GetSystemMetrics(SM_CYSCREEN);
//	iWidth = GetSystemMetrics(SM_CXSCREEN);
//	iHeight = (iHeight / 2) - (HEIGHT / 2);
//	iWidth = (iWidth / 2) - (WIDTH / 2); 
//
//	hWnd=CreateWindow(
//					 tszAppName,
//					 TEXT("MyWindow"),
//					 WS_OVERLAPPEDWINDOW,
//					 iWidth,
//					 iHeight,
//					 WIDTH,
//					 HEIGHT,
//					 NULL,
//					 NULL,
//					 hInstance,
//					 NULL);
//	
//	if(NULL == hWnd)
//	{
//		MessageBox(NULL,TEXT("Create Window : Failuer"),tszAppName,0);
//			return -1;
//	}
//	ShowWindow(hWnd,iShowCmd);
//	UpdateWindow(hWnd);
//
//	while((bRet = GetMessage(&msg,NULL,0,0))!=0)
//	{
//		if(-1 == bRet )
//		{
//			MessageBox(NULL,TEXT("GetMessage : Failuer"),tszAppName,0);
//				return -1;
//		}
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//	
//	return (int)msg.wParam;
//	
//}
//LRESULT CALLBACK WndProc(HWND hWnd
//						 ,UINT uiMessage,
//						 WPARAM wParam,
//						 LPARAM lParam)
//
//{
//	HDC hdc;
//	TEXTMETRIC tm;
//	PAINTSTRUCT ps;
//	static RECT rect;
//	
//	int cxChar;
//	int iWidth;
//	static int cxClient;
//	int cyClient;
//	static int cxCaps;
//	static int iNoOfChars;
//
//	TCHAR szText[255]={0};
//
//	switch (uiMessage)
//	{
//		case WM_CREATE:
//			hdc=GetDC(hWnd);
//			GetTextMetrics(hdc,&tm);
//			cxChar = tm.tmAveCharWidth;
//			if((tm.tmPitchAndFamily & 1) != 0)
//				cxCaps = 3 * cxChar / 2;
//			else
//				cxCaps = cxChar;
//		ReleaseDC(hWnd,hdc);
//		break;
//
//		case WM_SIZE:
//			iNoOfChars = 0;
//			cxClient =LOWORD(lParam);
//			cyClient =HIWORD(lParam);
//			iNoOfChars = cxClient / cxCaps;
//			rect.left = 0;
//			rect.top = 0;
//			rect.right =cxClient;
//			rect.bottom =cyClient;
//			break;
//		case WM_PAINT:
//			hdc = BeginPaint(hWnd,&ps);
//			
//			_stprintf_s(szText,254,TEXT("Total Number of character :%d"),iNoOfChars);
//			DrawText(hdc,szText,-1,&rect,DT_CENTER|DT_VCENTER|DT_SINGLELINE);
//			iWidth = 0;
//			while(iWidth <cxClient )
//			{
//				TextOut(hdc,iWidth,0,TEXT("A"),(int)_tcslen(TEXT("A")));
//				iWidth = iWidth + cxCaps;
//			}
//			EndPaint(hWnd,&ps);
//			break;
//		case WM_DESTROY:
//			PostQuitMessage(0);
//	}
//
//	return DefWindowProc(hWnd,uiMessage,wParam,lParam);
//
//}