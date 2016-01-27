#include "s3e.h"
#include "IwDebug.h"
#include "Iw2DSceneGraph.h"
#include "IwGx.h"
#include "Game.h"

// Main entry point for the application
int main()
{
    //Initialise graphics system(s)
    Iw2DInit();

	Game* game = new Game();
    // Loop forever, until the user or the OS performs some action to quit the app
    while (!s3eDeviceCheckQuitRequest())
    {
        //Update the input systems
        s3eKeyboardUpdate();

        s3ePointerUpdate();

        Iw2DSurfaceClear(0xffffffff);
        
        //Draws Surface to screen
        Iw2DSurfaceShow();

        // Sleep for 0ms to allow the OS to process events etc.
        s3eDeviceYield(0);
    }

    //Terminate modules being used
    Iw2DTerminate();
    
    // Return
    return 0;
}
