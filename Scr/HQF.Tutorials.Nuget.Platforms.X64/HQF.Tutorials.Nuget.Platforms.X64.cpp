// HQF.Tutorials.Nuget.Platforms.X64.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "HQF.Tutorials.Nuget.Platforms.X64.h"


// This is an example of an exported variable
HQFTUTORIALSNUGETPLATFORMSX64_API int nHQFTutorialsNugetPlatformsX64=0;

// This is an example of an exported function.
HQFTUTORIALSNUGETPLATFORMSX64_API int fnHQFTutorialsNugetPlatformsX64(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see HQF.Tutorials.Nuget.Platforms.X64.h for the class definition
CHQFTutorialsNugetPlatformsX64::CHQFTutorialsNugetPlatformsX64()
{
    return;
}
