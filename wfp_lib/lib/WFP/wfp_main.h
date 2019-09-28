//WFP - Windows Functions Library
//Vlad Yanchuk 2019
//
// Main file of library
//
#ifndef WFP_MAIN_H_INCLUDED
#define WFP_MAIN_H_INCLUDED

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif
#ifdef __cplusplus
extern "C"
{
#endif

#include "Core/vector.h"
#include "Core/window.h"
#include "Core/eventsystem.h"
#include "Core/video.h"

#ifdef __cplusplus
}
#endif
#endif // WFP_MAIN_H_INCLUDED
