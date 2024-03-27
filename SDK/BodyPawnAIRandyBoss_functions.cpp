#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIRandyBoss.BodyPawnAIRandyBoss_C
// (Actor, Pawn)

class UClass* ABodyPawnAIRandyBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIRandyBoss_C");

	return Clss;
}


// BodyPawnAIRandyBoss_C BodyPawnAIRandyBoss.Default__BodyPawnAIRandyBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIRandyBoss_C* ABodyPawnAIRandyBoss_C::GetDefaultObj()
{
	static class ABodyPawnAIRandyBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIRandyBoss_C*>(ABodyPawnAIRandyBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIRandyBoss.BodyPawnAIRandyBoss_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawnAIRandyBoss_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRandyBoss_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAIRandyBoss.BodyPawnAIRandyBoss_C.ExecuteUbergraph_BodyPawnAIRandyBoss
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatusEffect_DeathProof_C*  CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIRandyBoss_C::ExecuteUbergraph_BodyPawnAIRandyBoss(int32 EntryPoint, class UStatusEffect_DeathProof_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIRandyBoss_C", "ExecuteUbergraph_BodyPawnAIRandyBoss");

	Params::ABodyPawnAIRandyBoss_C_ExecuteUbergraph_BodyPawnAIRandyBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


