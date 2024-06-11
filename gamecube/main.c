
#include <windows.h>
#include <stdio.h>
#include "w32_display.h"
#include "system/types.h"
#include "pad.h"

extern int pad_open(HWND hwnd, HINSTANCE hinstance);

HWND w32_wnd;

LRESULT WINAPI w32_window_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	switch(uMsg) 
	{
	case WM_PAINT:
		BeginPaint(w32_wnd, &ps);
		EndPaint(w32_wnd, &ps);
		break;
	case WM_CLOSE:
		PostQuitMessage(0);
		break;
	case WM_SIZE:
		PostMessage(hWnd, WM_PAINT, 0, 0);
		return 0;
	case WM_KEYUP:
	case WM_SYSKEYUP:
		//printf("%d\n", wParam);
		switch((uint32)wParam)
		{
		case VK_ESCAPE:
			PostQuitMessage(0);
			break;
		default:
			break;
		}
		break;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam); 
}

void w32_create_window(void)
{
	WNDCLASS    wc;
	HINSTANCE	hInstance;

	hInstance		 = GetModuleHandle(NULL);

	wc.style         = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc   = (WNDPROC)w32_window_proc;
	wc.cbClsExtra    = 0;
	wc.cbWndExtra    = 0;
	wc.hInstance     = hInstance;
	wc.hIcon         = LoadIcon(NULL, IDI_WINLOGO);
	wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = NULL;
	wc.lpszMenuName  = NULL;
	wc.lpszClassName = "OpenGL display";

	if (!RegisterClass(&wc)) 
	{
		MessageBox(NULL, "RegisterClass() failed:  Cannot register window class.", "Error", MB_OK);
		return;
	} 

	w32_wnd = CreateWindow("OpenGL display", "GCEmu", WS_OVERLAPPEDWINDOW | WS_CLIPSIBLINGS | WS_CLIPCHILDREN,
		CW_USEDEFAULT, CW_USEDEFAULT, 650, 516, NULL, NULL, hInstance, NULL); 

	if (w32_wnd == NULL) 
	{
		MessageBox(NULL, "Cannot Create Window", "Error", MB_OK);
		return;
	} 

	ShowWindow(w32_wnd, SW_SHOWNORMAL);
	UpdateWindow(w32_wnd);
	SetFocus(w32_wnd);

	// initialise pad here!
	pad_open(w32_wnd, hInstance);
}

bool w32_check_events(void)
{
	MSG msg;
	while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
    { 
		if(msg.message == WM_QUIT)					// If the message wasnt to quit
			return true;
        TranslateMessage(&msg);						// Find out what the message does
        DispatchMessage(&msg);						// Execute the message
    };
	return false;
}



HWND w32_init(void)
{
	w32_create_window();
	return w32_wnd;
}

