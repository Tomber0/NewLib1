// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		MessageBox(NULL, TEXT("Загружается процесс библиотеки DLLMain.dll"), TEXT("Process Attach"), MB_OK | MB_ICONINFORMATION);

		break;
	}
	case DLL_THREAD_ATTACH:
	{
		MessageBox(NULL, TEXT("Загружается поток библиотеки DLLMain.dll"), TEXT("Process Attach"), MB_OK | MB_ICONINFORMATION);

		break;
	}
	case DLL_THREAD_DETACH:
	{			MessageBox(NULL, TEXT("Завершен поток библиотеки DLLMain.dll"), TEXT("Process Attach"), MB_OK | MB_ICONINFORMATION);


	break;
	}
	case DLL_PROCESS_DETACH:
	{

		MessageBox(NULL, TEXT("Закрыт процесс библиотеки DLLMain.dll"), TEXT("Process Attach"), MB_OK | MB_ICONINFORMATION);

		break;
	}

	}
	return TRUE;
}
