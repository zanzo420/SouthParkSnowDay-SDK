#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C
// (None)

class UClass* UAttribute_SE_Chilled_Threshold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attribute_SE_Chilled_Threshold_C");

	return Clss;
}


// Attribute_SE_Chilled_Threshold_C Attribute_SE_Chilled_Threshold.Default__Attribute_SE_Chilled_Threshold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttribute_SE_Chilled_Threshold_C* UAttribute_SE_Chilled_Threshold_C::GetDefaultObj()
{
	static class UAttribute_SE_Chilled_Threshold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttribute_SE_Chilled_Threshold_C*>(UAttribute_SE_Chilled_Threshold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_SE_Chilled_Threshold_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_Chilled_Threshold_C", "OnTick");

	Params::UAttribute_SE_Chilled_Threshold_C_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C.OnAdded
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_SE_Chilled_Threshold_C::OnAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_Chilled_Threshold_C", "OnAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C.OnRemoved
// (Event, Public, BlueprintEvent)
// Parameters:

void UAttribute_SE_Chilled_Threshold_C::OnRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_Chilled_Threshold_C", "OnRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Attribute_SE_Chilled_Threshold.Attribute_SE_Chilled_Threshold_C.ExecuteUbergraph_Attribute_SE_Chilled_Threshold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_deltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwningObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>K2Node_DynamicCast_AsQtn_Attribute_Container_Interface           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetReferenceActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldIncreaseAttribute_ServerOnly_yes                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*>CallFunc_GetOverlayMaterialInstances_ReturnValue                 (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*>CallFunc_GetPostProcessMaterialInstances_ReturnValue             (ReferenceParm)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCalculatedThresholdValue_value                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAttribute_SE_Chilled_Threshold_C::ExecuteUbergraph_Attribute_SE_Chilled_Threshold(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* Temp_object_Variable, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_deltaTime, class UObject* CallFunc_GetOwningObject_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetReferenceActor_ReturnValue, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_yes, bool CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetOverlayMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UMaterialInstanceDynamic*>& CallFunc_GetPostProcessMaterialInstances_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, float CallFunc_GetCalculatedThresholdValue_value, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attribute_SE_Chilled_Threshold_C", "ExecuteUbergraph_Attribute_SE_Chilled_Threshold");

	Params::UAttribute_SE_Chilled_Threshold_C_ExecuteUbergraph_Attribute_SE_Chilled_Threshold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_deltaTime = K2Node_Event_deltaTime;
	Parms.CallFunc_GetOwningObject_ReturnValue = CallFunc_GetOwningObject_ReturnValue;
	Parms.CallFunc_HasAuthority_outputPin = CallFunc_HasAuthority_outputPin;
	Parms.K2Node_DynamicCast_AsQtn_Attribute_Container_Interface = K2Node_DynamicCast_AsQtn_Attribute_Container_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetReferenceActor_ReturnValue = CallFunc_GetReferenceActor_ReturnValue;
	Parms.CallFunc_ShouldIncreaseAttribute_ServerOnly_yes = CallFunc_ShouldIncreaseAttribute_ServerOnly_yes;
	Parms.CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking = CallFunc_ShouldIncreaseAttribute_ServerOnly_canStopTicking;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOverlayMaterialInstances_ReturnValue = CallFunc_GetOverlayMaterialInstances_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPostProcessMaterialInstances_ReturnValue = CallFunc_GetPostProcessMaterialInstances_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetCalculatedThresholdValue_value = CallFunc_GetCalculatedThresholdValue_value;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


