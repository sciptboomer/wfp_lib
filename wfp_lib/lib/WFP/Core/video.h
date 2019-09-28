//WFP - Windows Functions Library
//Vlad Yanchuk 2019
//
#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

//todo - texture support
/*
#include <windows.h>
#include "vector.h"
#include "defines.h"
#include "alloc.h"


class DLL_EXPORT WFP_Texture
{
private:
    WFP_Size size;
    WFP_PixelBuffer* ptr=NULL;
    short id;
    char* name;
public:
    WFP_Texture();
    WFP_Texture
};
*/

#ifdef __cplusplus
}
#endif
#endif // VIDEO_H_INCLUDED
