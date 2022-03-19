/////////////////////////////////////////////////////////////////////
//HEADER FILES INCLUDE
////////////////////////////////////////////////////////////////////

#include<windows.h>
#include<tchar.h>

/////////////////////////////////////////////////////////////////////
//HASH DEFINE
////////////////////////////////////////////////////////////////////

#define MY_ARRAY_SIZE(X) (sizeof(X)/sizeof(X[0]))
/////////////////////////////////////////////////////////////////////
//FUNCTION PROTOTYPE / DECLARATIONS
////////////////////////////////////////////////////////////////////

int MyMessageBox(HWND,UINT,const TCHAR*,const TCHAR*,...);

int WINAPI WinMain(
				HINSTANCE hInstance,
				HINSTANCE hPrevInstance,
				LPSTR lpszCmdLine,
				INT iCmdShow)
{

	//MessageBox(NULL,TEXT("Hello WINAPI Coding"),TEXT("Satish"),MB_OK);
	MyMessageBox(NULL,MB_OK,TEXT("MyMessageBox"),TEXT("Addition Of %d & %d = %d"),10,20,30);
	MyMessageBox(NULL,MB_OKCANCEL,TEXT("MyMessageBox"),TEXT("Thank-You For Using May Application"));

	return 0;
}
/////////////////////////////////////////////////////////////////////
//	FUNCTION DEFINATION
//  FUNCTION NAME : MYMESSAGEBOX
//  PRAMETERS      :
//	1.[IN] hWnd
//	2.[IN] uInt
//  3.[IN] tChar*
//	4.[IN] tChar *
//	5.[IN] its eclips start 
////////////////////////////////////////////////////////////////////

int MyMessageBox(HWND hWnd,UINT uiType,const TCHAR* pszCaption,const TCHAR* pszFormat,...)
{
		TCHAR szBuffer[256]={0};
		va_list pArgs=NULL;
		va_start(pArgs,pszFormat);
		_vsntprintf(szBuffer,MY_ARRAY_SIZE(szBuffer),pszFormat,pArgs);
		return MessageBox(hWnd,szBuffer,pszCaption,uiType);
}