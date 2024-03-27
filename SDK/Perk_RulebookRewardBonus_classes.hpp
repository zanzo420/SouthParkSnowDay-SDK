#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x94 - 0x81)
// BlueprintGeneratedClass Perk_RulebookRewardBonus.Perk_RulebookRewardBonus_C
class UPerk_RulebookRewardBonus_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_1237[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Percent_Increase;                                  // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_RulebookRewardBonus_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnPerkStackChangeEvent(class AQtnBodyPawn* TargetBodyPawn, int32 PreviousLevel, int32 NewLevel, bool IsServer);
	void ExecuteUbergraph_Perk_RulebookRewardBonus(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, int32 K2Node_Event_PreviousLevel, int32 K2Node_Event_NewLevel, bool K2Node_Event_isServer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


