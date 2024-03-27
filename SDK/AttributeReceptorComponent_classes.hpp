#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x118 - 0xE0)
// BlueprintGeneratedClass AttributeReceptorComponent.AttributeReceptorComponent_C
class UAttributeReceptorComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UObject*>                       AttributeContributors_ServerOnly;                  // 0xE8(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UClass*                                ThresholdAttribute;                                // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IncreasePerSecond;                                 // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3018[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnBase_C*                       OwningBody;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnGameState*                         CachedGameState;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttributeReceptorComponent_C* GetDefaultObj();

	void EnsureAttribute_ServerOnly(TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddAttribute_self_CastInput, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void DisplayDebugAttributeReceptor(class UQtnDebugWrapper*& DebugWrapper, class UQtnDebugWrapper* LocalDebugWrapper, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UObject* CallFunc_Array_Get_Item, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
	void RefreshReceptorSettings_ServerOnly();
	void PurgeInvalidContributors_ServerOnly(class UObject* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue);
	void ShouldIncreaseAttribute_ServerOnly(bool* Yes, bool* CanStopTicking, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_CanBeDamaged_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UnRegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, int32 CallFunc_Array_AddUnique_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_AttributeReceptorComponent(int32 EntryPoint, bool CallFunc_IsCombatInhibited_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetCurrentValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_RemoveAttribute_self_CastInput, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue);
};

}


