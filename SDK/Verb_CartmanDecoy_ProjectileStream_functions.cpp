#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Verb_CartmanDecoy_ProjectileStream.Verb_CartmanDecoy_ProjectileStream_C
// (None)

class UClass* UVerb_CartmanDecoy_ProjectileStream_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Verb_CartmanDecoy_ProjectileStream_C");

	return Clss;
}


// Verb_CartmanDecoy_ProjectileStream_C Verb_CartmanDecoy_ProjectileStream.Default__Verb_CartmanDecoy_ProjectileStream_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerb_CartmanDecoy_ProjectileStream_C* UVerb_CartmanDecoy_ProjectileStream_C::GetDefaultObj()
{
	static class UVerb_CartmanDecoy_ProjectileStream_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerb_CartmanDecoy_ProjectileStream_C*>(UVerb_CartmanDecoy_ProjectileStream_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Verb_CartmanDecoy_ProjectileStream.Verb_CartmanDecoy_ProjectileStream_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_CartmanDecoy_ProjectileStream_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanDecoy_ProjectileStream_C", "OnVerbStart");

	Params::UVerb_CartmanDecoy_ProjectileStream_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_CartmanDecoy_ProjectileStream.Verb_CartmanDecoy_ProjectileStream_C.OnVerbInit
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_CartmanDecoy_ProjectileStream_C::OnVerbInit(bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanDecoy_ProjectileStream_C", "OnVerbInit");

	Params::UVerb_CartmanDecoy_ProjectileStream_C_OnVerbInit_Params Parms{};

	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_CartmanDecoy_ProjectileStream.Verb_CartmanDecoy_ProjectileStream_C.ExecuteUbergraph_Verb_CartmanDecoy_ProjectileStream
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVerb_CartmanDecoy_ProjectileStream_C::ExecuteUbergraph_Verb_CartmanDecoy_ProjectileStream(int32 EntryPoint, bool K2Node_Event_isServer, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_CartmanDecoy_ProjectileStream_C", "ExecuteUbergraph_Verb_CartmanDecoy_ProjectileStream");

	Params::UVerb_CartmanDecoy_ProjectileStream_C_ExecuteUbergraph_Verb_CartmanDecoy_ProjectileStream_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


