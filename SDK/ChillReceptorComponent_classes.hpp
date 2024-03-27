#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x128 - 0x118)
// BlueprintGeneratedClass ChillReceptorComponent.ChillReceptorComponent_C
class UChillReceptorComponent_C : public UAttributeReceptorComponent_C
{
public:
	TArray<class UObject*>                       ActiveChillingSources_ServerOnly;                  // 0x118(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UChillReceptorComponent_C* GetDefaultObj();

	void UnRegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void RegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UnregisterChillingSources_InternalServerOnly(class UObject* ChillingSourceToRemove, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void RegisterChillingSources_InternalServerOnly(class UObject* ChillingSourceToAdd, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void ShouldIncreaseAttribute_ServerOnly(bool* Yes, bool* CanStopTicking, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void RefreshReceptorSettings_ServerOnly(class UPerk_IceMovement_C* CallFunc_FindPerk_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


