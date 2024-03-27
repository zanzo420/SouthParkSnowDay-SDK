#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x468 (0x6C8 - 0x260)
// WidgetBlueprintGeneratedClass CardArmory_Widget.CardArmory_Widget_C
class UCardArmory_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Equipped;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LootIcon_C*                        BP_LootIcon;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_151;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Dogear;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CardIcon_Widget_C*                 UI_CardIcon_Widget;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUI_Card_Struct                       My_Card_Info;                                      // 0x290(0x340)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3558[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnItemData                          My_Item_Data;                                      // 0x5D8(0x68)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EQtn_EquipmentCategory            Equipment_Category;                                // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_355A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuEquipment_Widget_C*               OwningMenu;                                        // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<TSoftClassPtr<class UQtnVerb>, class FText> PowerCardInfo;                                     // 0x660(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TrainingPulse;                                     // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Locked;                                            // 0x6B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_355C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHover;                                           // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCardArmory_Widget_C* GetDefaultObj();

	void Select_Button();
	void GetVerbClass(TSubclassOf<class UQtnVerb>* QtnVerb, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FQtnItemStatSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TSubclassOf<class UQtnVerb> CallFunc_SyncLoadVerbClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue);
	void CheckIfEquipped();
	void BndEvt__CardArmory_Widget_UI_CardIcon_Widget_K2Node_ComponentBoundEvent_2_CardButtonPressed__DelegateSignature(bool Pressed_);
	void BndEvt__CardArmory_Widget_UI_CardIcon_Widget_K2Node_ComponentBoundEvent_3_CardButtonHovered__DelegateSignature(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo);
	void PreConstruct(bool IsDesignTime);
	void StartTrainingHighlight();
	void PauseTrainingHighlight(bool Hovered_, int32 HoveredIndex, const struct FUI_Card_Struct& CardInfo);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnbindTrainingEvent();
	void RefreshUnlockStatus();
	void Construct();
	void ExecuteUbergraph_CardArmory_Widget(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_ComponentBoundEvent_Pressed_, bool Temp_bool_Variable_2, bool K2Node_ComponentBoundEvent_Hovered_, int32 K2Node_ComponentBoundEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_ComponentBoundEvent_CardInfo, bool K2Node_Event_IsDesignTime, TScriptInterface<class IItemUIInterfaces_C> K2Node_DynamicCast_AsItem_UIInterfaces, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable_4, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_CustomEvent_Hovered_, int32 K2Node_CustomEvent_HoveredIndex, const struct FUI_Card_Struct& K2Node_CustomEvent_CardInfo, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TSubclassOf<class UQtnVerb> CallFunc_GetPowerVerbClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnVerb* CallFunc_GetClassDefaultObject_ReturnValue, TScriptInterface<class IQtnVerbUI_Interface_C> K2Node_DynamicCast_AsQtn_Verb_UI_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetUnlockData_Locked, class FText CallFunc_GetUnlockData_LockText, bool CallFunc_Not_PreBool_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default_2);
	void OnHover__DelegateSignature(bool Hovered, class FText PowerName);
	void OnClicked__DelegateSignature();
};

}


