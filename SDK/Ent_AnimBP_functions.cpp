#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Ent_AnimBP.Ent_AnimBP_C
// (None)

class UClass* UEnt_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ent_AnimBP_C");

	return Clss;
}


// Ent_AnimBP_C Ent_AnimBP.Default__Ent_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnt_AnimBP_C* UEnt_AnimBP_C::GetDefaultObj()
{
	static class UEnt_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnt_AnimBP_C*>(UEnt_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ent_AnimBP.Ent_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UEnt_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "AnimGraph");

	Params::UEnt_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TwoWayBlend_9868451948B435B0BBA103AE66FAB75F
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TwoWayBlend_9868451948B435B0BBA103AE66FAB75F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TwoWayBlend_9868451948B435B0BBA103AE66FAB75F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_D66114D94774BC2367D12ABDE0AFE4B9
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_D66114D94774BC2367D12ABDE0AFE4B9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_D66114D94774BC2367D12ABDE0AFE4B9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_E5E66B4D486C7378127E53BCCB4E7DF9
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_E5E66B4D486C7378127E53BCCB4E7DF9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_E5E66B4D486C7378127E53BCCB4E7DF9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4A493ACE44613C4F176F69AD20403CA6
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4A493ACE44613C4F176F69AD20403CA6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4A493ACE44613C4F176F69AD20403CA6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4E575AE6450920AD2BDE76AC0BFCBF5A
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4E575AE6450920AD2BDE76AC0BFCBF5A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4E575AE6450920AD2BDE76AC0BFCBF5A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_3660B4C2436B42D96497DBA6BDCD5330
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_3660B4C2436B42D96497DBA6BDCD5330()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_3660B4C2436B42D96497DBA6BDCD5330");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_5F80E4974A8BB6310200D4AE98D0FE79
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_5F80E4974A8BB6310200D4AE98D0FE79()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_5F80E4974A8BB6310200D4AE98D0FE79");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4D48DC2B4FCA991E559B5384A5FF3E1F
// (BlueprintEvent)
// Parameters:

void UEnt_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4D48DC2B4FCA991E559B5384A5FF3E1F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Ent_AnimBP_AnimGraphNode_TransitionResult_4D48DC2B4FCA991E559B5384A5FF3E1F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ent_AnimBP.Ent_AnimBP_C.ExecuteUbergraph_Ent_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnt_AnimBP_C::ExecuteUbergraph_Ent_AnimBP(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_Vector_IsNearlyZero_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ent_AnimBP_C", "ExecuteUbergraph_Ent_AnimBP");

	Params::UEnt_AnimBP_C_ExecuteUbergraph_Ent_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


