#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x94 - 0x81)
// BlueprintGeneratedClass Perk_CheeseDustedFingers.Perk_CheeseDustedFingers_C
class UPerk_CheeseDustedFingers_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ChanceToHealTeammatesOnPoofPickup01;               // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_CheeseDustedFingers_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnGameEventEvent_ServerOnly(struct FQtnEventMessage& EventMessage);
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void ExecuteUbergraph_Perk_CheeseDustedFingers(int32 EntryPoint, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, class UQtnPerkComponent* CallFunc_GetOwningPerkComponent_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnPerkComponent* CallFunc_GetOwningPerkComponent_ReturnValue_1, class UBodypawnHealingComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, const struct FQtnEventMessage& K2Node_Event_eventMessage, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, float CallFunc_StaticGetEventContextFloat_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
};

}


