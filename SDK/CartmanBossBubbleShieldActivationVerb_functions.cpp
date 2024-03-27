#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBossBubbleShieldActivationVerb.CartmanBossBubbleShieldActivationVerb_C
// (None)

class UClass* UCartmanBossBubbleShieldActivationVerb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBossBubbleShieldActivationVerb_C");

	return Clss;
}


// CartmanBossBubbleShieldActivationVerb_C CartmanBossBubbleShieldActivationVerb.Default__CartmanBossBubbleShieldActivationVerb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanBossBubbleShieldActivationVerb_C* UCartmanBossBubbleShieldActivationVerb_C::GetDefaultObj()
{
	static class UCartmanBossBubbleShieldActivationVerb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanBossBubbleShieldActivationVerb_C*>(UCartmanBossBubbleShieldActivationVerb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CartmanBossBubbleShieldActivationVerb.CartmanBossBubbleShieldActivationVerb_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBossBubbleShieldActivationVerb_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBossBubbleShieldActivationVerb_C", "OnVerbStart");

	Params::UCartmanBossBubbleShieldActivationVerb_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBossBubbleShieldActivationVerb.CartmanBossBubbleShieldActivationVerb_C.ExecuteUbergraph_CartmanBossBubbleShieldActivationVerb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void UCartmanBossBubbleShieldActivationVerb_C::ExecuteUbergraph_CartmanBossBubbleShieldActivationVerb(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBossBubbleShieldActivationVerb_C", "ExecuteUbergraph_CartmanBossBubbleShieldActivationVerb");

	Params::UCartmanBossBubbleShieldActivationVerb_C_ExecuteUbergraph_CartmanBossBubbleShieldActivationVerb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


