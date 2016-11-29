// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the HQFTUTORIALSNUGETPLATFORMSX86_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// HQFTUTORIALSNUGETPLATFORMSX86_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HQFTUTORIALSNUGETPLATFORMSX86_EXPORTS
#define HQFTUTORIALSNUGETPLATFORMSX86_API __declspec(dllexport)
#else
#define HQFTUTORIALSNUGETPLATFORMSX86_API __declspec(dllimport)
#endif

// This class is exported from the HQF.Tutorials.Nuget.Platforms.X86.dll
class HQFTUTORIALSNUGETPLATFORMSX86_API CHQFTutorialsNugetPlatformsX86 {
public:
	CHQFTutorialsNugetPlatformsX86(void);
	// TODO: add your methods here.
};

extern HQFTUTORIALSNUGETPLATFORMSX86_API int nHQFTutorialsNugetPlatformsX86;

HQFTUTORIALSNUGETPLATFORMSX86_API int fnHQFTutorialsNugetPlatformsX86(void);
