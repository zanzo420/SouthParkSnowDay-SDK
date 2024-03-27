#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ArtTool_LightInterface.ArtTool_LightInterface_C
class IArtTool_LightInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IArtTool_LightInterface_C* GetDefaultObj();

	void LM_GatherInfo(bool* MultipleLights, class UClass** Light_Type, class FString* FolderName, TArray<struct FVector>* Light_Locations, TArray<struct FRotator>* Light_Orientations, TArray<struct FVector>* Light_SourceSize);
};

}


