#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	std::cout << "Playing a piano sound found on https://freesound.org/people/josefpres/sounds/641638/" << "\n";
	PlaySound(TEXT("piano.wav"), NULL, SND_FILENAME | SND_ASYNC);
	system("PAUSE");
	return 0;
}