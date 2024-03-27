#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A9 (0x8D9 - 0x630)
// BlueprintGeneratedClass BaseWeapon.BaseWeapon_C
class ABaseWeapon_C : public ARightHandItem_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnAttributeComponent*                QtnAttribute;                                      // 0x638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnFrobAccumulatorComponent*          QtnFrobAccumulator;                                // 0x640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        CounterAttackVerbClasses;                          // 0x648(0x10)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         Display_Debugging_Printout_;                       // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Verb_Used_For_Weapon_DPS_Display;                  // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnModularWeaponConfiguration        ModW_Configuration;                                // 0x668(0xE8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FQtnModularWeaponAttachment           ModW_PrimaryDO;                                    // 0x750(0xA0)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FQtnModularWeaponAttachment           ModW_SecondaryDO;                                  // 0x7F0(0xA0)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FDataTableRowHandle                   WeaponModularConfiguration;                        // 0x890(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                Tutorial;                                          // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     FlameParticles;                                    // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresUnlockToUse;                               // 0x8B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialKeyName;                                   // 0x8B4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnFXActor*                           PoisonedFX;                                        // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPoisoned;                                        // 0x8C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                BaseWeaponReference;                               // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWeaponVariation;                                 // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABaseWeapon_C* GetDefaultObj();

	void GetUnlockData(class UObject* Requester, bool* Locked, class FText* LockText, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetRowNameFromUnlockKey_rowExists, class FName CallFunc_GetRowNameFromUnlockKey_ReturnValue, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_IsUnlocked_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool IsBaseWeapon();
	void GetWeaponSkeletalMesh(class USkeletalMesh** SkeletalMesh, bool CallFunc_IsValid_ReturnValue);
	void Check_for_Tutorials(class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, bool CallFunc_RequestTutorialPresentation_ReturnValue);
	void HandleUnequip_Derived(class AQtnBodyPawn* bodyPawn);
	void HandleEquip_Derived(class AQtnBodyPawn* bodyPawn);
	void SetWeaponVisibilityWhileEquipped(bool WantVisible, bool CallFunc_Not_PreBool_ReturnValue);
	void GetWeaponReferences(const struct FQtnItemData& In_ItemData, struct FQtnModularWeaponAttachment* Out_ModW_Primary, struct FQtnModularWeaponAttachment* Out_ModW_Secondary, const struct FQtnModularWeaponAttachment& L_ModW_PrimaryDO, const struct FQtnModularWeaponAttachment& L_ModW_SecondaryDO, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnModularWeaponConfiguration& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const struct FQtnModularWeaponAttachmentConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnModularWeaponAttachmentConfiguration& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Map_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Map_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue);
	void GenerateWeaponForIcon(class USceneComponent* BaseForWeapon, const struct FQtnItemData& ItemData, struct FBoxSphereBounds* Bounds, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, class AActor* CallFunc_GetOwner_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void HandleLootSelect(class UBP_LootIcon_C* ThisIcon);
	void HandleLootHover(class UBP_LootIcon_C* ThisIcon, bool Hovering);
	void GetItemDetail(class UBP_LootIcon_C* LootObject, int32 ItemIndex);
	void BndEvt__QtnEquippable_K2Node_ComponentBoundEvent_0_QtnEquipEvent__DelegateSignature(class AQtnBodyPawn* bodyPawn);
	void BndEvt__QtnEquippable_K2Node_ComponentBoundEvent_1_QtnEquipEvent__DelegateSignature(class AQtnBodyPawn* bodyPawn);
	void VerbStartEvent_Event_0(class UQtnVerb* Verb, bool IsServer);
	void FlamingWeapons(bool On);
	void OnEquippedCharacterAlivenessChangedEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer);
	void PoisonedWeapons(bool On);
	void ExecuteUbergraph_BaseWeapon(int32 EntryPoint, class USkeletalMesh* CallFunc_GetWeaponSkeletalMesh_SkeletalMesh, bool CallFunc_IsValid_ReturnValue, class UBP_LootIcon_C* K2Node_Event_thisIcon_1, class UBP_LootIcon_C* K2Node_Event_thisIcon, bool K2Node_Event_hovering, class UBP_LootIcon_C* K2Node_Event_LootObject, int32 K2Node_Event_itemIndex, class AQtnBodyPawn* K2Node_ComponentBoundEvent_bodyPawn_1, class AQtnBodyPawn* K2Node_ComponentBoundEvent_bodyPawn, class UQtnVerb* K2Node_CustomEvent_verb, bool K2Node_CustomEvent_isServer_1, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsRanged_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_On_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_On, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9);
};

}


