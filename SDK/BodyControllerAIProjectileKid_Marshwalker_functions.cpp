#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C
// (Actor)

class UClass* ABodyControllerAIProjectileKid_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIProjectileKid_Marshwalker_C");

	return Clss;
}


// BodyControllerAIProjectileKid_Marshwalker_C BodyControllerAIProjectileKid_Marshwalker.Default__BodyControllerAIProjectileKid_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIProjectileKid_Marshwalker_C* ABodyControllerAIProjectileKid_Marshwalker_C::GetDefaultObj()
{
	static class ABodyControllerAIProjectileKid_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIProjectileKid_Marshwalker_C*>(ABodyControllerAIProjectileKid_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyControllerAIProjectileKid_Marshwalker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Marshwalker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIProjectileKid_Marshwalker_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Marshwalker_C", "OnThink");

	Params::ABodyControllerAIProjectileKid_Marshwalker_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIProjectileKid_Marshwalker.BodyControllerAIProjectileKid_Marshwalker_C.ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)

void ABodyControllerAIProjectileKid_Marshwalker_C::ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_timeSinceLastThought, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIProjectileKid_Marshwalker_C", "ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker");

	Params::ABodyControllerAIProjectileKid_Marshwalker_C_ExecuteUbergraph_BodyControllerAIProjectileKid_Marshwalker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;

	UObject::ProcessEvent(Func, &Parms);

}

}


