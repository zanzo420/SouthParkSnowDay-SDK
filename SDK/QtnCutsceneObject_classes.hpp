#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass QtnCutsceneObject.QtnCutsceneObject_C
class UQtnCutsceneObject_C : public UObject
{
public:
	TArray<struct FTribunal_CharacterResponse>   VO_CallStructs;                                    // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTribunal_CharacterResponse>   VO_ResponseStructs;                                // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UQtnCutsceneObject_C* GetDefaultObj();

};

}


