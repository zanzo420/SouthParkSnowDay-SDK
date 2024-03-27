#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x2F0 - 0x250)
// BlueprintGeneratedClass PlayerPaperDoll_BP.PlayerPaperDoll_BP_C
class APlayerPaperDoll_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight2;                                        // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   SpotLight1;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              InventoryCamera;                                   // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CameraRot;                                         // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFacialAnimComponent_C*                FacialAnimComponent;                               // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnCharacterAppearanceComponent*      QtnCharacterAppearance;                            // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                PlayerBase;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnCharacterAppearanceComponent*      SourceAppearance;                                  // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotating;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotSpeed;                                          // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Skin_Tone;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantLights;                                        // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2B8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            NewVar_0;                                          // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               Hair_Settings;                                     // 0x2C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantSceneCapture;                                  // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2B8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Idle_Anim;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantSceneLighting;                                 // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2B8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnCharacterBodyMesh*                 CurrentCosmetic;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APlayerPaperDoll_BP_C* GetDefaultObj();

	void Get_Cosmetic_Item(const class FString& ItemId, bool IsEmote, class UQtnCharacterBodyMesh** OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C>* OutEmoteVerb, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2, bool K2Node_ClassDynamicCast_bSuccess_3, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1);
	void UpdateLighting(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UserConstructionScript();
	void OnNotifyEnd_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName);
	void OnNotifyBegin_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName);
	void OnInterrupted_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName);
	void OnBlendOut_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName);
	void OnCompleted_2AFA2ADD408F2BF178B8ACA5311661AE(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetBaseAppearance(class UQtnCharacterAppearanceComponent*& PlayerAppearance, float SkinTone, const struct FVector& HairSettings);
	void PreviewAppearance(const class FString& Class, const class FString& Item);
	void ResetAppearance();
	void RotatePaperDoll(float RotDelta, bool ToggleOn);
	void PlayAnimationMontage(class UAnimMontage* Montage, float RandomStartTime);
	void BndEvt__PlayerPaperDoll_BP_QtnCharacterAppearance_K2Node_ComponentBoundEvent_0_QtnAppearanceChangeEvent__DelegateSignature();
	void UpdateSkinTone(float SkinTone);
	void AppearanceUpdated();
	void UpdateHairColor(float HairColor);
	void StopAnims(float BlendOutTime);
	void SetIdleAnim(class UAnimSequenceBase* NewIdle);
	void ForceStreamTextures(class USkeletalMeshComponent* SkelComponent);
	void UpdateHairBrightness(float HairBrightness);
	void ExecuteUbergraph_PlayerPaperDoll_BP(int32 EntryPoint, class FName Temp_name_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, class UQtnCharacterAppearanceComponent* K2Node_CustomEvent_PlayerAppearance, float K2Node_CustomEvent_skinTone_1, const struct FVector& K2Node_CustomEvent_HairSettings, const class FString& K2Node_CustomEvent_class, const class FString& K2Node_CustomEvent_Item, class UQtnCharacterBodyMesh* CallFunc_Get_Cosmetic_Item_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_Get_Cosmetic_Item_OutEmoteVerb, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_CustomEvent_RotDelta, bool K2Node_CustomEvent_toggleOn, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAnimMontage* K2Node_CustomEvent_montage, float K2Node_CustomEvent_RandomStartTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_skinTone, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_CustomEvent_HairColor, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float K2Node_CustomEvent_BlendOutTime, class USkeletalMeshComponent* CallFunc_GetHairComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_4, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class UAnimSequenceBase* K2Node_CustomEvent_newIdle, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UTrialActor_AnimBP_C* K2Node_DynamicCast_AsTrial_Actor_Anim_BP_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent_1, bool K2Node_DynamicCast_bSuccess_3, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USkeletalMeshComponent* K2Node_CustomEvent_SkelComponent, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class USkeletalMeshComponent* CallFunc_GetCapeComponent_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, float K2Node_CustomEvent_HairBrightness, class USkeletalMeshComponent* CallFunc_GetHeadAccessoryComponent_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12);
};

}


