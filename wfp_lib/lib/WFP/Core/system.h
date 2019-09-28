//WFP - Windows Functions Library
//Vlad Yanchuk 2019
//
#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif
#ifdef __cplusplus
extern "C"
{
#endif

#define WFP_ERROR_WNDCLASSREG 0
#define WFP_ERROR_HWNDCREATE 1

//error structure
typedef struct{
    int erorrid;
    const char* error_desc;
} WFP_Error;

//function that create error
WFP_Error* DLL_EXPORT WFP_CreateError(int id,const char* error);

//function that display error
void DLL_EXPORT WFP_DisplayError(WFP_Error* error);

#ifdef __cplusplus
}
#endif
#endif // SYSTEM_H_INCLUDED
