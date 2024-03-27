#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_SE_BleedingThreshold.Attribute_SE_BleedingThreshold_C
// (None)

class UClass* UAttribute_SE_BleedingThreshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_SE_BleedingThreshold_C");

	return Clss;
}


// Attribute_SE_BleedingThreshold_C Attribute_SE_BleedingThreshold.Default__Attribute_SE_BleedingThreshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_SE_BleedingThreshold_C* UAttribute_SE_BleedingThreshold_C::GetDefaultObj()
{
	static class UAttribute_SE_BleedingThreshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_SE_BleedingThreshold_C*>(UAttribute_SE_BleedingThreshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_SE_BleedingThreshold.Attribute_SE_BleedingThreshold_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_SE_BleedingThreshold_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_BleedingThreshold_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_SE_BleedingThreshold.Attribute_SE_BleedingThreshold_C.On Healing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         HealthAttribute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_SE_BleedingThreshold_C::On_Healing(float AmountIncreased, class UAttribute_Health_C* HealthAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_BleedingThreshold_C", "On Healing");

	Params::UAttribute_SE_BleedingThreshold_C_On_Healing_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;
	Parms.HealthAttribute = HealthAttribute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_SE_BleedingThreshold.Attribute_SE_BleedingThreshold_C.ExecuteUbergraph_Attribute_SE_BleedingThreshold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AmountIncreased                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAttribute_Health_C*         K2Node_CustomEvent_healthAttribute                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttribute*               CallFunc_GetAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_HasAttribute_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAttribute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAttribute_Health_C*         K2Node_DynamicCast_AsAttribute_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_SE_BleedingThreshold_C::ExecuteUbergraph_Attribute_SE_BleedingThreshold(int32 EntryPoint, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, float K2Node_CustomEvent_AmountIncreased, class UAttribute_Health_C* K2Node_CustomEvent_healthAttribute, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, class UObject* CallFunc_GetOwningObject_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetReferenceActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_BleedingThreshold_C", "ExecuteUbergraph_Attribute_SE_BleedingThreshold");

	Params::UAttribute_SE_BleedingThreshold_C_ExecuteUbergraph_Attribute_SE_BleedingThreshold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.K2Node_CustomEvent_AmountIncreased = K2Node_CustomEvent_AmountIncreased;
	Parms.K2Node_CustomEvent_healthAttribute = K2Node_CustomEvent_healthAttribute;
	Parms.CallFunc_GetAttribute_self_CastInput = CallFunc_GetAttribute_self_CastInput;
	Parms.CallFunc_GetAttribute_ReturnValue = CallFunc_GetAttribute_ReturnValue;
	Parms.CallFunc_HasAttribute_self_CastInput = CallFunc_HasAttribute_self_CastInput;
	Parms.CallFunc_HasAttribute_ReturnValue = CallFunc_HasAttribute_ReturnValue;
	Parms.K2Node_DynamicCast_AsAttribute_Health = K2Node_DynamicCast_AsAttribute_Health;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.CallFunc_GetOwningObject_ReturnValue_1 = CallFunc_GetOwningObject_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


