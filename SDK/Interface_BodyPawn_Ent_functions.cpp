#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_BodyPawn_Ent.Interface_BodyPawn_Ent_C
// (None)

class UClass* IInterface_BodyPawn_Ent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_BodyPawn_Ent_C");

	return Clss;
}


// Interface_BodyPawn_Ent_C Interface_BodyPawn_Ent.Default__Interface_BodyPawn_Ent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_BodyPawn_Ent_C* IInterface_BodyPawn_Ent_C::GetDefaultObj()
{
	static class IInterface_BodyPawn_Ent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_BodyPawn_Ent_C*>(IInterface_BodyPawn_Ent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_BodyPawn_Ent.Interface_BodyPawn_Ent_C.GetQtnAIJob_KyleBoss
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQtnAIJobComponent*          QtnAIJob                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_BodyPawn_Ent_C::GetQtnAIJob_KyleBoss(class UQtnAIJobComponent** QtnAIJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_BodyPawn_Ent_C", "GetQtnAIJob_KyleBoss");

	Params::IInterface_BodyPawn_Ent_C_GetQtnAIJob_KyleBoss_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QtnAIJob != nullptr)
		*QtnAIJob = Parms.QtnAIJob;

}

}


