// 参数解析.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "参数解析.h"
#include <shellapi.h>

#define MAX_LOADSTRING 100

// 全局变量:
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名

// 此代码模块中包含的函数的前向声明:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);



    return (int) 0;
}

BOOL checkCmd()
{
	LPTSTR pszCmdLine = GetCommandLine(); //获取命令行参数；
	LPWSTR *lpszArgv = NULL;
	int argc = 0;
	lpszArgv = CommandLineToArgvW(pszCmdLine, &argc); //拆分命令行参数字符串

	return 0;
}