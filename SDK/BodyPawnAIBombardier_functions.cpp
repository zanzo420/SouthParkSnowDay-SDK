#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIBombardier.BodyPawnAIBombardier_C
// (Actor, Pawn)

class UClass* ABodyPawnAIBombardier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIBombardier_C");

	return Clss;
}


// BodyPawnAIBombardier_C BodyPawnAIBombardier.Default__BodyPawnAIBombardier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIBombardier_C* ABodyPawnAIBombardier_C::GetDefaultObj()
{
	static class ABodyPawnAIBombardier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIBombardier_C*>(ABodyPawnAIBombardier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIBombardier.BodyPawnAIBombardier_C.OnRep_StreamSeed_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIBombardier_C::OnRep_StreamSeed_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIBombardier_C", "OnRep_StreamSeed_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIBombardier.BodyPawnAIBombardier_C.ExecuteUbergraph_BodyPawnAIBombardier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawnAIBombardier_C::ExecuteUbergraph_BodyPawnAIBombardier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIBombardier_C", "ExecuteUbergraph_BodyPawnAIBombardier");

	Params::ABodyPawnAIBombardier_C_ExecuteUbergraph_BodyPawnAIBombardier_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIBombardier.BodyPawnAIBombardier_C.StringPlucked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAIBombardier_C::StringPlucked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIBombardier_C", "StringPlucked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


