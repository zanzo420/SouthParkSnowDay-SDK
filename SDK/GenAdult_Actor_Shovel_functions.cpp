#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenAdult_Actor_Shovel.GenAdult_Actor_Shovel_C
// (Actor)

class UClass* AGenAdult_Actor_Shovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenAdult_Actor_Shovel_C");

	return Clss;
}


// GenAdult_Actor_Shovel_C GenAdult_Actor_Shovel.Default__GenAdult_Actor_Shovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenAdult_Actor_Shovel_C* AGenAdult_Actor_Shovel_C::GetDefaultObj()
{
	static class AGenAdult_Actor_Shovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenAdult_Actor_Shovel_C*>(AGenAdult_Actor_Shovel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenAdult_Actor_Shovel.GenAdult_Actor_Shovel_C.AnimNotifyCuckoo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenAdult_Actor_Shovel_C::AnimNotifyCuckoo(bool On, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_Shovel_C", "AnimNotifyCuckoo");

	Params::AGenAdult_Actor_Shovel_C_AnimNotifyCuckoo_Params Parms{};

	Parms.On = On;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenAdult_Actor_Shovel.GenAdult_Actor_Shovel_C.ExecuteUbergraph_GenAdult_Actor_Shovel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenAdult_Actor_Shovel_C::ExecuteUbergraph_GenAdult_Actor_Shovel(int32 EntryPoint, bool K2Node_Event_On, int32 K2Node_Event_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenAdult_Actor_Shovel_C", "ExecuteUbergraph_GenAdult_Actor_Shovel");

	Params::AGenAdult_Actor_Shovel_C_ExecuteUbergraph_GenAdult_Actor_Shovel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_On = K2Node_Event_On;
	Parms.K2Node_Event_index = K2Node_Event_index;

	UObject::ProcessEvent(Func, &Parms);

}

}


