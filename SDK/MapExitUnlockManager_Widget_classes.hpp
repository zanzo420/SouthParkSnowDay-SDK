#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D4 - 0x260)
// WidgetBlueprintGeneratedClass MapExitUnlockManager_Widget.MapExitUnlockManager_Widget_C
class UMapExitUnlockManager_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Open;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUniformGridPanel*                     Grid_Unlocks;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          UnlockTimer;                                       // 0x278(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentUnlock;                                     // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuMapExit_Widget_C*                 MapMenuExitWidget;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          UnlockNameArray;                                   // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnUnlocksComponent*                  Unlocks_Component;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            AllUnlocksShown;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UBP_PopUnlock_Widget_C*>        UnlockWidgetArray;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         RewardsAnnounced;                                  // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        End_Timer;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cycle_Timer;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMapExitUnlockManager_Widget_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void CycleUnlocks(float CycleTimer, float EndTimer);
	void FinishUnlocks();
	void RemoveUnlockTimers();
	void SetupUnlocks(class UQtnUnlocksComponent* QtnUnlocksComponent);
	void Construct();
	void ShowNextUnlock();
	void ExecuteUbergraph_MapExitUnlockManager_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, TArray<class FName>& CallFunc_GetSessionUnlockedRowNames_ReturnValue, int32 Temp_int_Variable, float K2Node_CustomEvent_CycleTimer, float K2Node_CustomEvent_EndTimer, class UQtnUnlocksComponent* K2Node_CustomEvent_QtnUnlocksComponent, bool CallFunc_K2_TimerExistsHandle_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FQtnUnlockDatabaseRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetUnlockInfo_displayName, class FText CallFunc_GetUnlockInfo_description, bool CallFunc_GetUnlockInfo_isSecret, class UTexture2D* CallFunc_GetUnlockInfo_icon, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockKey, const struct FGameplayTag& CallFunc_GetUnlockInfo_unlockCategory, const struct FQtnUnlockRewards& CallFunc_GetUnlockInfo_unlockRewards, class FText CallFunc_GetUnlockInfo_rewardName, TSubclassOf<class UQtnDLCInfo> CallFunc_GetUnlockInfo_requiredDLC, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBP_PopUnlock_Widget_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_PopUnlock_Widget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	void AllUnlocksShown__DelegateSignature();
};

}


