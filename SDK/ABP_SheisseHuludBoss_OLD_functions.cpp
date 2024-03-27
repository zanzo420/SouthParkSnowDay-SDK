#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_SheisseHuludBoss_OLD.ABP_SheisseHuludBoss_OLD_C
// (None)

class UClass* UABP_SheisseHuludBoss_OLD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_SheisseHuludBoss_OLD_C");

	return Clss;
}


// ABP_SheisseHuludBoss_OLD_C ABP_SheisseHuludBoss_OLD.Default__ABP_SheisseHuludBoss_OLD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_SheisseHuludBoss_OLD_C* UABP_SheisseHuludBoss_OLD_C::GetDefaultObj()
{
	static class UABP_SheisseHuludBoss_OLD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_SheisseHuludBoss_OLD_C*>(UABP_SheisseHuludBoss_OLD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_SheisseHuludBoss_OLD.ABP_SheisseHuludBoss_OLD_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_SheisseHuludBoss_OLD_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_SheisseHuludBoss_OLD_C", "AnimGraph");

	Params::UABP_SheisseHuludBoss_OLD_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_SheisseHuludBoss_OLD.ABP_SheisseHuludBoss_OLD_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_SheisseHuludBoss_OLD_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_SheisseHuludBoss_OLD_C", "BlueprintUpdateAnimation");

	Params::UABP_SheisseHuludBoss_OLD_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_SheisseHuludBoss_OLD.ABP_SheisseHuludBoss_OLD_C.UpdateGrabTongue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GrabAlpha                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     GrabLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_SheisseHuludBoss_OLD_C::UpdateGrabTongue(float GrabAlpha, const struct FVector& GrabLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_SheisseHuludBoss_OLD_C", "UpdateGrabTongue");

	Params::UABP_SheisseHuludBoss_OLD_C_UpdateGrabTongue_Params Parms{};

	Parms.GrabAlpha = GrabAlpha;
	Parms.GrabLocation = GrabLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_SheisseHuludBoss_OLD.ABP_SheisseHuludBoss_OLD_C.ExecuteUbergraph_ABP_SheisseHuludBoss_OLD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GrabAlpha                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_GrabLocation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn_ShizaHulud_C*       K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_SheisseHuludBoss_OLD_C::ExecuteUbergraph_ABP_SheisseHuludBoss_OLD(int32 EntryPoint, float K2Node_Event_DeltaTimeX, float K2Node_CustomEvent_GrabAlpha, const struct FVector& K2Node_CustomEvent_GrabLocation, class AActor* CallFunc_GetOwningActor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AQtnPawn_ShizaHulud_C* K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_SheisseHuludBoss_OLD_C", "ExecuteUbergraph_ABP_SheisseHuludBoss_OLD");

	Params::UABP_SheisseHuludBoss_OLD_C_ExecuteUbergraph_ABP_SheisseHuludBoss_OLD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_CustomEvent_GrabAlpha = K2Node_CustomEvent_GrabAlpha;
	Parms.K2Node_CustomEvent_GrabLocation = K2Node_CustomEvent_GrabLocation;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud = K2Node_DynamicCast_AsQtn_Pawn_Shiza_Hulud;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


