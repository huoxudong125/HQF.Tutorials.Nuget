// HQF.Tutorials.Nuget.Platforms.X86.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "HQF.Tutorials.Nuget.Platforms.X86.h"


// This is an example of an exported variable
HQFTUTORIALSNUGETPLATFORMSX86_API int nHQFTutorialsNugetPlatformsX86=0;

// This is an example of an exported function.
HQFTUTORIALSNUGETPLATFORMSX86_API int fnHQFTutorialsNugetPlatformsX86(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see HQF.Tutorials.Nuget.Platforms.X86.h for the class definition
CHQFTutorialsNugetPlatformsX86::CHQFTutorialsNugetPlatformsX86()
{
    return;
}
