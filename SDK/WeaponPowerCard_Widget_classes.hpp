#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x268 (0x4C8 - 0x260)
// WidgetBlueprintGeneratedClass WeaponPowerCard_Widget.WeaponPowerCard_Widget_C
class UWeaponPowerCard_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HighlightEquipped;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Highlight;                                         // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Training;                                          // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Card;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_EquipDogear;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Equipped;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LootIcon_C*                        BP_LootIcon_72;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Card;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Affordance;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    QTxt_Input;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_LockData;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Title;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQtnItemData                          MyItemData;                                        // 0x2D0(0x68)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Index;                                             // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3465[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnWeaponConfiguration               WeaponConfigurationData;                           // 0x340(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          ItemTypeGameplayTag;                               // 0x420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Equipped;                                          // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtn_EquipmentCategory            Equipment_Category;                                // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3466[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          MyBody;                                            // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCardClicked;                                     // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMenuEquipment_Widget_C*               EquipmentMenu;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CachedVerbClass;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TrainingPulse;                                     // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3467[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Current_Hover_Time;                                // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TSoftClassPtr<class AQtnItem>, struct FUIWeaponInfo_Struct> WeaponCardInfo;                                    // 0x470(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsWeaponLocked;                                    // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3468[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Current_Hover_Equipped_Time;                       // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWeaponPowerCard_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTWeaponPowerCard_Widget_0();
	void SelectButton();
	void FTUX_Unlock_Staff();
	void GetVerbClass(class UClass** VerbClass, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue);
	void IsWeaponOrPowerEquipped(bool* IsEquipped, class FName LOCAL_RowName, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue_1, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void SetEquipped(bool Equipped_);
	void AddPowerPips(int32 NumPips, class UHorizontalBox* Hbox, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UCheatPip_Widget_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	class FText GetTitleText(class FText CallFunc_GetText_ReturnValue);
	void CheckLockedStatus(bool FTUXStaffOverride, class FText LockText, bool IsLocked, enum class EQtnTutorialStatus CallFunc_GetTutorialState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UClass* CallFunc_GetVerbClass_VerbClass, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class AQtnItem* CallFunc_GetClassDefaultObject_ReturnValue_1, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetUnlockData_Locked_1, class FText CallFunc_GetUnlockData_LockText_1);
	class FText SetAffordanceText(TMap<enum class EQtn_EquipmentCategory, class FString> TestAffordanceMap, TMap<enum class EQtn_EquipmentCategory, class FString> AffordanceMap, TMap<enum class EQtn_EquipmentCategory, class FString> K2Node_MakeVariable_MakeVariableOutput, TMap<enum class EQtn_EquipmentCategory, class FString> K2Node_MakeVariable_MakeVariableOutput_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Anim_EquippedHover(bool Hovered);
	void InitCard(class UMenuEquipment_Widget_C* EquipmentMenu, bool FTUX_Staff_Override);
	void ItemEquipped(bool Equipped);
	void BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponPowerCard_Widget_Button_210_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void StartTrainingHighlight();
	void PauseTrainingHighlight(bool CardHovered, class FText CardTitle);
	void UnbindTrainingEvent();
	void AnimSeq_Hover(bool Hovered);
	void HoverRepeater();
	void ExecuteUbergraph_WeaponPowerCard_Widget(int32 EntryPoint, bool K2Node_CustomEvent_Hovered_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMenuEquipment_Widget_C* K2Node_CustomEvent_EquipmentMenu, bool K2Node_CustomEvent_FTUX_Staff_Override, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class FText CallFunc_GenerateNameTextFromItemData_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_Equipped, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces_1, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText CallFunc_SetAffordanceText_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FQtnItemData& CallFunc_GetItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetTitleText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_StaticParseInputText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_StaticParseInputText_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_CustomEvent_CardHovered, class FText K2Node_CustomEvent_CardTitle, bool K2Node_CustomEvent_Hovered, const struct FQtnWeaponConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FUIWeaponInfo_Struct& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1);
	void OnCardClicked__DelegateSignature();
	void OnHover__DelegateSignature(bool CardHovered, class FText CardTitle);
};

}


