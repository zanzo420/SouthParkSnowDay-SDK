#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAIDefensiveEncroacher.BodyControllerAIDefensiveEncroacher_C
// (Actor)

class UClass* ABodyControllerAIDefensiveEncroacher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAIDefensiveEncroacher_C");

	return Clss;
}


// BodyControllerAIDefensiveEncroacher_C BodyControllerAIDefensiveEncroacher.Default__BodyControllerAIDefensiveEncroacher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAIDefensiveEncroacher_C* ABodyControllerAIDefensiveEncroacher_C::GetDefaultObj()
{
	static class ABodyControllerAIDefensiveEncroacher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAIDefensiveEncroacher_C*>(ABodyControllerAIDefensiveEncroacher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAIDefensiveEncroacher.BodyControllerAIDefensiveEncroacher_C.OnThink
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSinceLastThought                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyControllerAIDefensiveEncroacher_C::OnThink(float TimeSinceLastThought)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIDefensiveEncroacher_C", "OnThink");

	Params::ABodyControllerAIDefensiveEncroacher_C_OnThink_Params Parms{};

	Parms.TimeSinceLastThought = TimeSinceLastThought;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyControllerAIDefensiveEncroacher.BodyControllerAIDefensiveEncroacher_C.ExecuteUbergraph_BodyControllerAIDefensiveEncroacher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnPathFollowingComponent*  CallFunc_GetQtnPathFollowingComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAIJobRole*               CallFunc_GetAIJobRole_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInterruptPathFollowing_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// float                              K2Node_Event_timeSinceLastThought                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPawn*                    CallFunc_GetRelevantEnemy_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnVerbRequest             K2Node_MakeStruct_QtnVerbRequest                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetBodyPawn_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBodyIdle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAIDefensiveEncroacher_C::ExecuteUbergraph_BodyControllerAIDefensiveEncroacher(int32 EntryPoint, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, class UQtnAIJobRole* CallFunc_GetAIJobRole_ReturnValue, bool CallFunc_CanInterruptPathFollowing_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, float K2Node_Event_timeSinceLastThought, bool CallFunc_Array_Contains_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAIDefensiveEncroacher_C", "ExecuteUbergraph_BodyControllerAIDefensiveEncroacher");

	Params::ABodyControllerAIDefensiveEncroacher_C_ExecuteUbergraph_BodyControllerAIDefensiveEncroacher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnPathFollowingComponent_ReturnValue = CallFunc_GetQtnPathFollowingComponent_ReturnValue;
	Parms.CallFunc_GetAIJobRole_ReturnValue = CallFunc_GetAIJobRole_ReturnValue;
	Parms.CallFunc_CanInterruptPathFollowing_ReturnValue = CallFunc_CanInterruptPathFollowing_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_timeSinceLastThought = K2Node_Event_timeSinceLastThought;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetRelevantEnemy_ReturnValue = CallFunc_GetRelevantEnemy_ReturnValue;
	Parms.K2Node_MakeStruct_QtnVerbRequest = K2Node_MakeStruct_QtnVerbRequest;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBodyPawn_ReturnValue = CallFunc_GetBodyPawn_ReturnValue;
	Parms.CallFunc_IsBodyIdle_ReturnValue = CallFunc_IsBodyIdle_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue = CallFunc_GetActualEquippedItem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


