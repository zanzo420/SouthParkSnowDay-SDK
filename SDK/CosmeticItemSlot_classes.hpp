#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3DC (0x63C - 0x260)
// WidgetBlueprintGeneratedClass CosmeticItemSlot.CosmeticItemSlot_C
class UCosmeticItemSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Training;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverToPurchase;                                   // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Purchase;                                          // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Glint;                                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Button;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Price;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Item;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label_Name;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialEmoteButton_C*                  RadialEmoteButton;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RText_Price;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5374[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQtnUserWidget*                        OwningMenu;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Hovered;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5375[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyString;                                    // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        Price;                                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerCanAfford_;                                  // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsDiscounted_;                                     // 0x2E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5376[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PriceRM;                                           // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHold;                                            // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPressed;                                         // 0x2ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5377[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PercentFilled;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwned;                                           // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEquipped;                                        // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5378[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemId;                                            // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ItemClass;                                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DisplayDescription;                                // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFQtnStoreItem                        StoreItemData;                                     // 0x348(0x158)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         TrainingPulse;                                     // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5379[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCosmeticData_O_C*                     As_Cosmetic_Data;                                  // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Render_Target_Texture_2D;                          // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFQtnStoreItem                        Qtn_Store_Data;                                    // 0x4B8(0x158)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        HoverCurrentTime;                                  // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_537A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TimerHandle;                                       // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFQtnCurrencyCodeValuePair            PriceStruct;                                       // 0x620(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_537B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultItemScale;                                  // 0x638(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCosmeticItemSlot_C* GetDefaultObj();

	void OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold);
	void RefreshPrice(class UMenuStore_Widget_C* ManagingStoreMenu, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 CallFunc_GetPlayerCurrencyAmount_OutCurrencyAmount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Emote_GetVerbClass(TSubclassOf<class UQtnVerb>* EmoteClass, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Emote_Check_if_Equipped_in_Focused_Slot(class UClass* EquippedEmote, bool* EmoteFound, bool LOCAL_EmoteFound, class UClass* LOCAL_EmoteInSlot, TSubclassOf<class UQtnVerb> CallFunc_Emote_GetVerbClass_EmoteClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void CheckBodyIfEquipped(TSubclassOf<class UQtnVerb> CallFunc_Emote_GetVerbClass_EmoteClass, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<TSubclassOf<class UQtnVerb>>& CallFunc_GetEquippedEmotes_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOriginalBody_outputPin_1, class AQtnBodyPawn* CallFunc_GetLocalPlayerOriginalBody_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, TArray<class FString>& CallFunc_GetEquippedCosmetics_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_Contains_ReturnValue_1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetImageFromRender(class UTexture2D* Render, class UTexture2D* Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void ResetHoldUI();
	void Hide_Store_UI();
	void Refresh_Store_UI(const TArray<struct FFQtnCurrencyCodeValuePair>& LOCAL_NonzeroCurrencyStructs, const TArray<class FString>& LOCAL_NonzeroCurrencies, class UMenuStore_Widget_C* K2Node_DynamicCast_AsMenu_Store_Widget, bool K2Node_DynamicCast_bSuccess, TArray<struct FFQtnCurrencyCodeValuePair>& CallFunc_Get_All_Non_Zero_Currency_Codes_OutPriceCodes, const struct FFQtnCurrencyCodeValuePair& CallFunc_Array_Get_Item);
	void UpdateEquippedUI(bool IsEquipped, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void DEPRECATED_Initialize_Emote(class UQtnUserWidget* OwningMenu);
	void DEPRECATED_Initialize_Item_Slot(class UQtnUserWidget* OwningMenu);
	void GetButton(class UButton** Button);
	void Completed_BC5D3D48466EEA08363AEB8FC78E384A(float Value);
	void Tick_BC5D3D48466EEA08363AEB8FC78E384A(float Value);
	void Completed_D2FBDF984F1EB13BA019CEA0DBB0D913(float Value);
	void Tick_D2FBDF984F1EB13BA019CEA0DBB0D913(float Value);
	void OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void AnimSeq_Hover(bool IsHovered);
	void BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CosmeticItemSlot_Button_Item_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void TickHoldButton_Cosmetic(float DTime);
	void AnimGlint();
	void ForceRelease();
	void ForceUnhover();
	void StartTrainingHighlight();
	void PauseTrainingHighlight();
	void ResumeTrainingHighlight();
	void UnbindTrainingEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void UpdateThumbnail(class UTexture2D* Thumb);
	void OnInitialized();
	void ExecuteUbergraph_CosmeticItemSlot(int32 EntryPoint, float K2Node_CustomEvent_Value_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_Value_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsHovered, class UCosmeticItemSlot_C* K2Node_Event_CosmeticItemSlot, const struct FFQtnStoreItem& K2Node_Event_QtnStoreItem, bool K2Node_Event_bIsExpanded, bool K2Node_CustomEvent_IsHovered, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float Temp_float_Variable_1, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAsyncInterpolateValue* CallFunc_AsyncInterpolateValue_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_CustomEvent_DTime, float CallFunc_Add_FloatFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float K2Node_CustomEvent_Value_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UCosmeticData_O_C* K2Node_DynamicCast_AsCosmetic_Data_O, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnObjectListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_bIsSelected, class UTexture2D* K2Node_CustomEvent_Thumb, TScriptInterface<class IQtnObjectListEntry_BPI_C> K2Node_DynamicCast_AsQtn_Object_List_Entry_BPI_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_OnListEntryPressed_AllowHold, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
};

}


