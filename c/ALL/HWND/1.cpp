#include <Windows.h>
#include <string>
#include <iostream>

std::string GetWindowTitle(HWND hWnd)
{
    // 获取窗口标题的长度
    int length = GetWindowTextLength(hWnd);

    // 分配一段缓冲区来存放窗口标题
    wchar_t *buffer = new wchar_t[length + 1];

    // 获取窗口标题
    GetWindowText(hWnd, buffer, length + 1);

    // 将窗口标题转换为 std::string 类型
    std::string title(buffer);

    // 释放缓冲区
    delete[] buffer;

    return title;
}

BOOL CALLBACK EnumWindowsProc(HWND hWnd, LPARAM lParam)
{
    // 获取当前窗口的标题
    std::string windowTitle = GetWindowTitle(hWnd);

    // 如果窗口标题等于指定的值，就输出窗口句柄
    if (windowTitle == "calc")
    {
        std::cout << hWnd << std::endl;
    }

    return TRUE;
}

int main()
{
    // 枚举当前系统中的所有窗口
    EnumWindows(EnumWindowsProc, 0);

    return 0;
}
