#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Turret_AnimBP.Turret_AnimBP_C
// (None)

class UClass* UTurret_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Turret_AnimBP_C");

	return Clss;
}


// Turret_AnimBP_C Turret_AnimBP.Default__Turret_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTurret_AnimBP_C* UTurret_AnimBP_C::GetDefaultObj()
{
	static class UTurret_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurret_AnimBP_C*>(UTurret_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Turret_AnimBP.Turret_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UTurret_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "AnimGraph");

	Params::UTurret_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Turret_AnimBP.Turret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_15C5CAAE4E2207B8282741B443CEC603
// (BlueprintEvent)
// Parameters:

void UTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_15C5CAAE4E2207B8282741B443CEC603()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_15C5CAAE4E2207B8282741B443CEC603");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Turret_AnimBP.Turret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_2695DC6F4B3ABF4B2AD49EA549A7794A
// (BlueprintEvent)
// Parameters:

void UTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_2695DC6F4B3ABF4B2AD49EA549A7794A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_2695DC6F4B3ABF4B2AD49EA549A7794A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Turret_AnimBP.Turret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_4F52CD694BA6C2476FB71FAB5FBD06AB
// (BlueprintEvent)
// Parameters:

void UTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_4F52CD694BA6C2476FB71FAB5FBD06AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_4F52CD694BA6C2476FB71FAB5FBD06AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Turret_AnimBP.Turret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_6BD4A0244514A1531ABD76BBAF96CCC9
// (BlueprintEvent)
// Parameters:

void UTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_6BD4A0244514A1531ABD76BBAF96CCC9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Turret_AnimBP_AnimGraphNode_ModifyBone_6BD4A0244514A1531ABD76BBAF96CCC9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Turret_AnimBP.Turret_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurret_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UTurret_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Turret_AnimBP.Turret_AnimBP_C.SetTurretRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotator                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTurret_AnimBP_C::SetTurretRotation(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "SetTurretRotation");

	Params::UTurret_AnimBP_C_SetTurretRotation_Params Parms{};

	Parms.Rotator = Rotator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Turret_AnimBP.Turret_AnimBP_C.AimAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amt                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurret_AnimBP_C::AimAlpha(float Amt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "AimAlpha");

	Params::UTurret_AnimBP_C_AimAlpha_Params Parms{};

	Parms.Amt = Amt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Turret_AnimBP.Turret_AnimBP_C.ExecuteUbergraph_Turret_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_amt                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_rotator                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTurret_AnimBP_C::ExecuteUbergraph_Turret_AnimBP(int32 EntryPoint, float K2Node_CustomEvent_amt, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float K2Node_Event_DeltaTimeX, const struct FRotator& K2Node_CustomEvent_rotator, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Turret_AnimBP_C", "ExecuteUbergraph_Turret_AnimBP");

	Params::UTurret_AnimBP_C_ExecuteUbergraph_Turret_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_amt = K2Node_CustomEvent_amt;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_CustomEvent_rotator = K2Node_CustomEvent_rotator;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


