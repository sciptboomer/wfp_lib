#include <iostream>
#include "wfp_main.h"

using namespace std;

int main()
{
    WFP_Window window(WFP_Size(1080,720));

    if(window.getError()!=NULL){
        WFP_DisplayError(window.getError());
    }
    cout<<"WFP window init\n";

    while(window.isRun())
    {
        WFP_EventHolder event = window.getEventHolder();
        switch(event.event){
            case WFP_EVENT_CLOSE:
                cout<<"WFP EVENT_CLOSE\n";
                window.close();
                break;
        }
    }
    return 0;
}
