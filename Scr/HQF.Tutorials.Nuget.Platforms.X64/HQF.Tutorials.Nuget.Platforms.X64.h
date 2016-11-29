// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the HQFTUTORIALSNUGETPLATFORMSX64_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// HQFTUTORIALSNUGETPLATFORMSX64_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HQFTUTORIALSNUGETPLATFORMSX64_EXPORTS
#define HQFTUTORIALSNUGETPLATFORMSX64_API __declspec(dllexport)
#else
#define HQFTUTORIALSNUGETPLATFORMSX64_API __declspec(dllimport)
#endif

// This class is exported from the HQF.Tutorials.Nuget.Platforms.X64.dll
class HQFTUTORIALSNUGETPLATFORMSX64_API CHQFTutorialsNugetPlatformsX64 {
public:
	CHQFTutorialsNugetPlatformsX64(void);
	// TODO: add your methods here.
};

extern HQFTUTORIALSNUGETPLATFORMSX64_API int nHQFTutorialsNugetPlatformsX64;

HQFTUTORIALSNUGETPLATFORMSX64_API int fnHQFTutorialsNugetPlatformsX64(void);
