#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_MaxStamina.Attribute_MaxStamina_C
// (None)

class UClass* UAttribute_MaxStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_MaxStamina_C");

	return Clss;
}


// Attribute_MaxStamina_C Attribute_MaxStamina.Default__Attribute_MaxStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_MaxStamina_C* UAttribute_MaxStamina_C::GetDefaultObj()
{
	static class UAttribute_MaxStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_MaxStamina_C*>(UAttribute_MaxStamina_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_MaxStamina.Attribute_MaxStamina_C.RefreshMaxStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurrentValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_MaxStamina_C::RefreshMaxStamina(float CallFunc_GetCurrentValue_ReturnValue, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxStamina_C", "RefreshMaxStamina");

	Params::UAttribute_MaxStamina_C_RefreshMaxStamina_Params Parms{};

	Parms.CallFunc_GetCurrentValue_ReturnValue = CallFunc_GetCurrentValue_ReturnValue;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxStamina.Attribute_MaxStamina_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_MaxStamina_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxStamina_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_MaxStamina.Attribute_MaxStamina_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxStamina_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxStamina_C", "OnDecreased");

	Params::UAttribute_MaxStamina_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxStamina.Attribute_MaxStamina_C.OnIncreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountIncreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxStamina_C::OnIncreased(float AmountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxStamina_C", "OnIncreased");

	Params::UAttribute_MaxStamina_C_OnIncreased_Params Parms{};

	Parms.AmountIncreased = AmountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_MaxStamina.Attribute_MaxStamina_C.ExecuteUbergraph_Attribute_MaxStamina
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_amountIncreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_MaxStamina_C::ExecuteUbergraph_Attribute_MaxStamina(int32 EntryPoint, float K2Node_Event_amountDecreased, float K2Node_Event_amountIncreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_MaxStamina_C", "ExecuteUbergraph_Attribute_MaxStamina");

	Params::UAttribute_MaxStamina_C_ExecuteUbergraph_Attribute_MaxStamina_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.K2Node_Event_amountIncreased = K2Node_Event_amountIncreased;

	UObject::ProcessEvent(Func, &Parms);

}

}


