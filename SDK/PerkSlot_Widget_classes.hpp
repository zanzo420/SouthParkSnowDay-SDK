#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x3D0 - 0x260)
// WidgetBlueprintGeneratedClass PerkSlot_Widget.PerkSlot_Widget_C
class UPerkSlot_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Training_2;                                        // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Training_1;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ClickAnim;                                         // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Perk;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Perk;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ID;                                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Flare;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Perk;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Perk;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenu_DarkMatterPerks_C*               OwningMenu;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                MyPerk;                                            // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPerkSlot_Widget_C*>            ConnectedPerks;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  PerkName;                                          // 0x2D8(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class FText                                  PerkDescription;                                   // 0x2F0(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	int32                                        Index;                                             // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Size;                                              // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CostPerk;                                          // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Equipped;                                          // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Connected;                                         // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            UpdateLineWithEquippedState;                       // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  MyPerkID;                                          // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          ConnectedPerkIDs;                                  // 0x330(0x10)(Edit, BlueprintVisible)
	bool                                         ConnectedToSource;                                 // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LockDescription;                                   // 0x348(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                         Unlocked;                                          // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          PerkColor_Locked;                                  // 0x364(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Perk_Icon;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              HoverPlayMode;                                     // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoverCurrentTime;                                  // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              ClickPlayMode;                                     // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClickCurrentTime;                                  // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPerkLine_Widget_C*>            MyLines;                                           // 0x390(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	enum class EPerkWidgetSimulationState        SimulationState;                                   // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnIslandsUnequippedEvent;                          // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UPerkSlot_Widget_C*>            PerksDisconnected;                                 // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          TimerHandle;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPerkSlot_Widget_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTPerkSlot_Widget_0();
	void Social_Hub_Training_Moment_Can_Click(bool* Allow_Click, bool CallFunc_IsValid_ReturnValue);
	void CheckPerkConnectionsForIslands(bool AsSimulation, TArray<class UPerkSlot_Widget_C*>* InvalidNodes, bool LOCAL_IsValidIsland, const TArray<class UPerkSlot_Widget_C*>& LOCAL_InvalidConnections, const TArray<class UPerkSlot_Widget_C*>& LOCAL_VisitedConnections);
	void RecurseFloodFill(class UPerkSlot_Widget_C* TargetPerk, TArray<class UPerkSlot_Widget_C*>& NodeIsland, bool IsSimulation);
	void CheckAffordNewPerk(bool* CanAfford, int32 CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund, int32 CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateFlare(bool IsHovered, bool IsEquipped, class UMaterialInstanceDynamic* LOCAL_FlareMat, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_3, float K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_4, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& K2Node_Select_Default_3, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FLinearColor& Temp_struct_Variable_5, float K2Node_Select_Default_4, bool Temp_bool_Variable_5, const struct FLinearColor& K2Node_Select_Default_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, bool Temp_bool_Variable_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_6);
	void UpdatePerkVisuals(TSoftObjectPtr<class UTexture2D> LOCAL_Icon, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_GetPerkUnlockData_unlocked, class FText CallFunc_GetPerkUnlockData_LockCondition, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue_1, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, TSubclassOf<class UQtnPerk> CallFunc_SyncLoadPerkClass_ReturnValue, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue_2, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Is_A_Connection_Equipped(bool* ValidConnection, int32 ValidParentCount, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UPerkSlot_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateLockedUI(bool* Unlocked, int32 ValidParentCount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_CostOrRefund, int32 CallFunc_Calculate_Perk_Cost_or_Refund_OldWalletAmount, int32 CallFunc_Calculate_Perk_Cost_or_Refund_NewWalletAmount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UQtnPerkArchetype_C* K2Node_DynamicCast_AsQtn_Perk_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPerkUnlockData_unlocked, class FText CallFunc_GetPerkUnlockData_LockCondition, bool CallFunc_Is_A_Connection_Equipped_ValidConnection, bool CallFunc_BooleanAND_ReturnValue);
	void SimplifyPerkOnZoom(bool ZoomedOut, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
	void UpdateSize(float NewSize, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Completed_D7FB99E04550A7A0BE4A398D9F7731DC(float Value);
	void Tick_D7FB99E04550A7A0BE4A398D9F7731DC(float Value);
	void Completed_D593A95747714446038F06AD635919F4(float Value);
	void Tick_D593A95747714446038F06AD635919F4(float Value);
	void BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ClickRepeater();
	void BndEvt__PerkSlot_Widget_Button_Perk_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void AnimSeq_EquipPerk(bool WantEquipped);
	void InitPerkSlot(class UMenu_DarkMatterPerks_C* OwningMenu);
	void PreConstruct(bool IsDesignTime);
	void EquipPerkUI(bool IsEquipped);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void StartTrainingHighlight_Equipping();
	void PauseTrainingHighlight();
	void ResumeTrainingHighlight();
	void UnbindTrainingEvents();
	void StartTrainingHighlight_Unequipping();
	void PauseTrainingHighlight2();
	void ResumeTrainingHighlight2();
	void UnbindTrainingEvents2();
	void ExecuteUbergraph_PerkSlot_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_CheckAffordNewPerk_CanAfford, float CallFunc_Subtract_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, bool CallFunc_MaxPerksReached__Maxed, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool CallFunc_Social_Hub_Training_Moment_Can_Click_Allow_Click, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, float K2Node_CustomEvent_Value_3, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Ease_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_CustomEvent_WantEquipped, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable, bool CallFunc_Equip_or_Unequip_Perk_Server_Equipping, float K2Node_CustomEvent_Value, bool CallFunc_CheckAffordNewPerk_CanAfford_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UMenu_DarkMatterPerks_C* K2Node_CustomEvent_OwningMenu, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool K2Node_CustomEvent_IsEquipped, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_CustomEvent_Value_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsHovered_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float Temp_float_Variable_1, float K2Node_CustomEvent_Value_2);
	void OnIslandsUnequippedEvent__DelegateSignature(TArray<class UPerkSlot_Widget_C*>& PerkWidgetsDisconnected);
	void UpdateLineWithEquippedState__DelegateSignature();
};

}


