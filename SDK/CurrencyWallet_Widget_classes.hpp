#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x358 - 0x260)
// WidgetBlueprintGeneratedClass CurrencyWallet_Widget.CurrencyWallet_Widget_C
class UCurrencyWallet_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URewardsCurrency_Widget_C*             CurrencyDM_Widget;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsCurrency_Widget_C*             CurrencyFC_Widget;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsCurrency_Widget_C*             CurrencyTP_Widget;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnBodyPawn*                          PlayerBodyPawn;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnCurrencyEntry                     Qtn_Currency_Entry;                                // 0x290(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         ShowTP;                                            // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URewardsCurrency_Widget_C*>     AllCurrencyArray;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*> CurrencyTagToWidget;                               // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                          PickupTimer;                                       // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class URewardsCurrency_Widget_C*, bool> CurrencyVisibility;                                // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UCurrencyWallet_Widget_C* GetDefaultObj();

	void RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP);
	void CreateCurrencyTagToWidgetMap(TArray<class URewardsCurrency_Widget_C*>& CallFunc_Map_Values_Values, TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*> K2Node_MakeMap_Map);
	void RefreshVisibilities(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void InitAllCurrencies(TMap<struct FGameplayTag, class URewardsCurrency_Widget_C*> CurrencyTagWidgetMap, TMap<struct FGameplayTag, enum class EQtn_CurrencyTypes_Enum> LOCAL_KeysEnum, const TArray<class URewardsCurrency_Widget_C*>& LOCAL_ValuesWidgets, const TArray<struct FGameplayTag>& LOCAL_KeysCurrencyTags, TArray<class URewardsCurrency_Widget_C*>& CallFunc_Map_Values_Values, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item_1, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FQtnCurrencyEntry& K2Node_MakeStruct_QtnCurrencyEntry, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Ensure_Body_Pawn_Player(class AQtnPlayerController* LOCAL_PlayerController, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Finished_5634731E40D3212DCF518E8CD70D0F49();
	void Construct();
	void RefreshAllCurrencies();
	void InitWallet(bool ShowTP, bool ShowDM, bool ShowFC);
	void CurrencyPickupAndFade(const struct FGameplayTag& CurrencyPickedUp);
	void RemoveWallet();
	void UpdateCurrency(const struct FGameplayTag& CurrencyTag, int32 OldQuantity);
	void ExecuteUbergraph_CurrencyWallet_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_ShowTP, bool K2Node_CustomEvent_ShowDM, bool K2Node_CustomEvent_ShowFC, const struct FGameplayTag& K2Node_CustomEvent_CurrencyPickedUp, class URewardsCurrency_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_IsGameplayTagValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URewardsCurrency_Widget_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, TMap<class URewardsCurrency_Widget_C*, bool> K2Node_MakeMap_Map, enum class EQtnOutputYesNoEnum CallFunc_DoesThisMapSpawnBodiesBP_outputPin, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_CurrencyTag, int32 K2Node_CustomEvent_OldQuantity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnScreen* CallFunc_GetActiveScreen_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


