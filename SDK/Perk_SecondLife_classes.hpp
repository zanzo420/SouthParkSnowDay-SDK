#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x90 - 0x81)
// BlueprintGeneratedClass Perk_SecondLife.Perk_SecondLife_C
class UPerk_SecondLife_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E4A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPerk_SecondLife_C* GetDefaultObj();

	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void OnDeactivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_SecondLife(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, bool CallFunc_HasAuthority_ReturnValue, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn_1, class UStatusEffect_Revive_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


