#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RandyBody_AnimBP.RandyBody_AnimBP_C
// (None)

class UClass* URandyBody_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandyBody_AnimBP_C");

	return Clss;
}


// RandyBody_AnimBP_C RandyBody_AnimBP.Default__RandyBody_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandyBody_AnimBP_C* URandyBody_AnimBP_C::GetDefaultObj()
{
	static class URandyBody_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandyBody_AnimBP_C*>(URandyBody_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URandyBody_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "AnimGraph");

	Params::URandyBody_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TwoWayBlend_F72AC14E4361801DA289D1BCDAD66BD0
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TwoWayBlend_F72AC14E4361801DA289D1BCDAD66BD0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TwoWayBlend_F72AC14E4361801DA289D1BCDAD66BD0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_C25A61534ABE2E20719FD3A16B8E1351
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_C25A61534ABE2E20719FD3A16B8E1351()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_C25A61534ABE2E20719FD3A16B8E1351");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_43A83C914698B90C7241E087F939D489
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_43A83C914698B90C7241E087F939D489()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_43A83C914698B90C7241E087F939D489");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_6D1A88B04AB4A25C1207A7AE38A8ED23
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_6D1A88B04AB4A25C1207A7AE38A8ED23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_6D1A88B04AB4A25C1207A7AE38A8ED23");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_839DE00B400E116262CAD1B8F07F007B
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_839DE00B400E116262CAD1B8F07F007B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_839DE00B400E116262CAD1B8F07F007B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_1731CA954B153A5EAFAEEEB410AEEBA3
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_1731CA954B153A5EAFAEEEB410AEEBA3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_1731CA954B153A5EAFAEEEB410AEEBA3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_85AD5853407DE9212C4B7B8B420C0F61
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_85AD5853407DE9212C4B7B8B420C0F61()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_85AD5853407DE9212C4B7B8B420C0F61");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_4273075F4516DFC439A05FA86B751DC5
// (BlueprintEvent)
// Parameters:

void URandyBody_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_4273075F4516DFC439A05FA86B751DC5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_RandyBody_AnimBP_AnimGraphNode_TransitionResult_4273075F4516DFC439A05FA86B751DC5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyBody_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "BlueprintUpdateAnimation");

	Params::URandyBody_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyBody_AnimBP.RandyBody_AnimBP_C.ExecuteUbergraph_RandyBody_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyBody_AnimBP_C::ExecuteUbergraph_RandyBody_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyBody_AnimBP_C", "ExecuteUbergraph_RandyBody_AnimBP");

	Params::URandyBody_AnimBP_C_ExecuteUbergraph_RandyBody_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


