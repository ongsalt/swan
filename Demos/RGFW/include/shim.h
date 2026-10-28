#define RGFW_IMPORT
#ifdef __linux__
#define RGFW_WAYLAND
#endif
#include "RGFW.h"

#ifdef _WIN32
#include <windows.h>
HINSTANCE win32_get_HINSTANCE_from_HWND(void * hwndPtr);
HINSTANCE win32_getHINSTANCE(void);
#endif
