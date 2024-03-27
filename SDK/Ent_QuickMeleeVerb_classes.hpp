#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xA19 - 0x9F0)
// BlueprintGeneratedClass Ent_QuickMeleeVerb.Ent_QuickMeleeVerb_C
class UEnt_QuickMeleeVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnPawnMontage                       Verb_Action;                                       // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       Verb_Action_0;                                     // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Done;                                         // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UEnt_QuickMeleeVerb_C* GetDefaultObj();

	void SpawnDangerVolume_ServerOnly(const struct FQtnRangedFloat& K2Node_MakeStruct_QtnRangedFloat, const struct FQtnDangerParameters& K2Node_MakeStruct_QtnDangerParameters, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetPawnFeetLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnDangerVolume* CallFunc_SpawnDangerSphere_ServerOnly_ReturnValue);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbEquipChange(bool IsEquipped, bool IsServer);
	void ExecuteUbergraph_Ent_QuickMeleeVerb(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_4, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_3, TArray<struct FQtnPawnMontage>& K2Node_MakeArray_Array, const struct FQtnPawnMontage& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_2, float CallFunc_StartVerbAction_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, bool K2Node_Event_isEquipped, bool K2Node_Event_isServer, bool CallFunc_UseSwitchQuality_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage_1);
};

}


