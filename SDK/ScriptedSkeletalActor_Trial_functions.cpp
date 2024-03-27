#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C
// (Actor)

class UClass* AScriptedSkeletalActor_Trial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScriptedSkeletalActor_Trial_C");

	return Clss;
}


// ScriptedSkeletalActor_Trial_C ScriptedSkeletalActor_Trial.Default__ScriptedSkeletalActor_Trial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScriptedSkeletalActor_Trial_C* AScriptedSkeletalActor_Trial_C::GetDefaultObj()
{
	static class AScriptedSkeletalActor_Trial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScriptedSkeletalActor_Trial_C*>(AScriptedSkeletalActor_Trial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.GetDayForOnTalkTo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Day                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::GetDayForOnTalkTo(int32* Day)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "GetDayForOnTalkTo");

	Params::AScriptedSkeletalActor_Trial_C_GetDayForOnTalkTo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Day != nullptr)
		*Day = Parms.Day;

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.Hub_OnTalkTo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDayForOnTalkTo_day                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)

void AScriptedSkeletalActor_Trial_C::Hub_OnTalkTo(class AQtnBodyPawn* FrobbingPawn, int32 CallFunc_GetDayForOnTalkTo_day, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "Hub_OnTalkTo");

	Params::AScriptedSkeletalActor_Trial_C_Hub_OnTalkTo_Params Parms{};

	Parms.FrobbingPawn = FrobbingPawn;
	Parms.CallFunc_GetDayForOnTalkTo_day = CallFunc_GetDayForOnTalkTo_day;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.UpdateIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*           IdleAnim                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMrHanky_AnimBP_C*           K2Node_DynamicCast_AsMr_Hanky_Anim_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMackey_ScriptedAnim_BP_C*   K2Node_DynamicCast_AsMackey_Scripted_Anim_BP                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URandyScripted_AnimBP_C*     K2Node_DynamicCast_AsRandy_Scripted_Anim_BP                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTrialActor_AnimBP_C*        K2Node_DynamicCast_AsTrial_Actor_Anim_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Trial_C::UpdateIdleAnim(class UAnimSequenceBase* IdleAnim, class UMrHanky_AnimBP_C* K2Node_DynamicCast_AsMr_Hanky_Anim_BP, bool K2Node_DynamicCast_bSuccess, class UMackey_ScriptedAnim_BP_C* K2Node_DynamicCast_AsMackey_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class URandyScripted_AnimBP_C* K2Node_DynamicCast_AsRandy_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "UpdateIdleAnim");

	Params::AScriptedSkeletalActor_Trial_C_UpdateIdleAnim_Params Parms{};

	Parms.IdleAnim = IdleAnim;
	Parms.K2Node_DynamicCast_AsMr_Hanky_Anim_BP = K2Node_DynamicCast_AsMr_Hanky_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMackey_Scripted_Anim_BP = K2Node_DynamicCast_AsMackey_Scripted_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsRandy_Scripted_Anim_BP = K2Node_DynamicCast_AsRandy_Scripted_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsTrial_Actor_Anim_BP = K2Node_DynamicCast_AsTrial_Actor_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCineCameraComponent*        Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AScriptedSkeletalActor_Trial_C::UpdateCamera(class UCineCameraComponent* Camera, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "UpdateCamera");

	Params::AScriptedSkeletalActor_Trial_C_UpdateCamera_Params Parms{};

	Parms.Camera = Camera;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.PlayAnimationFromVO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::PlayAnimationFromVO(class UAnimMontage* AnimMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "PlayAnimationFromVO");

	Params::AScriptedSkeletalActor_Trial_C_PlayAnimationFromVO_Params Parms{};

	Parms.AnimMontage = AnimMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.PlayAnimationAudio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTribunal_CharacterResponse ResponseStruct                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              VO_Priority_Override                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AnimOffsetTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Sound                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSyncedAudioStruct          K2Node_MakeStruct_SyncedAudioStruct                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Trial_C::PlayAnimationAudio(const struct FTribunal_CharacterResponse& ResponseStruct, int32 VO_Priority_Override, float AnimOffsetTime, class UAudioComponent** Sound, const struct FSyncedAudioStruct& K2Node_MakeStruct_SyncedAudioStruct, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "PlayAnimationAudio");

	Params::AScriptedSkeletalActor_Trial_C_PlayAnimationAudio_Params Parms{};

	Parms.ResponseStruct = ResponseStruct;
	Parms.VO_Priority_Override = VO_Priority_Override;
	Parms.AnimOffsetTime = AnimOffsetTime;
	Parms.K2Node_MakeStruct_SyncedAudioStruct = K2Node_MakeStruct_SyncedAudioStruct;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Trial_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyEnd_C2F283AF4653691D2BFFBEB09BBE597E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyEnd_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyEnd_C2F283AF4653691D2BFFBEB09BBE597E");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyEnd_C2F283AF4653691D2BFFBEB09BBE597E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyBegin_C2F283AF4653691D2BFFBEB09BBE597E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyBegin_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyBegin_C2F283AF4653691D2BFFBEB09BBE597E");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyBegin_C2F283AF4653691D2BFFBEB09BBE597E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnInterrupted_C2F283AF4653691D2BFFBEB09BBE597E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnInterrupted_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnInterrupted_C2F283AF4653691D2BFFBEB09BBE597E");

	Params::AScriptedSkeletalActor_Trial_C_OnInterrupted_C2F283AF4653691D2BFFBEB09BBE597E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnBlendOut_C2F283AF4653691D2BFFBEB09BBE597E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnBlendOut_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnBlendOut_C2F283AF4653691D2BFFBEB09BBE597E");

	Params::AScriptedSkeletalActor_Trial_C_OnBlendOut_C2F283AF4653691D2BFFBEB09BBE597E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnCompleted_C2F283AF4653691D2BFFBEB09BBE597E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnCompleted_C2F283AF4653691D2BFFBEB09BBE597E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnCompleted_C2F283AF4653691D2BFFBEB09BBE597E");

	Params::AScriptedSkeletalActor_Trial_C_OnCompleted_C2F283AF4653691D2BFFBEB09BBE597E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyEnd_FFAB253D488546CE165B33A079DFA257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyEnd_FFAB253D488546CE165B33A079DFA257(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyEnd_FFAB253D488546CE165B33A079DFA257");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyEnd_FFAB253D488546CE165B33A079DFA257_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyBegin_FFAB253D488546CE165B33A079DFA257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyBegin_FFAB253D488546CE165B33A079DFA257(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyBegin_FFAB253D488546CE165B33A079DFA257");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyBegin_FFAB253D488546CE165B33A079DFA257_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnInterrupted_FFAB253D488546CE165B33A079DFA257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnInterrupted_FFAB253D488546CE165B33A079DFA257(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnInterrupted_FFAB253D488546CE165B33A079DFA257");

	Params::AScriptedSkeletalActor_Trial_C_OnInterrupted_FFAB253D488546CE165B33A079DFA257_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnBlendOut_FFAB253D488546CE165B33A079DFA257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnBlendOut_FFAB253D488546CE165B33A079DFA257(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnBlendOut_FFAB253D488546CE165B33A079DFA257");

	Params::AScriptedSkeletalActor_Trial_C_OnBlendOut_FFAB253D488546CE165B33A079DFA257_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnCompleted_FFAB253D488546CE165B33A079DFA257
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnCompleted_FFAB253D488546CE165B33A079DFA257(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnCompleted_FFAB253D488546CE165B33A079DFA257");

	Params::AScriptedSkeletalActor_Trial_C_OnCompleted_FFAB253D488546CE165B33A079DFA257_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyEnd_0AF845C24627114557E80CAEE8DBA035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyEnd_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyEnd_0AF845C24627114557E80CAEE8DBA035");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyEnd_0AF845C24627114557E80CAEE8DBA035_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnNotifyBegin_0AF845C24627114557E80CAEE8DBA035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnNotifyBegin_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnNotifyBegin_0AF845C24627114557E80CAEE8DBA035");

	Params::AScriptedSkeletalActor_Trial_C_OnNotifyBegin_0AF845C24627114557E80CAEE8DBA035_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnInterrupted_0AF845C24627114557E80CAEE8DBA035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnInterrupted_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnInterrupted_0AF845C24627114557E80CAEE8DBA035");

	Params::AScriptedSkeletalActor_Trial_C_OnInterrupted_0AF845C24627114557E80CAEE8DBA035_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnBlendOut_0AF845C24627114557E80CAEE8DBA035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnBlendOut_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnBlendOut_0AF845C24627114557E80CAEE8DBA035");

	Params::AScriptedSkeletalActor_Trial_C_OnBlendOut_0AF845C24627114557E80CAEE8DBA035_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.OnCompleted_0AF845C24627114557E80CAEE8DBA035
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::OnCompleted_0AF845C24627114557E80CAEE8DBA035(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "OnCompleted_0AF845C24627114557E80CAEE8DBA035");

	Params::AScriptedSkeletalActor_Trial_C_OnCompleted_0AF845C24627114557E80CAEE8DBA035_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Trial_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.React
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Positive_Reaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Trial_C::React(bool Positive_Reaction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "React");

	Params::AScriptedSkeletalActor_Trial_C_React_Params Parms{};

	Parms.Positive_Reaction = Positive_Reaction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.DealUpgradeCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Trial_C::DealUpgradeCards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "DealUpgradeCards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.Beckon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Trial_C::Beckon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "Beckon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.BndEvt__ScriptedSkeletalActor_Trial_BeckonTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AScriptedSkeletalActor_Trial_C::BndEvt__ScriptedSkeletalActor_Trial_BeckonTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "BndEvt__ScriptedSkeletalActor_Trial_BeckonTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AScriptedSkeletalActor_Trial_C_BndEvt__ScriptedSkeletalActor_Trial_BeckonTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.AllowBeckonAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AScriptedSkeletalActor_Trial_C::AllowBeckonAgain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "AllowBeckonAgain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.DoBeckon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::DoBeckon(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "DoBeckon");

	Params::AScriptedSkeletalActor_Trial_C_DoBeckon_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_1_OnVOPlayed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCurveFloat*                 FacialAnimCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLeadIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NeedsLeadIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AutoClosePhone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForCutsceneHUD                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AScriptedSkeletalActor_Trial_C::BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_1_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_1_OnVOPlayed__DelegateSignature");

	Params::AScriptedSkeletalActor_Trial_C_BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_1_OnVOPlayed__DelegateSignature_Params Parms{};

	Parms.FacialAnimCurve = FacialAnimCurve;
	Parms.AnimMontage = AnimMontage;
	Parms.IsLeadIn = IsLeadIn;
	Parms.NeedsLeadIn = NeedsLeadIn;
	Parms.IsEmpty = IsEmpty;
	Parms.AutoClosePhone = AutoClosePhone;
	Parms.ForCutsceneHUD = ForCutsceneHUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_2_OnLipsyncMirror__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnVOComponent*             SpeakerVOComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 FacialAnimCurve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_2_OnLipsyncMirror__DelegateSignature(class UQtnVOComponent* SpeakerVOComponent, class UCurveFloat* FacialAnimCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_2_OnLipsyncMirror__DelegateSignature");

	Params::AScriptedSkeletalActor_Trial_C_BndEvt__ScriptedSkeletalActor_Trial_QtnVO_K2Node_ComponentBoundEvent_2_OnLipsyncMirror__DelegateSignature_Params Parms{};

	Parms.SpeakerVOComponent = SpeakerVOComponent;
	Parms.FacialAnimCurve = FacialAnimCurve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScriptedSkeletalActor_Trial.ScriptedSkeletalActor_Trial_C.ExecuteUbergraph_ScriptedSkeletalActor_Trial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UMrHanky_AnimBP_C*           K2Node_DynamicCast_AsMr_Hanky_Anim_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMackey_ScriptedAnim_BP_C*   K2Node_DynamicCast_AsMackey_Scripted_Anim_BP                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URandyScripted_AnimBP_C*     K2Node_DynamicCast_AsRandy_Scripted_Anim_BP                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTrialActor_AnimBP_C*        K2Node_DynamicCast_AsTrial_Actor_Anim_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_positive_Reaction                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_Play_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_otherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveFloat*                 K2Node_ComponentBoundEvent_facialAnimCurve_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_ComponentBoundEvent_animMontage                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isLeadIn                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_needsLeadIn                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_isEmpty                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_autoClosePhone                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_forCutsceneHUD                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnVOComponent*             K2Node_ComponentBoundEvent_speakerVOComponent                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 K2Node_ComponentBoundEvent_facialAnimCurve                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScriptedSkeletalActor_Trial_C::ExecuteUbergraph_ScriptedSkeletalActor_Trial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UMrHanky_AnimBP_C* K2Node_DynamicCast_AsMr_Hanky_Anim_BP, bool K2Node_DynamicCast_bSuccess, class UMackey_ScriptedAnim_BP_C* K2Node_DynamicCast_AsMackey_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, class URandyScripted_AnimBP_C* K2Node_DynamicCast_AsRandy_Scripted_Anim_BP, bool K2Node_DynamicCast_bSuccess_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_CustomEvent_positive_Reaction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Montage_Play_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class AActor* K2Node_CustomEvent_otherActor, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve_1, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, class UQtnVOComponent* K2Node_ComponentBoundEvent_speakerVOComponent, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, class FName K2Node_CustomEvent_NotifyName_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScriptedSkeletalActor_Trial_C", "ExecuteUbergraph_ScriptedSkeletalActor_Trial");

	Params::AScriptedSkeletalActor_Trial_C_ExecuteUbergraph_ScriptedSkeletalActor_Trial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_DynamicCast_AsMr_Hanky_Anim_BP = K2Node_DynamicCast_AsMr_Hanky_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMackey_Scripted_Anim_BP = K2Node_DynamicCast_AsMackey_Scripted_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsRandy_Scripted_Anim_BP = K2Node_DynamicCast_AsRandy_Scripted_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsTrial_Actor_Anim_BP = K2Node_DynamicCast_AsTrial_Actor_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_positive_Reaction = K2Node_CustomEvent_positive_Reaction;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Montage_Play_ReturnValue_1 = CallFunc_Montage_Play_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_CustomEvent_otherActor = K2Node_CustomEvent_otherActor;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_facialAnimCurve_1 = K2Node_ComponentBoundEvent_facialAnimCurve_1;
	Parms.K2Node_ComponentBoundEvent_animMontage = K2Node_ComponentBoundEvent_animMontage;
	Parms.K2Node_ComponentBoundEvent_isLeadIn = K2Node_ComponentBoundEvent_isLeadIn;
	Parms.K2Node_ComponentBoundEvent_needsLeadIn = K2Node_ComponentBoundEvent_needsLeadIn;
	Parms.K2Node_ComponentBoundEvent_isEmpty = K2Node_ComponentBoundEvent_isEmpty;
	Parms.K2Node_ComponentBoundEvent_autoClosePhone = K2Node_ComponentBoundEvent_autoClosePhone;
	Parms.K2Node_ComponentBoundEvent_forCutsceneHUD = K2Node_ComponentBoundEvent_forCutsceneHUD;
	Parms.K2Node_ComponentBoundEvent_speakerVOComponent = K2Node_ComponentBoundEvent_speakerVOComponent;
	Parms.K2Node_ComponentBoundEvent_facialAnimCurve = K2Node_ComponentBoundEvent_facialAnimCurve;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;

	UObject::ProcessEvent(Func, &Parms);

}

}


