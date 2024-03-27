#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicDoor.BasicDoor_C
// (Actor)

class UClass* ABasicDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicDoor_C");

	return Clss;
}


// BasicDoor_C BasicDoor.Default__BasicDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasicDoor_C* ABasicDoor_C::GetDefaultObj()
{
	static class ABasicDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasicDoor_C*>(ABasicDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicDoor.BasicDoor_C.AnimateDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpen                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Ratio                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicDoor_C::AnimateDoorState(bool IsOpen, float Ratio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "AnimateDoorState");

	Params::ABasicDoor_C_AnimateDoorState_Params Parms{};

	Parms.IsOpen = IsOpen;
	Parms.Ratio = Ratio;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicDoor.BasicDoor_C.HandleDoorStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDoorClosed_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicDoor_C::HandleDoorStateChange(bool CallFunc_IsDoorClosed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "HandleDoorStateChange");

	Params::ABasicDoor_C_HandleDoorStateChange_Params Parms{};

	Parms.CallFunc_IsDoorClosed_ReturnValue = CallFunc_IsDoorClosed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicDoor.BasicDoor_C.SetEnabledForNPCs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicDoor_C::SetEnabledForNPCs(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "SetEnabledForNPCs");

	Params::ABasicDoor_C_SetEnabledForNPCs_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicDoor.BasicDoor_C.SetEnabledForPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicDoor_C::SetEnabledForPlayers(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "SetEnabledForPlayers");

	Params::ABasicDoor_C_SetEnabledForPlayers_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicDoor.BasicDoor_C.OnLogicalDoorStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnDoorState           PreviousLogicalState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDoorState           NewLogicalState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    UsingPawn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicDoor_C::OnLogicalDoorStateChange(enum class EQtnDoorState PreviousLogicalState, enum class EQtnDoorState NewLogicalState, class AQtnPawn* UsingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "OnLogicalDoorStateChange");

	Params::ABasicDoor_C_OnLogicalDoorStateChange_Params Parms{};

	Parms.PreviousLogicalState = PreviousLogicalState;
	Parms.NewLogicalState = NewLogicalState;
	Parms.UsingPawn = UsingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicDoor.BasicDoor_C.QtnToggleDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicDoor_C::QtnToggleDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "QtnToggleDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicDoor.BasicDoor_C.ExecuteUbergraph_BasicDoor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnDoorState           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDoorState           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDoorState           K2Node_Event_previousLogicalState                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnDoorState           K2Node_Event_newLogicalState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    K2Node_Event_usingPawn                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnDoorState           K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicDoor_C::ExecuteUbergraph_BasicDoor(int32 EntryPoint, bool Temp_bool_Variable, enum class EQtnDoorState Temp_byte_Variable, enum class EQtnDoorState Temp_byte_Variable_1, enum class EQtnDoorState K2Node_Event_previousLogicalState, enum class EQtnDoorState K2Node_Event_newLogicalState, class AQtnPawn* K2Node_Event_usingPawn, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RandomBool_ReturnValue, enum class EQtnDoorState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicDoor_C", "ExecuteUbergraph_BasicDoor");

	Params::ABasicDoor_C_ExecuteUbergraph_BasicDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_previousLogicalState = K2Node_Event_previousLogicalState;
	Parms.K2Node_Event_newLogicalState = K2Node_Event_newLogicalState;
	Parms.K2Node_Event_usingPawn = K2Node_Event_usingPawn;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


