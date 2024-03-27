#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RulebookComponent.RulebookComponent_C
// (None)

class UClass* URulebookComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RulebookComponent_C");

	return Clss;
}


// RulebookComponent_C RulebookComponent.Default__RulebookComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URulebookComponent_C* URulebookComponent_C::GetDefaultObj()
{
	static class URulebookComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URulebookComponent_C*>(URulebookComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RulebookComponent.RulebookComponent_C.LocalAcceptPlayerVote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             VotingPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsYesVote                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookComponent_C::LocalAcceptPlayerVote(class ALoot_Rulebook_Parent_Frob_C* Rulebook, class AQtnPlayerState* VotingPlayer, bool IsYesVote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookComponent_C", "LocalAcceptPlayerVote");

	Params::URulebookComponent_C_LocalAcceptPlayerVote_Params Parms{};

	Parms.Rulebook = Rulebook;
	Parms.VotingPlayer = VotingPlayer;
	Parms.IsYesVote = IsYesVote;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookComponent.RulebookComponent_C.ServerAcceptPlayerVote
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALoot_Rulebook_Parent_Frob_C*Rulebook                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             VotingPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsYesVote                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookComponent_C::ServerAcceptPlayerVote(class ALoot_Rulebook_Parent_Frob_C* Rulebook, class AQtnPlayerState* VotingPlayer, bool IsYesVote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookComponent_C", "ServerAcceptPlayerVote");

	Params::URulebookComponent_C_ServerAcceptPlayerVote_Params Parms{};

	Parms.Rulebook = Rulebook;
	Parms.VotingPlayer = VotingPlayer;
	Parms.IsYesVote = IsYesVote;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RulebookComponent.RulebookComponent_C.ExecuteUbergraph_RulebookComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALoot_Rulebook_Parent_Frob_C*K2Node_CustomEvent_rulebook                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerState*             K2Node_CustomEvent_votingPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isYesVote                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void URulebookComponent_C::ExecuteUbergraph_RulebookComponent(int32 EntryPoint, class ALoot_Rulebook_Parent_Frob_C* K2Node_CustomEvent_rulebook, class AQtnPlayerState* K2Node_CustomEvent_votingPlayer, bool K2Node_CustomEvent_isYesVote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RulebookComponent_C", "ExecuteUbergraph_RulebookComponent");

	Params::URulebookComponent_C_ExecuteUbergraph_RulebookComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_rulebook = K2Node_CustomEvent_rulebook;
	Parms.K2Node_CustomEvent_votingPlayer = K2Node_CustomEvent_votingPlayer;
	Parms.K2Node_CustomEvent_isYesVote = K2Node_CustomEvent_isYesVote;

	UObject::ProcessEvent(Func, &Parms);

}

}


