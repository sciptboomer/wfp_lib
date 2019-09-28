//WFP - Windows Functions Library
//Vlad Yanchuk 2019
//
#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif
#ifdef __cplusplus
extern "C"
{
#endif

#include <windows.h>
#include "vector.h"
#include "system.h"
#include "eventsystem.h"
#include "defines.h"

//main class of window
class DLL_EXPORT WFP_Window
{
private:
    WFP_Pos wpos; //position of window
    WFP_Size wsize; //size of window
    const char* wclassname; //lassname
    const char* wname; //window title

    WNDCLASS wndclass; //wndclass of window
    HINSTANCE hinst; //hinst of window
    HWND hwnd; //hwnd of window
    MSG msg; //event msg of window

    WFP_Error* error; //error holder

    bool wrun;

    //wndproc
    static LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
public:
    //constructors
    WFP_Window();
    WFP_Window(WFP_Size);
    WFP_Window(WFP_Size,const char*);
    WFP_Window(WFP_Size,WFP_Pos,const char* ="WFP Window");

    //close function
    void close();

    //getters
    bool isRun();
    WFP_Error* getError();
    WFP_EventHolder getEventHolder();
};

#ifdef __cplusplus
}
#endif
#endif // WINDOW_H_INCLUDED
