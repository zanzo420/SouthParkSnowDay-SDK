#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrapCrapperMine.TrapCrapperMine_C
// (Actor)

class UClass* ATrapCrapperMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrapCrapperMine_C");

	return Clss;
}


// TrapCrapperMine_C TrapCrapperMine.Default__TrapCrapperMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrapCrapperMine_C* ATrapCrapperMine_C::GetDefaultObj()
{
	static class ATrapCrapperMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrapCrapperMine_C*>(ATrapCrapperMine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrapCrapperMine.TrapCrapperMine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATrapCrapperMine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapCrapperMine_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrapCrapperMine.TrapCrapperMine_C.LocalCutsceneEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCutsceneActive                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DoWorldCleanup                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrapCrapperMine_C::LocalCutsceneEvent_Event(bool IsCutsceneActive, bool DoWorldCleanup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapCrapperMine_C", "LocalCutsceneEvent_Event");

	Params::ATrapCrapperMine_C_LocalCutsceneEvent_Event_Params Parms{};

	Parms.IsCutsceneActive = IsCutsceneActive;
	Parms.DoWorldCleanup = DoWorldCleanup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrapCrapperMine.TrapCrapperMine_C.CombatInhibitedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInhibited                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrapCrapperMine_C::CombatInhibitedEvent_Event(bool IsInhibited, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapCrapperMine_C", "CombatInhibitedEvent_Event");

	Params::ATrapCrapperMine_C_CombatInhibitedEvent_Event_Params Parms{};

	Parms.IsInhibited = IsInhibited;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrapCrapperMine.TrapCrapperMine_C.ExecuteUbergraph_TrapCrapperMine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isInhibited                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isServer                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isCutsceneActive                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_doWorldCleanup                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrapCrapperMine_C::ExecuteUbergraph_TrapCrapperMine(int32 EntryPoint, bool K2Node_CustomEvent_isInhibited, bool K2Node_CustomEvent_isServer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrapCrapperMine_C", "ExecuteUbergraph_TrapCrapperMine");

	Params::ATrapCrapperMine_C_ExecuteUbergraph_TrapCrapperMine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_isInhibited = K2Node_CustomEvent_isInhibited;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_isCutsceneActive = K2Node_CustomEvent_isCutsceneActive;
	Parms.K2Node_CustomEvent_doWorldCleanup = K2Node_CustomEvent_doWorldCleanup;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


