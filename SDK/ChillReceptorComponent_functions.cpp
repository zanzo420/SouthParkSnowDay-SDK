#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChillReceptorComponent.ChillReceptorComponent_C
// (None)

class UClass* UChillReceptorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChillReceptorComponent_C");

	return Clss;
}


// ChillReceptorComponent_C ChillReceptorComponent.Default__ChillReceptorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChillReceptorComponent_C* UChillReceptorComponent_C::GetDefaultObj()
{
	static class UChillReceptorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChillReceptorComponent_C*>(UChillReceptorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChillReceptorComponent.ChillReceptorComponent_C.UnRegisterAttributeContributor_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContributingObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillReceptorComponent_C::UnRegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "UnRegisterAttributeContributor_ServerOnly");

	Params::UChillReceptorComponent_C_UnRegisterAttributeContributor_ServerOnly_Params Parms{};

	Parms.ContributingObject = ContributingObject;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillReceptorComponent.ChillReceptorComponent_C.RegisterAttributeContributor_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ContributingObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillReceptorComponent_C::RegisterAttributeContributor_ServerOnly(class UObject* ContributingObject, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "RegisterAttributeContributor_ServerOnly");

	Params::UChillReceptorComponent_C_RegisterAttributeContributor_ServerOnly_Params Parms{};

	Parms.ContributingObject = ContributingObject;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.CallFunc_IsObjectOfType_outputPin_1 = CallFunc_IsObjectOfType_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillReceptorComponent.ChillReceptorComponent_C.UnregisterChillingSources_InternalServerOnly
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ChillingSourceToRemove                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillReceptorComponent_C::UnregisterChillingSources_InternalServerOnly(class UObject* ChillingSourceToRemove, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "UnregisterChillingSources_InternalServerOnly");

	Params::UChillReceptorComponent_C_UnregisterChillingSources_InternalServerOnly_Params Parms{};

	Parms.ChillingSourceToRemove = ChillingSourceToRemove;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillReceptorComponent.ChillReceptorComponent_C.RegisterChillingSources_InternalServerOnly
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ChillingSourceToAdd                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnMovementComponent*       CallFunc_GetQtnMovementComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChillReceptorComponent_C::RegisterChillingSources_InternalServerOnly(class UObject* ChillingSourceToAdd, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "RegisterChillingSources_InternalServerOnly");

	Params::UChillReceptorComponent_C_RegisterChillingSources_InternalServerOnly_Params Parms{};

	Parms.ChillingSourceToAdd = ChillingSourceToAdd;
	Parms.CallFunc_GetQtnMovementComponent_ReturnValue = CallFunc_GetQtnMovementComponent_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChillReceptorComponent.ChillReceptorComponent_C.ShouldIncreaseAttribute_ServerOnly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Yes                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanStopTicking                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldIncreaseAttribute_ServerOnly_yes                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDamageImmunity_permanentlyImmune                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDamageImmunity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillReceptorComponent_C::ShouldIncreaseAttribute_ServerOnly(bool* Yes, bool* CanStopTicking, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_HasDamageImmunity_permanentlyImmune, bool CallFunc_HasDamageImmunity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "ShouldIncreaseAttribute_ServerOnly");

	Params::UChillReceptorComponent_C_ShouldIncreaseAttribute_ServerOnly_Params Parms{};

	Parms.CallFunc_ShouldIncreaseAttribute_ServerOnly_yes = CallFunc_ShouldIncreaseAttribute_ServerOnly_yes;
	Parms.CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking = CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking;
	Parms.CallFunc_HasDamageImmunity_permanentlyImmune = CallFunc_HasDamageImmunity_permanentlyImmune;
	Parms.CallFunc_HasDamageImmunity_ReturnValue = CallFunc_HasDamageImmunity_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

	if (CanStopTicking != nullptr)
		*CanStopTicking = Parms.CanStopTicking;

}


// Function ChillReceptorComponent.ChillReceptorComponent_C.RefreshReceptorSettings_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerk_IceMovement_C*         CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChillReceptorComponent_C::RefreshReceptorSettings_ServerOnly(class UPerk_IceMovement_C* CallFunc_FindPerk_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChillReceptorComponent_C", "RefreshReceptorSettings_ServerOnly");

	Params::UChillReceptorComponent_C_RefreshReceptorSettings_ServerOnly_Params Parms{};

	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


