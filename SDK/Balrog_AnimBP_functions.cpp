#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Balrog_AnimBP.Balrog_AnimBP_C
// (None)

class UClass* UBalrog_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Balrog_AnimBP_C");

	return Clss;
}


// Balrog_AnimBP_C Balrog_AnimBP.Default__Balrog_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalrog_AnimBP_C* UBalrog_AnimBP_C::GetDefaultObj()
{
	static class UBalrog_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalrog_AnimBP_C*>(UBalrog_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Balrog_AnimBP.Balrog_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBalrog_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "AnimGraph");

	Params::UBalrog_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_3A2940424B93C54529FDE4A4686A2A0B
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_3A2940424B93C54529FDE4A4686A2A0B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_3A2940424B93C54529FDE4A4686A2A0B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_0DFCD0BD4D8BAD10CB4127AF35944170
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_0DFCD0BD4D8BAD10CB4127AF35944170()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_0DFCD0BD4D8BAD10CB4127AF35944170");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_1404EB0943DE4FA5B774A2BBE07E5677
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_1404EB0943DE4FA5B774A2BBE07E5677()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_1404EB0943DE4FA5B774A2BBE07E5677");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_7D083A7B469EB27EF9A94F9E06A29A17
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_7D083A7B469EB27EF9A94F9E06A29A17()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_7D083A7B469EB27EF9A94F9E06A29A17");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_C4AB9D2C41C077020077B6A5D4031B6D
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_C4AB9D2C41C077020077B6A5D4031B6D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_C4AB9D2C41C077020077B6A5D4031B6D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_735732E546A257EFDB33A2BA024F7176
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_735732E546A257EFDB33A2BA024F7176()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_735732E546A257EFDB33A2BA024F7176");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_EC8947C7439B34FA740C4DA90C326D43
// (BlueprintEvent)
// Parameters:

void UBalrog_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_EC8947C7439B34FA740C4DA90C326D43()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Balrog_AnimBP_AnimGraphNode_TransitionResult_EC8947C7439B34FA740C4DA90C326D43");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalrog_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UBalrog_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Balrog_AnimBP.Balrog_AnimBP_C.ExecuteUbergraph_Balrog_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PerlinNoise1D_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PerlinNoise1D_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBalrog_AnimBP_C::ExecuteUbergraph_Balrog_AnimBP(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_PerlinNoise1D_ReturnValue_1, float CallFunc_PerlinNoise1D_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Balrog_AnimBP_C", "ExecuteUbergraph_Balrog_AnimBP");

	Params::UBalrog_AnimBP_C_ExecuteUbergraph_Balrog_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue = CallFunc_PerlinNoise1D_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PerlinNoise1D_ReturnValue_1 = CallFunc_PerlinNoise1D_ReturnValue_1;
	Parms.CallFunc_PerlinNoise1D_ReturnValue_2 = CallFunc_PerlinNoise1D_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


