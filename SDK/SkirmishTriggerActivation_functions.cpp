#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishTriggerActivation.SkirmishTriggerActivation_C
// (None)

class UClass* USkirmishTriggerActivation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishTriggerActivation_C");

	return Clss;
}


// SkirmishTriggerActivation_C SkirmishTriggerActivation.Default__SkirmishTriggerActivation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishTriggerActivation_C* USkirmishTriggerActivation_C::GetDefaultObj()
{
	static class USkirmishTriggerActivation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishTriggerActivation_C*>(USkirmishTriggerActivation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishTriggerActivation.SkirmishTriggerActivation_C.OnSkirmishInit
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishTriggerActivation_C::OnSkirmishInit(class AQtnSkirmish* OwningSkirmish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerActivation_C", "OnSkirmishInit");

	Params::USkirmishTriggerActivation_C_OnSkirmishInit_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerActivation.SkirmishTriggerActivation_C.SkirmishPlayerEnterEvent_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnSkirmish*                EnteredSkirmish                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        PlayersWithinVolume                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void USkirmishTriggerActivation_C::SkirmishPlayerEnterEvent_Event_0(class AQtnSkirmish* EnteredSkirmish, TArray<class AQtnBodyPawn*>& PlayersWithinVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerActivation_C", "SkirmishPlayerEnterEvent_Event_0");

	Params::USkirmishTriggerActivation_C_SkirmishPlayerEnterEvent_Event_0_Params Parms{};

	Parms.EnteredSkirmish = EnteredSkirmish;
	Parms.PlayersWithinVolume = PlayersWithinVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SkirmishTriggerActivation.SkirmishTriggerActivation_C.ExecuteUbergraph_SkirmishTriggerActivation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AQtnSkirmish*                K2Node_Event_owningSkirmish                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies                 (ReferenceParm, ContainsInstancedReference)
// class AQtnBodyPawn*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnSkirmish*                K2Node_CustomEvent_enteredSkirmish                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        K2Node_CustomEvent_playersWithinVolume                           (ConstParm, ReferenceParm, ContainsInstancedReference)

void USkirmishTriggerActivation_C::ExecuteUbergraph_SkirmishTriggerActivation(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnSkirmish* K2Node_Event_owningSkirmish, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnSkirmish* K2Node_CustomEvent_enteredSkirmish, TArray<class AQtnBodyPawn*>& K2Node_CustomEvent_playersWithinVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishTriggerActivation_C", "ExecuteUbergraph_SkirmishTriggerActivation");

	Params::USkirmishTriggerActivation_C_ExecuteUbergraph_SkirmishTriggerActivation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_owningSkirmish = K2Node_Event_owningSkirmish;
	Parms.CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies = CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_enteredSkirmish = K2Node_CustomEvent_enteredSkirmish;
	Parms.K2Node_CustomEvent_playersWithinVolume = K2Node_CustomEvent_playersWithinVolume;

	UObject::ProcessEvent(Func, &Parms);

}

}


