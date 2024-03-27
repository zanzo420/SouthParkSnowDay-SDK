#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x94 - 0x81)
// BlueprintGeneratedClass Perk_PublicWiper.Perk_PublicWiper_C
class UPerk_PublicWiper_C : public UQtnPerkArchetype_C
{
public:
	uint8                                        Pad_6E44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ChancePerInstanceStealTP;                          // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerk_PublicWiper_C* GetDefaultObj();

	float GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue);
	void OnGameEventEvent_ServerOnly(struct FQtnEventMessage& EventMessage);
	void OnActivatePerkEvent(class AQtnBodyPawn* TargetBodyPawn);
	void MulticastOnPerkActivatedEvent(int32 Count, class AQtnBodyPawn* TargetPawn, class AQtnBodyPawn* SourcePawn);
	void ExecuteUbergraph_Perk_PublicWiper(int32 EntryPoint, int32 K2Node_CustomEvent_count, class AQtnBodyPawn* K2Node_CustomEvent_TargetPawn, class AQtnBodyPawn* K2Node_CustomEvent_SourcePawn, const struct FQtnEventMessage& K2Node_Event_eventMessage, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_StaticGetEventContextInt_ReturnValue, class UObject* CallFunc_StaticGetEventWriter_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, float CallFunc_RandomFloat_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, float CallFunc_GetValueOfPerk_ReturnValue, class UQtnPerkComponent* CallFunc_GetOwningPerkComponent_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_StaticGetEventContextGameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
};

}


