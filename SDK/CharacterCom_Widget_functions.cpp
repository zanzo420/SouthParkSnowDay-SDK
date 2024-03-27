#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterCom_Widget.CharacterCom_Widget_C
// (None)

class UClass* UCharacterCom_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterCom_Widget_C");

	return Clss;
}


// CharacterCom_Widget_C CharacterCom_Widget.Default__CharacterCom_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterCom_Widget_C* UCharacterCom_Widget_C::GetDefaultObj()
{
	static class UCharacterCom_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterCom_Widget_C*>(UCharacterCom_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterCom_Widget.CharacterCom_Widget_C.SetPortrait
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_GetSpeakerTypeTag_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCom_Widget_C::SetPortrait(const struct FGameplayTag& CallFunc_GetSpeakerTypeTag_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "SetPortrait");

	Params::UCharacterCom_Widget_C_SetPortrait_Params Parms{};

	Parms.CallFunc_GetSpeakerTypeTag_ReturnValue = CallFunc_GetSpeakerTypeTag_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.IsFacetime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantFacetimeUI                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCom_Widget_C::IsFacetime(bool WantFacetimeUI, int32 CallFunc_Conv_BoolToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "IsFacetime");

	Params::UCharacterCom_Widget_C_IsFacetime_Params Parms{};

	Parms.WantFacetimeUI = WantFacetimeUI;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.CleanUpSpeaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCom_Widget_C::CleanUpSpeaker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "CleanUpSpeaker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.ClearWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCom_Widget_C::ClearWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "ClearWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.FinishUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCom_Widget_C::FinishUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "FinishUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.StartCharacterCommunicationFromVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalPhoneActor_C*PhoneActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AutoClose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                AnimMontage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCom_Widget_C::StartCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor, bool AutoClose, bool SkipTransition, class UAnimMontage* AnimMontage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "StartCharacterCommunicationFromVO");

	Params::UCharacterCom_Widget_C_StartCharacterCommunicationFromVO_Params Parms{};

	Parms.PhoneActor = PhoneActor;
	Parms.AutoClose = AutoClose;
	Parms.SkipTransition = SkipTransition;
	Parms.AnimMontage = AnimMontage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.SetCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTribunal_CharacterResponse ResponseStruct                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AutoClose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipTransition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCom_Widget_C::SetCharacter(const struct FTribunal_CharacterResponse& ResponseStruct, class UPlayerHUD_C* HUD, bool AutoClose, bool SkipTransition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "SetCharacter");

	Params::UCharacterCom_Widget_C_SetCharacter_Params Parms{};

	Parms.ResponseStruct = ResponseStruct;
	Parms.HUD = HUD;
	Parms.AutoClose = AutoClose;
	Parms.SkipTransition = SkipTransition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.FinishCharacterCommunicationFromVO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScriptedSkeletalPhoneActor_C*PhoneActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCom_Widget_C::FinishCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "FinishCharacterCommunicationFromVO");

	Params::UCharacterCom_Widget_C_FinishCharacterCommunicationFromVO_Params Parms{};

	Parms.PhoneActor = PhoneActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.UpdateCharacterCommunicationToAutoClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharacterCom_Widget_C::UpdateCharacterCommunicationToAutoClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "UpdateCharacterCommunicationToAutoClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCom_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "PreConstruct");

	Params::UCharacterCom_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.OnVOAmplitudeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              VoAmplitude                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCom_Widget_C::OnVOAmplitudeUpdate(float VoAmplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "OnVOAmplitudeUpdate");

	Params::UCharacterCom_Widget_C_OnVOAmplitudeUpdate_Params Parms{};

	Parms.VoAmplitude = VoAmplitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCom_Widget.CharacterCom_Widget_C.ExecuteUbergraph_CharacterCom_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalPhoneActor_C*K2Node_CustomEvent_phoneActor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_autoClose_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_skipTransition_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_animMontage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOriginalBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOriginalBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTribunal_CharacterResponse K2Node_CustomEvent_responseStruct                                (NoDestructor, HasGetValueTypeHash)
// class UPlayerHUD_C*                K2Node_CustomEvent_HUD                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_autoClose                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_skipTransition                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform_1                              (NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalPhoneActor_C*K2Node_CustomEvent_phoneActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalPhoneActor_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_PlayAnimationAudio_sound                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AActor>          CallFunc_SyncLoadActorClass_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_voAmplitude                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCom_Widget_C::ExecuteUbergraph_CharacterCom_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor, bool K2Node_ClassDynamicCast_bSuccess, class AScriptedSkeletalPhoneActor_C* K2Node_CustomEvent_phoneActor_1, bool K2Node_CustomEvent_autoClose_1, bool K2Node_CustomEvent_skipTransition_1, class UAnimMontage* K2Node_CustomEvent_animMontage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_responseStruct, class UPlayerHUD_C* K2Node_CustomEvent_HUD, bool K2Node_CustomEvent_autoClose, bool K2Node_CustomEvent_skipTransition, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, class AScriptedSkeletalPhoneActor_C* K2Node_CustomEvent_phoneActor, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_FinishSpawningActor_ReturnValue, class UAudioComponent* CallFunc_PlayAnimationAudio_sound, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_2, bool K2Node_ClassDynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_voAmplitude, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCom_Widget_C", "ExecuteUbergraph_CharacterCom_Widget");

	Params::UCharacterCom_Widget_C_ExecuteUbergraph_CharacterCom_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor = K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_phoneActor_1 = K2Node_CustomEvent_phoneActor_1;
	Parms.K2Node_CustomEvent_autoClose_1 = K2Node_CustomEvent_autoClose_1;
	Parms.K2Node_CustomEvent_skipTransition_1 = K2Node_CustomEvent_skipTransition_1;
	Parms.K2Node_CustomEvent_animMontage = K2Node_CustomEvent_animMontage;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerOriginalBody_outputPin = CallFunc_GetLocalPlayerOriginalBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOriginalBody_ReturnValue = CallFunc_GetLocalPlayerOriginalBody_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_responseStruct = K2Node_CustomEvent_responseStruct;
	Parms.K2Node_CustomEvent_HUD = K2Node_CustomEvent_HUD;
	Parms.K2Node_CustomEvent_autoClose = K2Node_CustomEvent_autoClose;
	Parms.K2Node_CustomEvent_skipTransition = K2Node_CustomEvent_skipTransition;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_MakeStruct_WidgetTransform_1 = K2Node_MakeStruct_WidgetTransform_1;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_1 = K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_phoneActor = K2Node_CustomEvent_phoneActor;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_PlayAnimationAudio_sound = CallFunc_PlayAnimationAudio_sound;
	Parms.CallFunc_SyncLoadActorClass_ReturnValue = CallFunc_SyncLoadActorClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_2 = K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_voAmplitude = K2Node_CustomEvent_voAmplitude;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


