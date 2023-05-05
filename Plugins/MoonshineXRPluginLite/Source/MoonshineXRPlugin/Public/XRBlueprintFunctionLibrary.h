#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "XRBlueprintFunctionLibrary.generated.h"

UCLASS()
class MOONSHINEXRPLUGIN_API UXRBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	// Get the ip address of local host
	UFUNCTION(BlueprintCallable, Category = "MoonShineXR")
	static FString GetLocalHostIPAddress();

	// Get the computer name of local host
	UFUNCTION(BlueprintCallable, Category = "MoonShineXR")
	static FString GetLocalHostName();

	// Load Python file from plugin dir
	UFUNCTION(BlueprintCallable, Category = "MoonShineXR")
	static FString LoadPythonFileToString(FString FileName);
};

