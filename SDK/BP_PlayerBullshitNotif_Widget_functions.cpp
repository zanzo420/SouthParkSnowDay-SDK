#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C
// (None)

class UClass* UBP_PlayerBullshitNotif_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerBullshitNotif_Widget_C");

	return Clss;
}


// BP_PlayerBullshitNotif_Widget_C BP_PlayerBullshitNotif_Widget.Default__BP_PlayerBullshitNotif_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerBullshitNotif_Widget_C* UBP_PlayerBullshitNotif_Widget_C::GetDefaultObj()
{
	static class UBP_PlayerBullshitNotif_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerBullshitNotif_Widget_C*>(UBP_PlayerBullshitNotif_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C.InitRadial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOriginalBodyPawn_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerbComponent*           CallFunc_GetVerbComponent_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQtnVerb*>            CallFunc_GetVerbs_verbs                                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtn_CheatVerb_Archetype_C*  K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetElapsedVerbTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerBullshitNotif_Widget_C::InitRadial(class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class AQtnBodyPawn* CallFunc_GetOriginalBodyPawn_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetElapsedVerbTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBullshitNotif_Widget_C", "InitRadial");

	Params::UBP_PlayerBullshitNotif_Widget_C_InitRadial_Params Parms{};

	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetOriginalBodyPawn_ReturnValue = CallFunc_GetOriginalBodyPawn_ReturnValue;
	Parms.CallFunc_GetVerbComponent_ReturnValue = CallFunc_GetVerbComponent_ReturnValue;
	Parms.CallFunc_GetVerbs_verbs = CallFunc_GetVerbs_verbs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype = K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetElapsedVerbTime_ReturnValue = CallFunc_GetElapsedVerbTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C.RefreshRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerBullshitNotif_Widget_C::RefreshRadial(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBullshitNotif_Widget_C", "RefreshRadial");

	Params::UBP_PlayerBullshitNotif_Widget_C_RefreshRadial_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerBullshitNotif_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBullshitNotif_Widget_C", "PreConstruct");

	Params::UBP_PlayerBullshitNotif_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerBullshitNotif_Widget.BP_PlayerBullshitNotif_Widget_C.ExecuteUbergraph_BP_PlayerBullshitNotif_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerBullshitNotif_Widget_C::ExecuteUbergraph_BP_PlayerBullshitNotif_Widget(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerBullshitNotif_Widget_C", "ExecuteUbergraph_BP_PlayerBullshitNotif_Widget");

	Params::UBP_PlayerBullshitNotif_Widget_C_ExecuteUbergraph_BP_PlayerBullshitNotif_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


