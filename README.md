# HQF.Tutorials.Nuget
Demo project for Nuget Package.

## Install Nuget

### NuGet CLI

```choco install nuget.commandline```

More info,refer [here](https://docs.nuget.org/ndocs/guides/install-nuget)


### NuGetPackageExplorer

[![NuGetPackageExplorer](https://cloud.githubusercontent.com/assets/5808377/11324261/06c2ccd8-912d-11e5-87e4-9898b2217baa.png)](https://github.com/NuGetPackageExplorer/NuGetPackageExplorer)


## Create a Package

1.
```nuget spec```   

 ![NugetPack](Pics/NugetSpec.png)


2.
``` nuget pack [project name] ```  
 ![nuget pack](Pics/NugetPack.png)


## Error
1. Value cannot be null or an empty string.
![nuget pack](Pics/ValueNull.png)  
[More info](https://github.com/NuGet/Home/issues/2714)

-----
2. Not Build Project  
![nuget pack](Pics/NotBuild.png)

---
3. Error need to specifi the parameter for `nuget pack`
![nuget pack](Pics/NugetPackProp.png)  

We should specify the prop parameter for `nuget pack`  
such as  
```
nuget pakc [projectname] -prop platform=x64 -prop Configuration=Release
```


---
## Package for X64 and X86

[How should I create or upload a 32-bit and 64-bit NuGet package?](http://stackoverflow.com/a/11376762/1616023)