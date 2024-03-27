#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x15F0 - 0x15E8)
// BlueprintGeneratedClass BodyPawnAI_Adult_Brute_Liane.BodyPawnAI_Adult_Brute_Liane_C
class ABodyPawnAI_Adult_Brute_Liane_C : public ABodyPawnAI_Adult_Brute_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyPawnAI_Adult_Brute_Liane_C* GetDefaultObj();

	void HandleDeath(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue);
	void OnQtnReadyForGameplay();
	void ExecuteUbergraph_BodyPawnAI_Adult_Brute_Liane(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue);
};

}


