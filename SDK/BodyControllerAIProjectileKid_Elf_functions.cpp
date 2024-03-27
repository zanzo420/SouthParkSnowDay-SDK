#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C
// (Actor)

class UClass* ABodyControllerAIProjectileKid_Elf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIProjectileKid_Elf_C");

	return Clss;
}


// BodyControllerAIProjectileKid_Elf_C BodyControllerAIProjectileKid_Elf.Default__BodyControllerAIProjectileKid_Elf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIProjectileKid_Elf_C* ABodyControllerAIProjectileKid_Elf_C::GetDefaultObj()
{
	static class ABodyControllerAIProjectileKid_Elf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIProjectileKid_Elf_C*>(ABodyControllerAIProjectileKid_Elf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyControllerAIProjectileKid_Elf_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Elf_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIProjectileKid_Elf_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Elf_C", "OnThink");

	Params::ABodyControllerAIProjectileKid_Elf_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C.OnQtnReadyForGameplay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIProjectileKid_Elf_C::OnQtnReadyForGameplay(class AQtnBodyPawn* bodyPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Elf_C", "OnQtnReadyForGameplay");

	Params::ABodyControllerAIProjectileKid_Elf_C_OnQtnReadyForGameplay_Params Parms{};

	Parms.bodyPawn = bodyPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIProjectileKid_Elf.BodyControllerAIProjectileKid_Elf_C.ExecuteUbergraph_BodyControllerAIProjectileKid_Elf
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetRelevantEnemy_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIProjectileKid_Elf_C::ExecuteUbergraph_BodyControllerAIProjectileKid_Elf(int32 EntryPoint, float K2Node_Event_timeSinceLastThought, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Elf_C", "ExecuteUbergraph_BodyControllerAIProjectileKid_Elf");

	Params::ABodyControllerAIProjectileKid_Elf_C_ExecuteUbergraph_BodyControllerAIProjectileKid_Elf_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_GetRelevantEnemy_ReturnValue = CallFunc_GetRelevantEnemy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.CallFunc_GetBodyPawn_ReturnValue_1 = CallFunc_GetBodyPawn_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


