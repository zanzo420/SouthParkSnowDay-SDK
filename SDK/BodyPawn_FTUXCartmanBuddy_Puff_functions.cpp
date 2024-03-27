#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_FTUXCartmanBuddy_Puff.BodyPawn_FTUXCartmanBuddy_Puff_C
// (Actor, Pawn)

class UClass* ABodyPawn_FTUXCartmanBuddy_Puff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_FTUXCartmanBuddy_Puff_C");

	return Clss;
}


// BodyPawn_FTUXCartmanBuddy_Puff_C BodyPawn_FTUXCartmanBuddy_Puff.Default__BodyPawn_FTUXCartmanBuddy_Puff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_FTUXCartmanBuddy_Puff_C* ABodyPawn_FTUXCartmanBuddy_Puff_C::GetDefaultObj()
{
	static class ABodyPawn_FTUXCartmanBuddy_Puff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_FTUXCartmanBuddy_Puff_C*>(ABodyPawn_FTUXCartmanBuddy_Puff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawn_FTUXCartmanBuddy_Puff.BodyPawn_FTUXCartmanBuddy_Puff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawn_FTUXCartmanBuddy_Puff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_FTUXCartmanBuddy_Puff_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_FTUXCartmanBuddy_Puff.BodyPawn_FTUXCartmanBuddy_Puff_C.ExecuteUbergraph_BodyPawn_FTUXCartmanBuddy_Puff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawn_FTUXCartmanBuddy_Puff_C::ExecuteUbergraph_BodyPawn_FTUXCartmanBuddy_Puff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_FTUXCartmanBuddy_Puff_C", "ExecuteUbergraph_BodyPawn_FTUXCartmanBuddy_Puff");

	Params::ABodyPawn_FTUXCartmanBuddy_Puff_C_ExecuteUbergraph_BodyPawn_FTUXCartmanBuddy_Puff_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


