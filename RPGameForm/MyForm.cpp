static int player = -1;
static int health_Player;
static int attack_player;
static int shild_Player;
static int skill_Player;
static int step = 1;

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include <Windows.h>
using namespace RPGameForm;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}


