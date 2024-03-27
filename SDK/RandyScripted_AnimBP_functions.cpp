#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass RandyScripted_AnimBP.RandyScripted_AnimBP_C
// (None)

class UClass* URandyScripted_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandyScripted_AnimBP_C");

	return Clss;
}


// RandyScripted_AnimBP_C RandyScripted_AnimBP.Default__RandyScripted_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandyScripted_AnimBP_C* URandyScripted_AnimBP_C::GetDefaultObj()
{
	static class URandyScripted_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandyScripted_AnimBP_C*>(URandyScripted_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URandyScripted_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "AnimGraph");

	Params::URandyScripted_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.PlaySyncedAnim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               AnimSequence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyScripted_AnimBP_C::PlaySyncedAnim(class UAnimSequence* AnimSequence, class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "PlaySyncedAnim");

	Params::URandyScripted_AnimBP_C_PlaySyncedAnim_Params Parms{};

	Parms.AnimSequence = AnimSequence;
	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.AnimNotifyCuckoo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyScripted_AnimBP_C::AnimNotifyCuckoo(bool On, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "AnimNotifyCuckoo");

	Params::URandyScripted_AnimBP_C_AnimNotifyCuckoo_Params Parms{};

	Parms.On = On;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void URandyScripted_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.SetTrackedPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Position                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyScripted_AnimBP_C::SetTrackedPosition(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "SetTrackedPosition");

	Params::URandyScripted_AnimBP_C_SetTrackedPosition_Params Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.SetHeadTracking
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldTrack                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URandyScripted_AnimBP_C::SetHeadTracking(bool ShouldTrack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "SetHeadTracking");

	Params::URandyScripted_AnimBP_C_SetHeadTracking_Params Parms{};

	Parms.ShouldTrack = ShouldTrack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.SetHeadTrackingRanges
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRangedFloat             PitchRange                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FQtnRangedFloat             YawRange                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void URandyScripted_AnimBP_C::SetHeadTrackingRanges(const struct FQtnRangedFloat& PitchRange, const struct FQtnRangedFloat& YawRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "SetHeadTrackingRanges");

	Params::URandyScripted_AnimBP_C_SetHeadTrackingRanges_Params Parms{};

	Parms.PitchRange = PitchRange;
	Parms.YawRange = YawRange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandyScripted_AnimBP.RandyScripted_AnimBP_C.ExecuteUbergraph_RandyScripted_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Event_AnimSequence                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_position                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_shouldTrack                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRangedFloat             K2Node_Event_pitchRange                                          (NoDestructor)
// struct FQtnRangedFloat             K2Node_Event_yawRange                                            (NoDestructor)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandyScripted_AnimBP_C::ExecuteUbergraph_RandyScripted_AnimBP(int32 EntryPoint, class UAnimSequence* K2Node_Event_AnimSequence, class UAnimMontage* K2Node_Event_montage, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& K2Node_Event_position, bool K2Node_Event_shouldTrack, const struct FQtnRangedFloat& K2Node_Event_pitchRange, const struct FQtnRangedFloat& K2Node_Event_yawRange, bool K2Node_Event_On, int32 K2Node_Event_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandyScripted_AnimBP_C", "ExecuteUbergraph_RandyScripted_AnimBP");

	Params::URandyScripted_AnimBP_C_ExecuteUbergraph_RandyScripted_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AnimSequence = K2Node_Event_AnimSequence;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_position = K2Node_Event_position;
	Parms.K2Node_Event_shouldTrack = K2Node_Event_shouldTrack;
	Parms.K2Node_Event_pitchRange = K2Node_Event_pitchRange;
	Parms.K2Node_Event_yawRange = K2Node_Event_yawRange;
	Parms.K2Node_Event_On = K2Node_Event_On;
	Parms.K2Node_Event_index = K2Node_Event_index;

	UObject::ProcessEvent(Func, &Parms);

}

}


