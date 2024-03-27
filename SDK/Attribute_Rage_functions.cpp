#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_Rage.Attribute_Rage_C
// (None)

class UClass* UAttribute_Rage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_Rage_C");

	return Clss;
}


// Attribute_Rage_C Attribute_Rage.Default__Attribute_Rage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_Rage_C* UAttribute_Rage_C::GetDefaultObj()
{
	static class UAttribute_Rage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_Rage_C*>(UAttribute_Rage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_Rage.Attribute_Rage_C.OnDecreased
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AmountDecreased                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Rage_C::OnDecreased(float AmountDecreased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Rage_C", "OnDecreased");

	Params::UAttribute_Rage_C_OnDecreased_Params Parms{};

	Parms.AmountDecreased = AmountDecreased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_Rage.Attribute_Rage_C.ExecuteUbergraph_Attribute_Rage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRagaholic_Scaler_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetUpgrade_Ragaholic_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_amountDecreased                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_Rage_C::ExecuteUbergraph_Attribute_Rage(int32 EntryPoint, class AActor* Temp_object_Variable, float CallFunc_GetRagaholic_Scaler_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetUpgrade_Ragaholic_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_amountDecreased, class UObject* CallFunc_GetOwningObject_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetReferenceActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_Rage_C", "ExecuteUbergraph_Attribute_Rage");

	Params::UAttribute_Rage_C_ExecuteUbergraph_Attribute_Rage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetRagaholic_Scaler_ReturnValue = CallFunc_GetRagaholic_Scaler_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUpgrade_Ragaholic_ReturnValue = CallFunc_GetUpgrade_Ragaholic_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_amountDecreased = K2Node_Event_amountDecreased;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


