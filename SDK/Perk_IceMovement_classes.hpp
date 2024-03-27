#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0x9C - 0x81)
// BlueprintGeneratedClass Perk_IceMovement.Perk_IceMovement_C
class UPerk_IceMovement_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_1905[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        IceSpeedMultiplier;                                // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OriginalIceSpeedMultiplier;                        // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChillRateModifier;                                 // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_IceMovement_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnPerkStackChangeEvent(class AQtnBodyPawn* TargetBodyPawn, int32 PreviousLevel, int32 NewLevel, bool IsServer);
	void ExecuteUbergraph_Perk_IceMovement(int32 EntryPoint, bool Temp_bool_Variable, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, int32 K2Node_Event_PreviousLevel, int32 K2Node_Event_NewLevel, bool K2Node_Event_isServer, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, bool CallFunc_IsHero_ReturnValue, float K2Node_Select_Default, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1);
};

}


