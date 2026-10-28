#define RGFW_IMPLEMENTATION
#define RGFW_EXPORT

#ifdef __linux__
#define RGFW_WAYLAND
#endif

/* Build the implementation of the RGFW library */
#include "RGFW.h"

#ifdef RGFW_WAYLAND
/* Generated with wayland-scanner private-code */
#include "xdg-shell-code.h"
#include "xdg-toplevel-icon-v1-code.h"
#include "xdg-decoration-unstable-v1-code.h"
#include "relative-pointer-unstable-v1-code.h"
#include "pointer-constraints-unstable-v1-code.h"
#include "xdg-output-unstable-v1-code.h"
#endif

#ifdef _WIN32
#include <windows.h>
#include <windef.h>

HINSTANCE win32_get_HINSTANCE(void) {
    return GetModuleHandleA(NULL);
}

HINSTANCE win32_get_HINSTANCE_from_HWND(void * hwndPtr) {
    return (HINSTANCE)GetWindowLongPtr(hwndPtr, GWLP_HINSTANCE);
}

#endif

