#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_IsCheating.Attribute_IsCheating_C
// (None)

class UClass* UAttribute_IsCheating_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_IsCheating_C");

	return Clss;
}


// Attribute_IsCheating_C Attribute_IsCheating.Default__Attribute_IsCheating_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_IsCheating_C* UAttribute_IsCheating_C::GetDefaultObj()
{
	static class UAttribute_IsCheating_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_IsCheating_C*>(UAttribute_IsCheating_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_IsCheating.Attribute_IsCheating_C.OnTriggerHit
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Threshold                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAttributeThresholdDirectionDirection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_IsCheating_C::OnTriggerHit(int32 Index, float Threshold, enum class EQtnAttributeThresholdDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "OnTriggerHit");

	Params::UAttribute_IsCheating_C_OnTriggerHit_Params Parms{};

	Parms.Index = Index;
	Parms.Threshold = Threshold;
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_IsCheating.Attribute_IsCheating_C.OnRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_IsCheating_C::OnRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "OnRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_IsCheating.Attribute_IsCheating_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_IsCheating_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_IsCheating.Attribute_IsCheating_C.ExecuteUbergraph_Attribute_IsCheating
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_threshold                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnAttributeThresholdDirectionK2Node_Event_direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_IsCheating_C::ExecuteUbergraph_Attribute_IsCheating(int32 EntryPoint, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_Event_index, float K2Node_Event_threshold, enum class EQtnAttributeThresholdDirection K2Node_Event_direction, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "ExecuteUbergraph_Attribute_IsCheating");

	Params::UAttribute_IsCheating_C_ExecuteUbergraph_Attribute_IsCheating_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_index = K2Node_Event_index;
	Parms.K2Node_Event_threshold = K2Node_Event_threshold;
	Parms.K2Node_Event_direction = K2Node_Event_direction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_HasAuthority_outputPin_1 = CallFunc_HasAuthority_outputPin_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_IsCheating.Attribute_IsCheating_C.Cheating Has Stopped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttribute_IsCheating_C::Cheating_Has_Stopped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "Cheating Has Stopped__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_IsCheating.Attribute_IsCheating_C.Cheating Has Begun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAttribute_IsCheating_C::Cheating_Has_Begun__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_IsCheating_C", "Cheating Has Begun__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


