#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

char* Change(char* s)
{
	char* tmp = new char[strlen(s)];
	char* t = tmp;

	tmp[0] = '\0';
	int i = 0;

	while (s[i + 1] != 0)
	{
		if ((s[i] == '!' && s[i + 1] == '!' && s[i + 2] == '!'))
		{

			strcat(t, "**");
			t += 2;
			i += 3;
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
		}
	}
	*t++ = s[i++];
	*t++ = s[i++];
	*t = '\0';

	strcpy(s, tmp);
	return tmp;
}

int main()
{
	char s[101]; //оголошення літерного рядка
	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	Change(s);

	cout << endl;
	cout << "Modified string : " << s << endl;
}
