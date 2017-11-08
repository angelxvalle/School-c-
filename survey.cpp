#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string Menu[2] = { "1) Enter a student", "2) Quit" };
	auto pointer = 0;

	while (true)
	{
		system("cls");

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //change color to white
		cout << "Main Menu\n";
		for (auto i = 0; i < 2; ++i)
		{
			if (i == pointer)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //blue
				cout << Menu[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << Menu[i] << endl;
			}
		}
		while (true)
		{
			if (GetAsyncKeyState(VK_UP) != 0) //arrow key up code
			{
				pointer -= 1;
				if (pointer == -1) //pointer can't be -1, switches it back to 2
				{
					pointer = 2;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0) //arrow key down code
			{
				pointer += 1;
				if (pointer == 3) //pointer gets switched backed down to 0 for loop purpose
				{
					pointer = 0;
				}
				break;
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0) //enter command code
			{
				switch (pointer)
				{
				case 0:
				{
					system("cls");
					CONSOLE_FONT_INFOEX cfi;
					cfi.cbSize = sizeof(cfi);
					cfi.nFont = 0;
					cfi.dwFontSize.X = 0;                   // Width of each character in the font
					cfi.dwFontSize.Y = 21;                  // Height
					cfi.FontFamily = FF_DONTCARE;
					cfi.FontWeight = FW_NORMAL;
					wcscpy_s(cfi.FaceName, L"Consolas"); // Choose your font
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);


					} break;
				case 1:
				{
					system("cls");
					cout << "Include rules here."; //These are the rules for the game
					Sleep(1000); //REMEMBER TO LOOP BACK INTO THE MAIN MENU.
				}break;
				case 2:
				{
					return 0;
				}break;
				}
				}
			}
			Sleep(200);
		}

		return (0);
	}
