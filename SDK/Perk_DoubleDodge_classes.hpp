#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x90 - 0x81)
// BlueprintGeneratedClass Perk_DoubleDodge.Perk_DoubleDodge_C
class UPerk_DoubleDodge_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPerk_DoubleDodge_C* GetDefaultObj();

	void OnPerkStackChangeEvent(class AQtnBodyPawn* TargetBodyPawn, int32 PreviousLevel, int32 NewLevel, bool IsServer);
	void ExecuteUbergraph_Perk_DoubleDodge(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, int32 K2Node_Event_PreviousLevel, int32 K2Node_Event_NewLevel, bool K2Node_Event_isServer, bool CallFunc_Greater_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
};

}


