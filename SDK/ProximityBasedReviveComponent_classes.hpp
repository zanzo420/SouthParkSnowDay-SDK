#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x618 - 0x560)
// BlueprintGeneratedClass ProximityBasedReviveComponent.ProximityBasedReviveComponent_C
class UProximityBasedReviveComponent_C : public UQtnProximityBasedReviveComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         R_WaitingforRevive;                                // 0x568(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1399[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        PotentialRevivors_ServerOnly;                      // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        R_ReviveTimer;                                     // 0x580(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Revive_Timer_MAX;                                  // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ReviveLoop;                                        // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnBase_C*                       OwningBody;                                        // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ReviveSphere;                                      // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ReviveMat;                                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        L_ReviveTimer;                                     // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        R_numRevivors;                                     // 0x5AC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        R_reviveRate;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_139C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABodyPawnBase_C*>               RevivingPawns_ServerOnly;                          // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        RevivingActors_ServerOnly;                         // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         RevivalFTUX_InStarks;                              // 0x5D8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_139D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionManagerComponent_C*            Mission_Manager_Component;                         // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RevivalFTUX_OnRingOverlap;                         // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            RevivalFTUX_OnRingStopOverlap;                     // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Revive;                                            // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UProximityBasedReviveComponent_C* GetDefaultObj();

	void OnRep_r_reviveRate();
	bool ShouldDoGroundTrace(class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UFullBodyDead_C* K2Node_DynamicCast_AsFull_Body_Dead, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GetCanBeRevived_canCrawl, bool CallFunc_GetCanBeRevived_ReturnValue);
	void RevivalFTUX_Init(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsServer_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void TurnOffTotems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IInterface_HealingTotem_C> K2Node_DynamicCast_AsInterface_Healing_Totem, bool K2Node_DynamicCast_bSuccess, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess);
	void ResetRevivalActors_ServerOnly();
	void TickRevive_ServerOnly(float DeltaSeconds, float RevivalProxy_Bonus, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class AActor* CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue_1, TScriptInterface<class IInterface_HealingTotem_C> K2Node_DynamicCast_AsInterface_Healing_Totem, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInterface_HealingTotem_C> K2Node_DynamicCast_AsInterface_Healing_Totem_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInterface_HealingTotem_C> K2Node_DynamicCast_AsInterface_Healing_Totem_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetReviveProxyFeedbackOn_reviveProxyFeedbackOn, float CallFunc_GetUpgradeRevivalProxyMultiplier_upgradeRevivalProxyMultiplier, float CallFunc_Add_FloatFloat_ReturnValue_2, TScriptInterface<class IInterface_HealingTotem_C> K2Node_DynamicCast_AsInterface_Healing_Totem_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GetUpgradeRevivalProxy_upgradeRevivalProxy, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, class UQtnEmoteVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Do_Revive_Presentation(float DeltaSeconds, float FillRatio, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void FadeOutReviveSound(bool CallFunc_IsValid_ReturnValue);
	void Revive_Server_Only(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class AQtnPawn* CallFunc_GetLastDamagingCulprit_ReturnValue);
	void SetupReviveSphere(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USphereComponent* CallFunc_AddComponentByClass_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnComponentEndOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BodyAliveChangeEvent_Event_0(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void ExecuteUbergraph_ProximityBasedReviveComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_otherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess_2, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_otherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_4, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Has_Been_Initd_Variable);
	void RevivalFTUX_OnRingStopOverlap__DelegateSignature(class AActor* Actor_Who_Left);
	void Revive__DelegateSignature(class ABodyPawnBase_C* RevivedPlayer);
	void RevivalFTUX_OnRingOverlap__DelegateSignature(class UProximityBasedReviveComponent_C* Revive_component_calling, class ABodyPawnBase_C* EnteringAlly);
};

}

