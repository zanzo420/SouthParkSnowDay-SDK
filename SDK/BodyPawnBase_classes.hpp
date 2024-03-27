#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x13E8 - 0x11D0)
// BlueprintGeneratedClass BodyPawnBase.BodyPawnBase_C
class ABodyPawnBase_C : public AQtnBodyPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USicknessReceptorComponent_C*          SicknessReceptorComponent;                         // 0x11D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChillReceptorComponent_C*             ChillReceptorComponent;                            // 0x11E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodyBSComponent_C*                    BodyBSComponent;                                   // 0x11E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodypawnHealingComponent_C*           BodypawnHealingComponent;                          // 0x11F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodyVerbComponent_C*                  BodyVerbComponent;                                 // 0x11F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBodyInventoryComponent_C*             BodyInventoryComponent;                            // 0x1200(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnVOComponent*                       QtnVO;                                             // 0x1208(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFacialAnimComponent_C*                FacialAnimComponent;                               // 0x1210(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFootstepFXComponent_C*                FootstepFXComponent;                               // 0x1218(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SnowTrail;                                         // 0x1220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDamageReceptorBodyPawn_C*             DamageReceptorBodyPawn;                            // 0x1228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnAttributeComponent*                QtnAttribute;                                      // 0x1230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioComponentSFX;                                 // 0x1238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeView;                                        // 0x1240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SkinMatInt;                                        // 0x1244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BSWaveTeam;                                        // 0x1248(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             BSWaveSkinMat;                                     // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    BSEyeMatFriend;                                    // 0x1258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    BSEyeMatFoe;                                       // 0x1260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HairMatInt;                                        // 0x1268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Dispatcher_OnOutgoingDamage;                       // 0x1270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USkeletalMeshComponent*                VampireCape;                                       // 0x1280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReviveHealthPercentage;                            // 0x1288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HardFallVelocity;                                  // 0x128C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Taunt_Montage;                                     // 0x1290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SkinMat;                                           // 0x1298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkinToneValue;                                     // 0x12A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomSeed;                                        // 0x12A4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        R_BodypawnUpgradeList;                             // 0x12A8(0x10)(Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance)
	TArray<class UClass*>                        StatusEffectsOnRevive;                             // 0x12B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ReviveStatusEffectClass;                           // 0x12C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hair_Settings;                                     // 0x12D0(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Invisible;                                         // 0x12DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0x12E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NumTimesRevived;                                   // 0x12F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumTimesRevivedAlly;                               // 0x12F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftClassPtr<class AQtnWaveSpawner_BP_C>, struct FBodySpawnAnimArray> SpawnAnimMap;                                      // 0x12F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                BoredVerb;                                         // 0x1348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          RezzingNecro;                                      // 0x1350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasModifiedHealthTotal;                            // 0x1358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                AdditionalHeadSkin;                                // 0x1360(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Dispatcher_NeedsHelp;                              // 0x1370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseFloatingReviveText;                             // 0x1380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FloatingReviveTextTimer;                           // 0x1388(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FloatingReviveTextIntervalSeconds;                 // 0x1390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReviveText;                                        // 0x1398(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          FloatingReviveTextColor;                           // 0x13B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BubbleShieldActive;                                // 0x13C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         R_bombHead;                                        // 0x13C1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6CCC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VampireMat;                                        // 0x13C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    VampireMatInst;                                    // 0x13C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    OriginalBodyMat;                                   // 0x13D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        SpawnedTotems;                                     // 0x13D8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABodyPawnBase_C* GetDefaultObj();

	void GetSpawnAnimsFromBody(class UClass* SpawnerClass, struct FBodySpawnAnimArray* AnimArrayStruct, TSoftClassPtr<class AQtnWaveSpawner_BP_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, const struct FBodySpawnAnimArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnRep_r_bombHead(class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHeadAccessoryComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHairComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void Destroy_Aura_Component(class UBaseAuraComponent_C* AuraToDestroy, bool CallFunc_IsValid_ReturnValue);
	void Add_Aura_Component(class UClass* AuraType, class UBaseAuraComponent_C** NewAuraComponent, class UBaseAuraComponent_C* CallFunc_AddComponentByClass_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void DetermineIfMeleeWeapon(class UQtnVerb*& SourceVerb, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsMeleeWeaponVerb_ReturnValue);
	void IncrementNumTimesRevivedAlly(int32 CallFunc_Add_IntInt_ReturnValue);
	void GetHealth(float* Health, float* MaxHealth, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1);
	void Has_Recently_Taken_Verb_Damage(float RecentDuration, bool* HasRecentlyTakenVerbDamage, float CallFunc_GetQtnTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void UpdateHair(const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHairComponent_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void OnRep_Hair_Settings();
	void SetHair_Local(const struct FVector& HairSettings);
	bool CanBeRevived(class AQtnPawn* OtherPawn, class UProximityBasedReviveComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanBeRevived_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetHealthRatio(float* HealthRatio, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue);
	void AddEventContext(struct FQtnEventMessage& EventMessage, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue);
	void OnRep_RandomSeed();
	void UpdateSkinTone(int32 BodyID, int32 HeadID, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHeadComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UHead_Player_Parent_C* K2Node_DynamicCast_AsHead_Player_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UQtnCharacterMesh_Archetype_C* K2Node_DynamicCast_AsQtn_Character_Mesh_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
	void OnRep_SkinToneValue();
	void Set_Skin_Tone_Local(float ToneValue);
	void HandleResurrection_ServerOnly(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_UnlockAttribute_self_CastInput, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput);
	void IsBodyDying(bool* Result, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UFullBodyDead_C* K2Node_DynamicCast_AsFull_Body_Dead, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDying_result);
	void VampireAppearanceToggle(bool On, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
	void BodyTraceFunction(const struct FVector& Start, const struct FVector& End, struct FHitResult* Hit, TArray<class AActor*>& Temp_object_Variable, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	void SetUpBSWaveAppearance();
	void OnRep_BSWaveTeam();
	void BS_Spawn_Wave_Team_Server(class UClass* NewTeam);
	void HandleDeath(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable, class UQtnOutcomeTrackingSubsystem* CallFunc_GetOutcomeTrackingSubsystem_ReturnValue, bool Temp_bool_Variable, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue, class UQtnDamageType* CallFunc_GetLastDamagingDamageType_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyToBlame_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FQtnPlayerOutcomeSummary& CallFunc_GetPlayerOutcomeValue_ServerOnly_ReturnValue, const struct FQtnDamageInfo& CallFunc_GetLastDamageInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DetermineIfMeleeWeapon_result, const struct FGameplayTag& K2Node_Select_Default);
	void SpawnPresentationStart();
	void SpawnPresentationStop();
	void PerAISpawn(class AQtnBodyPawn* Body);
	void ReceiveBeginPlay();
	void OnHealthDepleted();
	void AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void BndEvt__QtnAttribute_K2Node_ComponentBoundEvent_1_QtnOnAttributeAddedEvent__DelegateSignature(TSubclassOf<class UQtnAttribute> AttributeClass, class UQtnAttribute* Attribute);
	void OnOutgoingDamage_Event_0(class AActor* DamagedActor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void QtnNoRage();
	void BodyAliveChangeEvent_Event_0(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void OnPawnKilledEnemy(class AQtnBodyPawn* InKilledBodyPawn);
	void OnLandEvent(class AQtnPawn* Pawn, struct FHitResult& HitResult);
	void SetSkinTone_SERVER(float SkinTone);
	void BndEvt__BodyPawnBase_m_BodyAppearanceComponent_K2Node_ComponentBoundEvent_0_QtnAppearanceChangeEvent__DelegateSignature();
	void RefreshMeshVariation();
	void BndEvt__BodyPawnBase_QtnVO_K2Node_ComponentBoundEvent_2_OnVOPlayed__DelegateSignature(class UCurveFloat* FacialAnimCurve, class UAnimMontage* AnimMontage, bool IsLeadIn, bool NeedsLeadIn, bool IsEmpty, bool AutoClosePhone, bool ForCutsceneHUD);
	void ServerIncreaseAttribute(class UClass* Attribute, float Value);
	void SetHair_SERVER(const struct FVector& HairSettings);
	void HandleInvisibility(bool WantInvisible);
	void Combat_Event_BP(bool CombatBeginning);
	void QtnCheckGoalsSaved();
	void OnPowerVerbUsed(class UQtnVerb_Archetype_C* PowerVerb);
	void BndEvt__BodyPawnBase_QtnVO_K2Node_ComponentBoundEvent_3_OnVOPhoneSpeakerLipsync__DelegateSignature(class UQtnVOComponent* PhoneSpeakerVOComponent, class UCurveFloat* FacialAnimCurve);
	void OnFloatingReviveTextEvent();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BodyPawnBase(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AQtnBodyPawn* K2Node_Event_body, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn_1, class AActor* K2Node_CustomEvent_alivenessInstigator_1, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness_1, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness_1, bool K2Node_CustomEvent_isServer_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_TriggerModifierEvent_self_CastInput, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TSubclassOf<class UQtnAttribute> K2Node_ComponentBoundEvent_attributeClass, class UQtnAttribute* K2Node_ComponentBoundEvent_attribute, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AActor* K2Node_CustomEvent_damagedActor, const struct FQtnDamageInfo& K2Node_CustomEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_CustomEvent_hitReactionInfo, bool K2Node_CustomEvent_isServer_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAlly_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_InKilledBodyPawn, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class AQtnPawn* K2Node_CustomEvent_pawn, const struct FHitResult& K2Node_CustomEvent_HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAudioComponent* CallFunc_PlaySound_ReturnValue, float K2Node_CustomEvent_skinTone, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class AQtnPlayerController* CallFunc_GetOccupyingLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_GetHairSettings_hairSettings, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FQtnCharacterAppearance& CallFunc_GetCharacterAppearanceData_ReturnValue, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue, class UBody_Player_Parent_C* K2Node_DynamicCast_AsBody_Player_Parent, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve_1, class UAnimMontage* K2Node_ComponentBoundEvent_animMontage, bool K2Node_ComponentBoundEvent_isLeadIn, bool K2Node_ComponentBoundEvent_needsLeadIn, bool K2Node_ComponentBoundEvent_isEmpty, bool K2Node_ComponentBoundEvent_autoClosePhone, bool K2Node_ComponentBoundEvent_forCutsceneHUD, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UClass* K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_Value, bool CallFunc_CanDie_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_6, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, bool CallFunc_HasAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_7, const struct FVector& K2Node_CustomEvent_HairSettings, bool CallFunc_IsServer_ReturnValue_2, bool K2Node_CustomEvent_wantInvisible, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetBodyComponent_ReturnValue_2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool Temp_bool_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FQtnEntityTuningDataRow& CallFunc_GetEntityTuningData_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeMax_self_CastInput, float CallFunc_GetAttributeMax_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, bool K2Node_CustomEvent_combatBeginning, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UQtnOutcomeTrackingSubsystem* CallFunc_GetOutcomeTrackingSubsystem_ReturnValue, const struct FQtnPlayerOutcomeSummary& CallFunc_GetPlayerOutcomeValue_ServerOnly_ReturnValue, const struct FQtnPlayerOutcomeSummary& CallFunc_GetPlayerOutcomeValue_ServerOnly_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_4, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_3, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData_1, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData_1, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData_1, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin_1, class UQtnVerb_Archetype_C* K2Node_CustomEvent_powerVerb, bool K2Node_SwitchEnum_CmpSuccess_4, class UFTUXDataBag_C* CallFunc_GetCustomDataBag_ReturnValue, class UQtnVOComponent* K2Node_ComponentBoundEvent_phoneSpeakerVOComponent, class UCurveFloat* K2Node_ComponentBoundEvent_facialAnimCurve, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UQtnDamageNumbersSubsystem* CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, bool Temp_bool_Variable_1, float K2Node_Event_DeltaSeconds, enum class EPhysicalSurface K2Node_Select_Default, class FName CallFunc_ConvertSurfaceTypeToName_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Dispatcher_NeedsHelp__DelegateSignature(bool NeedsHelp);
	void Dispatcher_OnOutgoingDamage__DelegateSignature(const struct FQtnDamageInfo& Damage_Info, const struct FQtnHitReactionInfo& Hit_Reaction_Info, class AActor* Damaged_Actor);
};

}


