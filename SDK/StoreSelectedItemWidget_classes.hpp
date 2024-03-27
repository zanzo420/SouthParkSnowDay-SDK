#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass StoreSelectedItemWidget.StoreSelectedItemWidget_C
class UStoreSelectedItemWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInOut;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_BG;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Tooltip;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Name;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuStore_Widget_C*                   NewOwnerStore;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AQtnBodyPawn*                          My_Body;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFadingIn;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4424[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentFadeTime;                                   // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FadeTimer;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FadeOutTimer;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStoreSelectedItemWidget_C* GetDefaultObj();

	void DEPRECATED_Update_Affordance(bool Equipped_, bool Owned_, bool IsUsingMKB, bool CanAfford, bool LOCAL_IsUsingMKB);
	void Refresh_Hovered_Item_Build(const struct FQtnPerkSettings& PerkSettings, class AQtnBodyPawn* My_Body, class UQtnPerk* LOCAL_PerkCDO, class UClass* LOCAL_PerkClass, class UPerkSlot_Widget_C* LOCAL_PerkSlot, bool LOCAL_IsUsingMKB, bool LOCAL_CanAfford, int32 LOCAL_CostOrRefund, TSubclassOf<class UQtnPerk> CallFunc_SyncLoadPerkClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPerkInstanceCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetFormattedValueAtIndexAtInstanceCount_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UQtnPerk* CallFunc_GetClassDefaultObject_ReturnValue);
	void DEPRECATED_UpdateHoveredItem_Cosmetics(const struct FFQtnStoreItem& ItemData, bool CanUserAfford, bool WasDealFound, const class FString& LOCAL_ButtonPriceString);
	void SetupOwningWidget(class UWidget* OwningWidget, class UMenuStore_Widget_C* K2Node_DynamicCast_AsMenu_Store_Widget, bool K2Node_DynamicCast_bSuccess);
	void DoesPlayerOwnItem(const class FString& ItemId, bool* IsOwned, bool CallFunc_IsValid_ReturnValue);
	void Format_Currency_String(int32 CatalogPriceToFormat, int32 StorePriceToFormat, const class FString& CurrencyCode, class FString* OutFormattedString, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12);
	void BindToWidget(class UWidget* OwningWidget);
	void TryToPurchaseItem();
	void DEPRECATED_UpdatePurchaseTick(float PercentFilled);
	void HandleFadeIn();
	void HandleFadeOut();
	void Construct();
	void ExecuteUbergraph_StoreSelectedItemWidget(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UWidget* K2Node_CustomEvent_owningWidget, float K2Node_CustomEvent_PercentFilled, bool Temp_bool_IsClosed_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
};

}


