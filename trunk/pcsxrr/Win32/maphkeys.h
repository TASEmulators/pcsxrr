#ifdef WIN32
#include "Win32.h"
#endif

enum EMUCMD {
	EMUCMD_MENU,
	EMUCMD_PAUSE,
	EMUCMD_TURBOMODE,
	EMUCMD_FRAMEADVANCE,
	EMUCMD_RWTOGGLE,
	EMUCMD_SPEEDDEC,
	EMUCMD_SPEEDINC,
	EMUCMD_SPEEDNORMAL,
	EMUCMD_SPEEDTURBO,
	EMUCMD_FRAMECOUNTER,
	EMUCMD_LAGCOUNTERRESET,
	EMUCMD_SCREENSHOT,
	EMUCMD_LOADSTATE1,EMUCMD_LOADSTATE2,EMUCMD_LOADSTATE3,EMUCMD_LOADSTATE4,EMUCMD_LOADSTATE5,
	EMUCMD_LOADSTATE6,EMUCMD_LOADSTATE7,EMUCMD_LOADSTATE8,EMUCMD_LOADSTATE9,
	EMUCMD_SAVESTATE1,EMUCMD_SAVESTATE2,EMUCMD_SAVESTATE3,EMUCMD_SAVESTATE4,EMUCMD_SAVESTATE5,
	EMUCMD_SAVESTATE6,EMUCMD_SAVESTATE7,EMUCMD_SAVESTATE8,EMUCMD_SAVESTATE9,
	EMUCMD_SELECTSTATE1,EMUCMD_SELECTSTATE2,EMUCMD_SELECTSTATE3,EMUCMD_SELECTSTATE4,
	EMUCMD_SELECTSTATE5,EMUCMD_SELECTSTATE6,EMUCMD_SELECTSTATE7,EMUCMD_SELECTSTATE8,
	EMUCMD_SELECTSTATE9,
	EMUCMD_LOADSTATE,
	EMUCMD_SAVESTATE,
	EMUCMDMAX
};

struct EMUCMDTABLE
{
	int key;
	int keymod;
	char* name;
};

extern struct EMUCMDTABLE EmuCommandTable[];

#define GAMEDEVICE_KEY "#%d"
#define GAMEDEVICE_NUMPADPREFIX "Numpad-%c"
#define GAMEDEVICE_VK_TAB "Tab"
#define GAMEDEVICE_VK_BACK "Backspace"
#define GAMEDEVICE_VK_CLEAR "Delete"
#define GAMEDEVICE_VK_RETURN "Enter"
#define GAMEDEVICE_VK_LSHIFT "LShift"
#define GAMEDEVICE_VK_RSHIFT "RShift"
#define GAMEDEVICE_VK_LCONTROL "LCTRL"
#define GAMEDEVICE_VK_RCONTROL "RCTRL"
#define GAMEDEVICE_VK_LMENU "LAlt"
#define GAMEDEVICE_VK_RMENU "RAlt"
#define GAMEDEVICE_VK_PAUSE "Pause"
#define GAMEDEVICE_VK_CAPITAL "Capslock"
#define GAMEDEVICE_VK_ESCAPE "Escape"
#define GAMEDEVICE_VK_SPACE "Space"
#define GAMEDEVICE_VK_PRIOR "PgUp"
#define GAMEDEVICE_VK_NEXT "PgDn"
#define GAMEDEVICE_VK_HOME "Home"
#define GAMEDEVICE_VK_END "End"
#define GAMEDEVICE_VK_LEFT "Left"
#define GAMEDEVICE_VK_RIGHT "Right"
#define GAMEDEVICE_VK_UP "Up"
#define GAMEDEVICE_VK_DOWN "Down"
#define GAMEDEVICE_VK_SELECT "Select"
#define GAMEDEVICE_VK_PRINT "Print"
#define GAMEDEVICE_VK_EXECUTE "Execute"
#define GAMEDEVICE_VK_SNAPSHOT "SnapShot"
#define GAMEDEVICE_VK_INSERT "Insert"
#define GAMEDEVICE_VK_DELETE "Delete"
#define GAMEDEVICE_VK_HELP "Help"
#define GAMEDEVICE_VK_LWIN "LWinKey"
#define GAMEDEVICE_VK_RWIN "RWinKey"
#define GAMEDEVICE_VK_APPS "AppKey"
#define GAMEDEVICE_VK_MULTIPLY "Numpad *"
#define GAMEDEVICE_VK_ADD "Numpad +"
#define GAMEDEVICE_VK_SEPARATOR "\\"
#define GAMEDEVICE_VK_OEM_1 "Semi-Colon"
#define GAMEDEVICE_VK_OEM_7 "Apostrophe"
#define GAMEDEVICE_VK_OEM_COMMA "Comma" 
#define GAMEDEVICE_VK_OEM_PERIOD "Period" 
#define GAMEDEVICE_VK_SUBTRACT "Numpad -"
#define GAMEDEVICE_VK_DECIMAL "Numpad ."
#define GAMEDEVICE_VK_DIVIDE "Numpad /"
#define GAMEDEVICE_VK_NUMLOCK "Num-lock"
#define GAMEDEVICE_VK_SCROLL "Scroll-lock"
