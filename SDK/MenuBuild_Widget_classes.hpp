#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x5A8 - 0x298)
// WidgetBlueprintGeneratedClass MenuBuild_Widget.MenuBuild_Widget_C
class UMenuBuild_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimPerkHover;                                     // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimUpgradeHover;                                  // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BorderEnemy;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderPlayer;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             BullshitEnemy_0;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             BullshitEnemy_1;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             BullshitPlayer_0;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             HoveredCard_Enemy;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BullshitCard_Widget_C*             HoveredCard_Player;                                // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerksBookmark_Widget_C*               PerksBookmark_Widget;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_HoveredCard;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_HoveredEnemy;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreSelectedItemWidget_C*            StoreSelectedItemWidget;                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BuildBinder_Widget_C*              UI_BuildBinder_Widget;                             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AQtnBodyPawn*                          MyBody;                                            // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CreateCard;                                        // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class FString, class FText>             Affordances;                                       // 0x330(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGlobalNav_Widget_C*                   MyGlobalNav;                                       // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UUpgradeIcon_Widget_C*>         UpgradeIcons;                                      // 0x388(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUpgradeIcon_Widget_C*>         EnemyUpgradeIcons;                                 // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUpgradeIcon_Widget_C*>         AllUpgradeAndBullshitIcons;                        // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>> My_Choice_To_Cheat_Activation_Verb_Map;            // 0x3B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UButton*>                       TopNav;                                            // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        TopNavSelected;                                    // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UQtnUpgrade*>                   CurrentPlayerQtnUpgrades;                          // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSubclassOf<class UQtnUpgrade>>       EnemyUpgrades;                                     // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnRolledUpgradeData>         EnemyUpgradeValues;                                // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        Current_Enemy_BSList;                              // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUI_BullshitCard_Widget_C*>     BullshitEnemyCards;                                // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UQtn_CheatVerb_Archetype_C*            As_Qtn_Cheat_Verb_Archetype;                       // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hover_Current_Time;                                // 0x478(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PCardPosition_Default;                             // 0x47C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PCardAlignment_Default;                            // 0x484(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              PCardAnchors_Default;                              // 0x48C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector2D                             PCardPosition_Focused;                             // 0x49C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PCardAlignment_Focused;                            // 0x4A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              PCardAnchors_Focused;                              // 0x4AC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_3D81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_BullshitCard_Widget_C*>     AllSmallCards;                                     // 0x4C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        LastHoveredIndex_Upgrade;                          // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastHoveredIndex_Perk;                             // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LastHoveredIsPlayerCard_;                          // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ECardPosition_Default;                             // 0x4DC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ECardAlignment_Default;                            // 0x4E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              ECardAnchors_Default;                              // 0x4EC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector2D                             ECardPosition_Focused;                             // 0x4FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ECardAlignment_Focused;                            // 0x504(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              ECardAnchors_Focused;                              // 0x50C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_3D83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  RarityColorTable;                                  // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        Rulebook_Rules;                                    // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          FadeTooltipTimerHandle;                            // 0x540(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUnhovered;                                      // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FadeTooltipTimerHandle_0;                          // 0x550(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UClass*>           CheatVerbToActiveBullshitArchetype;                // 0x558(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UMenuBuild_Widget_C* GetDefaultObj();

	void RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP);
	void SequenceEvent__ENTRYPOINTMenuBuild_Widget_0();
	void RefreshCardTooltipDataUI(class UUI_BullshitCard_Widget_C* TooltipToRefresh, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item);
	void ResetPlayerCardTooltipPosition(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue);
	void ResetEnemyCardTooltipPosition(class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue);
	void GetBullshitClassFromCheatVerb(class UClass* EnemyCheatActivationVerbBase, class UClass** QtnBullshitBPBaseArchetype, bool* Found, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Create_Activation_Verb_to_Bullshit_Archetype_Map(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess, TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>& CallFunc_Map_Keys_Keys, TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>& CallFunc_Map_Values_Values, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Array_Get_Item_1, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* CallFunc_SyncLoadClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsEnemy_Cheat_Activation_Verb_Base, bool K2Node_ClassDynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CONTENTLOCK_CreateCard(class UUI_BullshitCard_Widget_C* CardWidgetToRefresh, const struct FQtnUpgradeSettings& UpgradeSettings, const struct FQtnRolledUpgradeData& UpgradeRolledData, class UClass* EnemyBullshitBPBase, class UQtn_CheatVerb_Archetype_C* PlayerBullshitVerbArchetype, class UQtnUpgradeSlot* NewLocalVar_0, class UQtnUpgrade* LOCAL_UpgradeObject);
	class UWidget* Gamepad_Navigation_Left(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	class UWidget* Gamepad_Navigation_Binder(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Get_Focus_Target_FocusTarget, class UWidget* CallFunc_Get_Focus_Target_FocusTarget_1);
	void ScanForRulebookUpgrades(TArray<class UClass*>& AppliedRules, const TArray<class UClass*>& LOCAL_RulebookUpgrades);
	void Show_or_Hide_Level_UI(class UUI_BullshitCardSmall_Widget_C* TargetCard, bool Show_, class UUI_BullshitCardSmall_Widget_C* LOCAL_TargetCardSmall);
	void BETA_Hide_or_Show_Card_(class UUI_BullshitCard_Widget_C* CardWidget, bool ShowCard, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2);
	void BETA_CreateEnemyBullshit(class UClass* EnemyCheatActivationVerbBase, int32 TypeIndex, class UUI_BullshitCardSmall_Widget_C* Target, class UUI_BullshitCardSmall_Widget_C* LOCAL_TargetCard, int32 LOCAL_TypeIndex, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TSoftClassPtr<class UEnemyCheatActivationVerbBase_C> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, TArray<TSoftClassPtr<class UEnemyCheatActivationVerbBase_C>>& CallFunc_Map_Values_Values, TArray<TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C>>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue, TSoftClassPtr<class UQtnBullshitBPBaseArchetype_C> CallFunc_Array_Get_Item, class UClass* CallFunc_SyncLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Bullshit_BPBase_Archetype, bool K2Node_ClassDynamicCast_bSuccess);
	void BETA_CreateUpgrade(class UUI_BullshitCardSmall_Widget_C* CardWidget, class UQtnUpgrade* UpgradeObject, const struct FQtnRolledUpgradeData& EnemyUpgradeRolledData, class UQtnUpgrade* LOCAL_UpgradeObject, class UUpgradeIcon_Widget_C* LOCAL_NewIconWidget, int32 LOCAL_Index, bool LOCAL_IsEnemyBullshit, bool LOCAL_IsEnemyUpgrade, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue);
	void IndexToUniformGridPlacement(int32 Index, int32* Row, int32* Column, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue);
	void TopNavUpdateContents(int32 NewParam, int32 NewLocalVar_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void AppendUpgradeArrays(TArray<class UQtnUpgradeSlot*>& TargetArray, TArray<class UQtnUpgradeSlot*>& SourceArray, TArray<class UQtnUpgradeSlot*>* AppendedArray, const TArray<class UQtnUpgradeSlot*>& NewLocalVar_2, class UQtnUpgradeSlot* CallFunc_Array_Get_Item, bool CallFunc_IsSlotFilled_ReturnValue);
	TArray<class UQtnUpgradeSlot*> GetAllUpgrades(const TArray<class UQtnUpgradeSlot*>& LOCAL_UpgradeSlots, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs_1, class UQtnVerb* CallFunc_Array_Get_Item_1, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_3, TArray<class UQtnUpgradeSlot*>& CallFunc_GetUpgradeSlots_ReturnValue_4, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_1, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_2, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_3, TArray<class UQtnUpgradeSlot*>& CallFunc_AppendUpgradeArrays_AppendedArray_4);
	void UpdateAffordance(bool IsUsingMouseKeyboard, bool LOCAL_MouseKeyboard, bool CallFunc_IsValid_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput_1);
	void UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass);
	void Upgrade_Hover_Repeater();
	void Upgrade_Hovered(bool IsHovered_, int32 HoveredIndex, const struct FUI_Card_Struct& MyCardInfo);
	void PerkButtonHovered(bool IsHovered_, int32 HoveredIndex, class UPerkBookmarkButton_Widget_C* HoveredButton, int32 StackCount);
	void Reset_Hover();
	void ExitMenu();
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetInitialized();
	void InputChange(bool IsUsingMouseAndKeyboard);
	void RequestAffordance();
	void PreConstruct(bool IsDesignTime);
	void SetPerkBindingTooltip(TArray<class UPerkBookmarkButton_Widget_C*>& PerkBookmarkButtons);
	void OnQtnWidgetHidden();
	void RebuildEnemyUpgradesEvent();
	void OnCutsceneEndedEvent(bool IsCutsceneActive, bool DoWorldCleanup);
	void OnQtnWidgetShown();
	void ExecuteUbergraph_MenuBuild_Widget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable_2, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_5, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, bool K2Node_CustomEvent_IsHovered__1, int32 K2Node_CustomEvent_HoveredIndex_1, const struct FUI_Card_Struct& K2Node_CustomEvent_MyCardInfo, bool Temp_bool_Variable_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_4, bool CallFunc_IsAnimationPlayingForward_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FAnchors& K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UWidget* K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue, class UWidget* K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_1, const struct FVector2D& K2Node_Select_Default_3, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_CustomEvent_IsHovered_, int32 K2Node_CustomEvent_HoveredIndex, class UPerkBookmarkButton_Widget_C* K2Node_CustomEvent_HoveredButton, int32 K2Node_CustomEvent_StackCount, bool Temp_bool_Variable_5, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FQtnPerkSettings& CallFunc_GetPerkSettings_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UQtnScreen* CallFunc_GetScreenThatOwnsThisWidget_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, bool K2Node_SwitchEnum_CmpSuccess, class UQtnScreen* K2Node_Event_previousScreen, bool Temp_bool_Variable_6, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, const struct FVector2D& K2Node_Select_Default_4, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_7, TArray<class UButton*>& K2Node_MakeArray_Array, const struct FAnchors& K2Node_Select_Default_5, TArray<class UQtnUpgrade*>& CallFunc_GetCurrentUpgradesArray_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, bool CallFunc_Greater_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UClass* CallFunc_GetBullshitClassFromCheatVerb_QtnBullshitBPBaseArchetype, bool CallFunc_GetBullshitClassFromCheatVerb_Found, int32 CallFunc_Array_Length_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_2, TArray<class UQtnVerb*>& CallFunc_GetVerbs_verbs, class UQtnVerb* CallFunc_Array_Get_Item_2, enum class ESlateVisibility K2Node_Select_Default_6, class UQtn_CheatVerb_Archetype_C* K2Node_DynamicCast_AsQtn_Cheat_Verb_Archetype, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Greater_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_7, bool Temp_bool_Variable_8, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_3, class UWidget* K2Node_Select_Default_8, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_GetCanvasPanelSlot_ReturnValue_5, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_4, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool Temp_bool_Variable_9, bool CallFunc_Array_IsValidIndex_ReturnValue_3, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_10, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_11, class UQtnUpgrade* CallFunc_Array_Get_Item_5, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue, TArray<class UPerkBookmarkButton_Widget_C*>& K2Node_CustomEvent_PerkBookmarkButtons, const struct FQtnRolledUpgradeData& CallFunc_GetRolledUpgradeData_ReturnValue, class UPerkBookmarkButton_Widget_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, class UQtnCombatSettings* CallFunc_GetCombatSettings_ReturnValue, class UGlobalCombatSettings_C* K2Node_DynamicCast_AsGlobal_Combat_Settings, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable_12, class UUI_BullshitCard_Widget_C* K2Node_Select_Default_12, TArray<class UUI_BullshitCard_Widget_C*>& K2Node_MakeArray_Array_2, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_13, const struct FVector2D& K2Node_Select_Default_13, float CallFunc_BreakVector2D_X_6, float CallFunc_BreakVector2D_Y_6, bool CallFunc_IsVisible_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, const struct FQtnRolledUpgradeData& CallFunc_Array_Get_Item_9, class UUI_BullshitCard_Widget_C* CallFunc_Array_Get_Item_10, int32 CallFunc_Array_Length_ReturnValue_7, bool Temp_bool_Variable_14, bool CallFunc_Less_IntInt_ReturnValue_5, class UBorder* K2Node_Select_Default_14, class UClass* CallFunc_Array_Get_Item_11, bool CallFunc_Array_IsValidIndex_ReturnValue_4, class UQtnUpgrade* CallFunc_GetClassDefaultObject_ReturnValue, const struct FQtnUpgradeSettings& CallFunc_GetUpgradeSettings_ReturnValue_1, bool Temp_bool_Variable_15, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, const struct FVector2D& K2Node_Select_Default_15, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, float CallFunc_BreakVector2D_X_7, float CallFunc_BreakVector2D_Y_7, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, TArray<struct FQtnRolledUpgradeData>& CallFunc_GetEnemyUpgradeLevels_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_CustomEvent_isCutsceneActive, bool K2Node_CustomEvent_doWorldCleanup, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, class AQtnBodyPawn* CallFunc_GetLocalPlayerInformation_occupiedBodyPawn, class AQtnPlayerPawn* CallFunc_GetLocalPlayerInformation_playerPawn, class AQtnPlayerController* CallFunc_GetLocalPlayerInformation_playerController, class AQtnPlayerUI* CallFunc_GetLocalPlayerInformation_playerUI, class AQtnPlayerState* CallFunc_GetLocalPlayerInformation_qtnPlayerState, bool CallFunc_GetLocalPlayerInformation_isHosting, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerInformation_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnTutorialStatus CallFunc_GetTutorialStateForThisPlayer_ClientFriendly___Out_Current_State, bool K2Node_SwitchEnum_CmpSuccess_2);
	void CreateCard__DelegateSignature();
};

}


