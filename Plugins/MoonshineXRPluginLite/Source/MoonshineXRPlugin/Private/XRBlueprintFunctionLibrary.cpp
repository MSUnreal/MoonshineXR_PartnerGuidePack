#include "XRBlueprintFunctionLibrary.h"
#include <IPAddress.h>
#include "SocketSubsystem.h"
#include "GenericPlatform/GenericPlatformProcess.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"

FString UXRBlueprintFunctionLibrary::GetLocalHostIPAddress()
{
	bool bCanBind = false;
	TSharedRef<FInternetAddr> LocalIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, bCanBind);
	return (LocalIp->IsValid() ? LocalIp->ToString(false) : "");
}

FString UXRBlueprintFunctionLibrary::GetLocalHostName()
{
	return FString::Printf(TEXT("%s"), FWindowsPlatformProcess::ComputerName());
}

FString UXRBlueprintFunctionLibrary::LoadPythonFileToString(FString FileName)
{
	FString OutString;
	FFileHelper::LoadFileToString(OutString, *(FPaths::ProjectPluginsDir() + "MoonshineXRPlugin/Source/MoonshineXRPlugin/Python/" + FileName));
	return OutString;
}
