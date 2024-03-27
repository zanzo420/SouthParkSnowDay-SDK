#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CinematicScene_Bink.CinematicScene_Bink_C
// (Actor)

class UClass* ACinematicScene_Bink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CinematicScene_Bink_C");

	return Clss;
}


// CinematicScene_Bink_C CinematicScene_Bink.Default__CinematicScene_Bink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematicScene_Bink_C* ACinematicScene_Bink_C::GetDefaultObj()
{
	static class ACinematicScene_Bink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematicScene_Bink_C*>(ACinematicScene_Bink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CinematicScene_Bink.CinematicScene_Bink_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicScene_Bink_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.CheckCurrentShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DSeconds                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematicScene_Bink_C::CheckCurrentShot(float DSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "CheckCurrentShot");

	Params::ACinematicScene_Bink_C_CheckCurrentShot_Params Parms{};

	Parms.DSeconds = DSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.EndEarly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicScene_Bink_C::EndEarly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "EndEarly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACinematicScene_Bink_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "ReceiveEndPlay");

	Params::ACinematicScene_Bink_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.StartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicScene_Bink_C::StartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "StartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.EndScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicScene_Bink_C::EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.OnBinkHasBegunPlayback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematicScene_Bink_C::OnBinkHasBegunPlayback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "OnBinkHasBegunPlayback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CinematicScene_Bink.CinematicScene_Bink_C.ExecuteUbergraph_CinematicScene_Bink
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetVOVolumeMultiplier_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetDuration_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Rewind_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_dSeconds                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class USoundCue*                   CallFunc_GetLocalizedCineAudio_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACinematicScene_Bink_C::ExecuteUbergraph_CinematicScene_Bink(int32 EntryPoint, float CallFunc_GetVOVolumeMultiplier_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Play_ReturnValue, const struct FTimespan& CallFunc_GetDuration_ReturnValue, bool CallFunc_Rewind_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, float K2Node_Event_dSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundCue* CallFunc_GetLocalizedCineAudio_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CinematicScene_Bink_C", "ExecuteUbergraph_CinematicScene_Bink");

	Params::ACinematicScene_Bink_C_ExecuteUbergraph_CinematicScene_Bink_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVOVolumeMultiplier_ReturnValue = CallFunc_GetVOVolumeMultiplier_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_GetDuration_ReturnValue = CallFunc_GetDuration_ReturnValue;
	Parms.CallFunc_Rewind_ReturnValue = CallFunc_Rewind_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.K2Node_Event_dSeconds = K2Node_Event_dSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue_1 = CallFunc_IsPlaying_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalizedCineAudio_ReturnValue = CallFunc_GetLocalizedCineAudio_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue_1 = CallFunc_CreateSound2D_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


