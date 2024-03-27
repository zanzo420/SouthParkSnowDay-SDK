#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_AggroGenerationMultiplier.Attribute_AggroGenerationMultiplier_C
// (None)

class UClass* UAttribute_AggroGenerationMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_AggroGenerationMultiplier_C");

	return Clss;
}


// Attribute_AggroGenerationMultiplier_C Attribute_AggroGenerationMultiplier.Default__Attribute_AggroGenerationMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_AggroGenerationMultiplier_C* UAttribute_AggroGenerationMultiplier_C::GetDefaultObj()
{
	static class UAttribute_AggroGenerationMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_AggroGenerationMultiplier_C*>(UAttribute_AggroGenerationMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_AggroGenerationMultiplier.Attribute_AggroGenerationMultiplier_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_AggroGenerationMultiplier_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_AggroGenerationMultiplier_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_AggroGenerationMultiplier.Attribute_AggroGenerationMultiplier_C.OnRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_AggroGenerationMultiplier_C::OnRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_AggroGenerationMultiplier_C", "OnRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_AggroGenerationMultiplier.Attribute_AggroGenerationMultiplier_C.ExecuteUbergraph_Attribute_AggroGenerationMultiplier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_AggroGenerationMultiplier_C::ExecuteUbergraph_Attribute_AggroGenerationMultiplier(int32 EntryPoint, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, class UObject* CallFunc_GetOwningObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_AggroGenerationMultiplier_C", "ExecuteUbergraph_Attribute_AggroGenerationMultiplier");

	Params::UAttribute_AggroGenerationMultiplier_C_ExecuteUbergraph_Attribute_AggroGenerationMultiplier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAuthority_outputPin_1 = CallFunc_HasAuthority_outputPin_1;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1 = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


