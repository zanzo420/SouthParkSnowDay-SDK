#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x3E9 - 0x38A)
// BlueprintGeneratedClass ScriptedSkeletalPhoneActor.ScriptedSkeletalPhoneActor_C
class AScriptedSkeletalPhoneActor_C : public AScriptedSkeletalActor_Trial_C
{
public:
	uint8                                        Pad_4AE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEnvelopeFollowerListener*             EnvelopeFollowerListener;                          // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                TextureTarget;                                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundTex;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSpawnedOnDemand;                                // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USourceEffectEnvelopeFollowerPreset*   EnvelopeFollowerPreset;                            // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VoAmplitude;                                       // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnVOAmplitudeUpdate;                               // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseCutsceneHUD;                                    // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AScriptedSkeletalPhoneActor_C* GetDefaultObj();

	void GetRelevantHUD(bool* IsPlayerHUD, class UPlayerHUD_C** PlayerHUD, class UCutsceneHUD_Widget_C** CutsceneHUD, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, class UCutsceneHUD_Screen_C* CallFunc_GetScreen_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue_1, class UCutsceneHUD_Widget_C* K2Node_DynamicCast_AsCutscene_HUD_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetMainWidget_ReturnValue_1, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess_1);
	void GetVOAmplitude(float* VoAmplitude);
	void SetWasSpawnedOnDemand();
	void UserConstructionScript(int32 CallFunc_Array_Add_ReturnValue);
	void ToggleCapture(bool On);
	void BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_0_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD);
	void BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_2_OnVOAudioFinished__DelegateSignature(bool IsEmpty);
	void BndEvt__ScriptedSkeletalPhoneActor_QtnVO_K2Node_ComponentBoundEvent_3_OnVOStopped__DelegateSignature(bool IsEmpty);
	void ReceiveBeginPlay();
	void BndEvt__ScriptedSkeletalPhoneActor_EnvelopeFollowerListener_K2Node_ComponentBoundEvent_1_OnEnvelopeFollowerUpdate__DelegateSignature(float EnvelopeValue);
	void ExecuteUbergraph_ScriptedSkeletalPhoneActor(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty_2, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, bool K2Node_ComponentBoundEvent_isEmpty_1, bool K2Node_ComponentBoundEvent_isEmpty, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, float K2Node_ComponentBoundEvent_EnvelopeValue, bool CallFunc_GetRelevantHUD_isPlayerHUD, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD, bool CallFunc_GetRelevantHUD_isPlayerHUD_1, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD_1, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD_1, bool CallFunc_GetRelevantHUD_isPlayerHUD_2, class UPlayerHUD_C* CallFunc_GetRelevantHUD_playerHUD_2, class UCutsceneHUD_Widget_C* CallFunc_GetRelevantHUD_cutsceneHUD_2, bool K2Node_CustomEvent_On);
	void OnVOAmplitudeUpdate__DelegateSignature(float VoAmplitude);
};

}


