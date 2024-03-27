#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Poopie_AnimBP.Poopie_AnimBP_C
// (None)

class UClass* UPoopie_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Poopie_AnimBP_C");

	return Clss;
}


// Poopie_AnimBP_C Poopie_AnimBP.Default__Poopie_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPoopie_AnimBP_C* UPoopie_AnimBP_C::GetDefaultObj()
{
	static class UPoopie_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoopie_AnimBP_C*>(UPoopie_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Poopie_AnimBP.Poopie_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPoopie_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "AnimGraph");

	Params::UPoopie_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_63752A0A45A510C61CD733943CB0ACF8
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_63752A0A45A510C61CD733943CB0ACF8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_63752A0A45A510C61CD733943CB0ACF8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_90828641415DE13CC29894AA260CEA22
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_90828641415DE13CC29894AA260CEA22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_90828641415DE13CC29894AA260CEA22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_C941ECF940F410BD56F70EA0A0C775D1
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_C941ECF940F410BD56F70EA0A0C775D1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_C941ECF940F410BD56F70EA0A0C775D1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_5F2BB75F4BCA7FBB09C47B9A98AA847D
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_5F2BB75F4BCA7FBB09C47B9A98AA847D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_5F2BB75F4BCA7FBB09C47B9A98AA847D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_3BFED36340056702EAC9AF9AC03B8842
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_3BFED36340056702EAC9AF9AC03B8842()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_3BFED36340056702EAC9AF9AC03B8842");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_9035B5F54FC2CABE502B558B8F9C2B22
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_9035B5F54FC2CABE502B558B8F9C2B22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_9035B5F54FC2CABE502B558B8F9C2B22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_18112FFA4AE7E833F86A89B2979E7172
// (BlueprintEvent)
// Parameters:

void UPoopie_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_18112FFA4AE7E833F86A89B2979E7172()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Poopie_AnimBP_AnimGraphNode_TransitionResult_18112FFA4AE7E833F86A89B2979E7172");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Poopie_AnimBP.Poopie_AnimBP_C.ExecuteUbergraph_Poopie_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPoopie_AnimBP_C::ExecuteUbergraph_Poopie_AnimBP(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Poopie_AnimBP_C", "ExecuteUbergraph_Poopie_AnimBP");

	Params::UPoopie_AnimBP_C_ExecuteUbergraph_Poopie_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


