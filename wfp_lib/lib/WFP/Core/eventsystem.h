//WFP - Windows Functions Library
//Vlad Yanchuk 2019
//
#ifndef EVENTSYSTEM_H_INCLUDED
#define EVENTSYSTEM_H_INCLUDED

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
#include "defines.h"

struct WFP_EventHolder
{
    int event;
    int param;
    char key;

    WFP_EventHolder(int=WFP_EVENT_NOEVENT,int=WFP_EVENTPARAM_NOPARAM,char=0);
};

class DLL_EXPORT WFP_EventSystem
{
private:
    static WFP_EventHolder eventh;
    WFP_EventSystem();
public:
    static void DLL_EXPORT setEvent(WFP_EventHolder=WFP_EventHolder());
    static WFP_EventHolder DLL_EXPORT getEvent();
};
#ifdef __cplusplus
}
#endif
#endif // EVENTSYSTEM_H_INCLUDED
