#include <string>

using namespace std;

class Window
{
public:
	static void createWindow(int width, int height, string title);
	static void render();
	static void dispose();
	static bool isCloseRequested();
	static int getWidth();
	static int getHeight();
	static string getTitle();
};
