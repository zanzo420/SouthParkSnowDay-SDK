#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x380 - 0x260)
// WidgetBlueprintGeneratedClass ArmoryItem_Widget.ArmoryItem_Widget_C
class UArmoryItem_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQtnItemData                          ItemData;                                          // 0x278(0x68)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Locked;                                            // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EQtn_EquipmentCategory            EquipmentCategory;                                 // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5664[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VaultIndex;                                        // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Art;                                               // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverCurrentTime;                                  // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5665[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            GearSelected;                                      // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            GearHovered;                                       // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         TrainingPulse;                                     // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Equipped;                                          // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5666[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ItemDescription;                                   // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RightMouseButtonDown;                              // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5668[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGearSecondaryAction;                             // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FGameplayTag>                  Variations;                                        // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UArmoryItem_Widget_C* GetDefaultObj();

	void RefreshVariation(const struct FGameplayTag& GameplayTag, const struct FQtnWeaponConfiguration& NewLocalVar_0, const struct FQtnItemData& CallFunc_ItemFromGameplayTag_Item, bool CallFunc_ItemFromGameplayTag_Found, int32 CallFunc_ItemFromGameplayTag_Array_Index, const struct FQtnWeaponConfiguration& CallFunc_Weapon_Config_from_Item_Value, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Item, bool K2Node_ClassDynamicCast_bSuccess, class AQtnItem* CallFunc_GetItemArchetype_ReturnValue, class UTexture2D* CallFunc_GetIconForUI_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void RefreshLockStatus(bool IsLocked, class FText LockCondition, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void RefreshEquipped(bool Equipped, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleHover(bool IsHovered);
	void Completed_E28516FD4AFAC575E4D9D4975861E4E9(float Value);
	void Tick_E28516FD4AFAC575E4D9D4975861E4E9(float Value);
	void Completed_9879197549FD339188AC978256895E1F(float Value);
	void Tick_9879197549FD339188AC978256895E1F(float Value);
	void AnimSeq_Hover(bool IsHovered);
	void SetIcon();
	void BndEvt__ArmoryItem_Widget_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ArmoryItem_Widget_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ArmoryItem_Widget_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void InitGearItem(const struct FQtnItemData& ItemData, enum class EQtn_EquipmentCategory Category, class UTexture2D* Icon, int32 VaultIndex, class FText ItemDescription);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartTrainingHighlight();
	void UnbindTrainingEvent();
	void PauseTrainingHighlight(class UArmoryItem_Widget_C* FocusedGear, bool IsHovered);
	void ReInitGearItem(const struct FQtnItemData& ItemData, class UTexture2D* Icon, int32 VaultIndex, class FText ItemDescription);
	void ExecuteUbergraph_ArmoryItem_Widget(int32 EntryPoint, float K2Node_CustomEvent_Value_2, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_1, enum class EQtn_EquipmentCategory Temp_byte_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_CustomEvent_IsHovered_1, bool Temp_bool_IsClosed_Variable_1, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Ease_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FQtnItemData& K2Node_CustomEvent_ItemData_1, enum class EQtn_EquipmentCategory K2Node_CustomEvent_Category, class UTexture2D* K2Node_CustomEvent_Icon_1, int32 K2Node_CustomEvent_VaultIndex_1, class FText K2Node_CustomEvent_ItemDescription_1, bool CallFunc_Not_PreBool_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class FText CallFunc_GenerateNameTextFromItemData_ReturnValue, float K2Node_CustomEvent_Value_3, float K2Node_Select_Default, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UArmoryItem_Widget_C* K2Node_CustomEvent_FocusedGear, bool K2Node_CustomEvent_IsHovered, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FQtnItemData& K2Node_CustomEvent_ItemData, class UTexture2D* K2Node_CustomEvent_Icon, int32 K2Node_CustomEvent_VaultIndex, class FText K2Node_CustomEvent_ItemDescription);
	void OnGearSecondaryAction__DelegateSignature(class UArmoryItem_Widget_C* SelectedGear);
	void GearHovered__DelegateSignature(class UArmoryItem_Widget_C* FocusedGear, bool IsHovered);
	void GearSelected__DelegateSignature(class UArmoryItem_Widget_C* SelectedGear, bool WasAlreadyEquipped);
};

}


