#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x3C8 - 0x260)
// WidgetBlueprintGeneratedClass CharacterCom_Widget.CharacterCom_Widget_C
class UCharacterCom_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               BORDER_Character;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BORDER_Phone;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IconPhone;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PhonePortrait;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EQtnSPCharacter, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>> SpeakerMeshes;                                     // 0x290(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AScriptedSkeletalPhoneActor_C*         SpawnedSpeaker;                                    // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScriptedSkeletalPhoneActor_C*         PersistentPhoneActor;                              // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SoundDuration;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_336A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       AudioComponent;                                    // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoClose;                                         // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ResponderClass;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Scripted_VO_Speaker;                               // 0x310(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C>> SpeakerMeshesVOSystem;                             // 0x318(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnScreen*                            Requesting_Screen;                                 // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         belongsToCutsceneHUD;                              // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Want_Facetime_UI;                                  // 0x371(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_336C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, class UTexture2D*> PortraitMap;                                       // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCharacterCom_Widget_C* GetDefaultObj();

	void SetPortrait(const struct FGameplayTag& CallFunc_GetSpeakerTypeTag_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void IsFacetime(bool WantFacetimeUI, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void CleanUpSpeaker();
	void ClearWidget();
	void FinishUp();
	void StartCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor, bool AutoClose, bool SkipTransition, class UAnimMontage* AnimMontage);
	void SetCharacter(const struct FTribunal_CharacterResponse& ResponseStruct, class UPlayerHUD_C* HUD, bool AutoClose, bool SkipTransition);
	void FinishCharacterCommunicationFromVO(class AScriptedSkeletalPhoneActor_C* PhoneActor);
	void UpdateCharacterCommunicationToAutoClose();
	void PreConstruct(bool IsDesignTime);
	void OnVOAmplitudeUpdate(float VoAmplitude);
	void ExecuteUbergraph_CharacterCom_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor, bool K2Node_ClassDynamicCast_bSuccess, class AScriptedSkeletalPhoneActor_C* K2Node_CustomEvent_phoneActor_1, bool K2Node_CustomEvent_autoClose_1, bool K2Node_CustomEvent_skipTransition_1, class UAnimMontage* K2Node_CustomEvent_animMontage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FTribunal_CharacterResponse& K2Node_CustomEvent_responseStruct, class UPlayerHUD_C* K2Node_CustomEvent_HUD, bool K2Node_CustomEvent_autoClose, bool K2Node_CustomEvent_skipTransition, TSoftClassPtr<class AScriptedSkeletalPhoneActor_C> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, class AScriptedSkeletalPhoneActor_C* K2Node_CustomEvent_phoneActor, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AScriptedSkeletalPhoneActor_C* CallFunc_FinishSpawningActor_ReturnValue, class UAudioComponent* CallFunc_PlayAnimationAudio_sound, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsScripted_Skeletal_Phone_Actor_2, bool K2Node_ClassDynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_voAmplitude, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_FClamp_ReturnValue);
};

}


