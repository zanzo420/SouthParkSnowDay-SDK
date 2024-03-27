#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x184 (0x41C - 0x298)
// WidgetBlueprintGeneratedClass MenuCharacter_Widget.MenuCharacter_Widget_C
class UMenuCharacter_Widget_C : public UQtnUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OpenMenu;                                          // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_CapsuleBtn_Widget_C*               Button_Finish;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Safe;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCosmeticDrawer_Widget_C*              CosmeticDrawer_Widget;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperDoll_Widget_C*                   EmotePaperDoll_Widget;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQtnInputTextBlock*                    InputText_RotatePaperDoll;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Banner;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_EmoteWheel;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperDoll_Widget_C*                   PaperDoll_Widget;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialSelection_Widget_C*             RadialSelection_Widget;                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_220;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollAnnounce_Widget_C*              Scroll_CharacterCreation;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentSideNav;                                    // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnPlayer_C*                     MyBody;                                            // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              Render_Cam;                                        // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedEmoteWheelSlot;                            // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FText>             Affordances;                                       // 0x320(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGlobalNav_Widget_C*                   MyGlobalNav;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        PrevSideNav;                                       // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, enum class EQtnAppearanceSlot>   AppearanceCategories;                              // 0x380(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnRadialButtonConfiguration> CosmeticCategories;                                // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class URadialEmoteButton_C*>          RadialButtons;                                     // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector2D                             MousePosition;                                     // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Highlighted_Index;                                 // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anim_Current_Time;                                 // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFTUX_CharacterCreation;                          // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CosmeticsMasterDataTable;                          // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCosmeticItemSlot_C*                   HoveredCosmeticWidget;                             // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DEBUG_PressedItemIndex;                            // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMenuCharacter_Widget_C* GetDefaultObj();

	void RequestCurrencyVisibilities(bool* ShowTP, bool* ShowDM, bool* ShowPP);
	void OnListEntryPressed(bool IsPressed, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem, bool* AllowHold, class UCosmeticItemSlot_C* LOCAL_SelectedCosmeticItemSlot, enum class EQtnAppearanceSlot LOCAL_AppearanceSlot, const class FString& LOCAL_PressedItemID, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Unequip_Cosmetic_SlotString, bool CallFunc_IsEmpty_ReturnValue, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UQtnGameInstance* CallFunc_GetQtnGameInstance_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UQtnDLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_, enum class EQtnAppearanceSlot CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot, bool CallFunc_HasPurchasedDLC_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
	void SequenceEvent__ENTRYPOINTMenuCharacter_Widget_0();
	void Is_Focused_Emote_Equipped_in_Focused_Wheel_Slot_(class UCosmeticItemSlot_C* FocusedEmote, bool* EquippedInFocusedSlot, bool CallFunc_IsValid_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class URadialEmoteButton_C* CallFunc_Array_Get_Item, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	class UWidget* FTUX_ForceFinishButton(enum class EUINavigation Navigation, bool CallFunc_IsVisible_ReturnValue);
	void Toggle_FTUX_UI(bool WantShown);
	class UWidget* Custom_Gamepad_Navigation(enum class EUINavigation Navigation, class UWidget* NavigationTarget, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Get_Last_Button_Entry_Button, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
	void RefreshDisplayedTitlesEquipped(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCosmeticItemSlot_C* K2Node_DynamicCast_AsCosmetic_Item_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsCosmeticCurrentlyEquipped_IsEquipped_, enum class EQtnAppearanceSlot CallFunc_IsCosmeticCurrentlyEquipped_TargetSlot);
	void CheckForHover(const TArray<class UUserWidget*>& LOCAL_DisplayedEntries, int32 LOCAL_LastIndex, bool LOCAL_HoveredFound, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue);
	void IsCosmeticCurrentlyEquipped(const class FString& ItemId, bool* IsEquipped_, enum class EQtnAppearanceSlot* TargetSlot, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsValid_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, TArray<class FString>& CallFunc_GetEquippedCosmetics_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool IsCurrentCategoryEmotes_(enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Toggle_Emote_UI(bool WantEmotes);
	void SetupSliders(int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void CheckTutorialPresence(bool* Menu_unlocked, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_IsPlayingInEditor_ReturnValue);
	void ClearLoopingEmotes(int32 NewSideNav, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Unequip_Cosmetic(enum class EQtnAppearanceSlot AppearanceSlot, class FString* SlotString, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool K2Node_SwitchEnum_CmpSuccess, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_1, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_1, class UClass* CallFunc_GetCosmeticItem_requiredDLC_1, bool CallFunc_GetCosmeticItem_DLCExistsInStore_1, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_2, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_2, class UClass* CallFunc_GetCosmeticItem_requiredDLC_2, bool CallFunc_GetCosmeticItem_DLCExistsInStore_2, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_3, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_3, class UClass* CallFunc_GetCosmeticItem_requiredDLC_3, bool CallFunc_GetCosmeticItem_DLCExistsInStore_3, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_4, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_4, class UClass* CallFunc_GetCosmeticItem_requiredDLC_4, bool CallFunc_GetCosmeticItem_DLCExistsInStore_4, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh_5, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb_5, class UClass* CallFunc_GetCosmeticItem_requiredDLC_5, bool CallFunc_GetCosmeticItem_DLCExistsInStore_5);
	void Setup_Appearance_Categories(int32 LOCAL_Index, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateAffordance(bool IsUsingMouseKB1, bool LOCAL_IsUsingMouseKB, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, TScriptInterface<class IGlobalNavAffordance_Interface_C> CallFunc_UpdateGlobalNavAffordances_self_CastInput, class FText K2Node_Select_Default_2, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SelectEmoteSlot(int32 CurrentEmoteSlot, bool PlayAnim, class UQtnEmoteVerb_Archetype_C** EmoteVerbDefault, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HighlightEmoteSlot(int32 CurrentEmoteSlot, bool PlayAnim, class UQtnEmoteVerb_Archetype_C** EmoteVerbDefault, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void PopulateEmoteWheel(class UTexture2D* TargetTexture, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_LinearColor_White_ReturnValue, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TSubclassOf<class UQtnVerb>>& CallFunc_GetEquippedEmotes_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_SelectEmoteSlot_EmoteVerbDefault);
	void ResetCosmetics(const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, const class FString& CallFunc_MakeLiteralString_ReturnValue_3, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue, int32 CallFunc_LocalFindCosmeticIndex_ReturnValue_1);
	void UnequipTargetSlot(enum class EQtnAppearanceSlot TargetSlot, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess);
	void UpdateShownActors(const TArray<class AActor*>& ActorsToShow, int32 CallFunc_Array_Add_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors);
	void SetupCameraTarget();
	void EquipEmote(const class FString& EmoteItemID_ToFind, const class FString& LOCAL_PressedItemID, int32 LOCAL_EmoteVaultIndex, class UQtnCharacterBodyMesh* LOCAL_TargetEquipment, const TArray<class UAnimMontage*>& EquipAnimsHat, class UAnimMontage* ChosenMontage, const TArray<class UAnimMontage*>& EquipAnimsCape, const TArray<class UAnimMontage*>& EquipAnimsBody, const TArray<class UAnimMontage*>& EquipAnims, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_1, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_2, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class URadialEmoteButton_C* CallFunc_Array_Get_Item, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, TArray<class FString>& CallFunc_GetVaultEmotesData_ReturnValue, TArray<class FString>& CallFunc_GetVaultEmotesData_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_2, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess);
	void Equip_Cosmetic_Anim(class UQtnCharacterBodyMesh* TargetEquipment, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsHat, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsCape, const TArray<class UAnimMontage*>& LOCAL_EquipAnimsBody, class UAnimMontage* LOCAL_ChosenMontage, class UQtnCharacterBodyMesh* LOCAL_TargetEquipment, TArray<class UAnimMontage*>& K2Node_MakeArray_Array, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_1, TArray<class UAnimMontage*>& K2Node_MakeArray_Array_2, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UAnimMontage* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, class UAnimMontage* CallFunc_Array_Random_OutItem_2, int32 CallFunc_Array_Random_OutIndex_2, class UAnimMontage* CallFunc_Array_Random_OutItem_3, int32 CallFunc_Array_Random_OutIndex_3);
	void OnSelectCosmeticObject(int32 Index, const class FString& ItemId, const class FString& LOCAL_ItemName, int32 LOCAL_VaultIndexforItem, enum class EQtnAppearanceSlot LOCAL_CurrentAppearanceSlot, class UQtnCharacterBodyMesh* LOCAL_EquippedCosmetic, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, bool CallFunc_IsValid_ReturnValue, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UQtnLocalOptionsSaveData* CallFunc_GetSaveLoadDataBP_localOptionsSaveData, class UQtnCloudOptionsSaveData* CallFunc_GetSaveLoadDataBP_cloudOptionsSaveData, class UQtnProgressSaveData* CallFunc_GetSaveLoadDataBP_progressSaveData, enum class EQtnOutputValidityEnum CallFunc_GetSaveLoadDataBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class UQtnBodyDataBag* CallFunc_GetBodyDataBag_ReturnValue, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, class UBodyDataBag_C* K2Node_DynamicCast_AsBody_Data_Bag, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue);
	void GetCosmeticItem(const class FString& ItemId, bool IsEmote, class UQtnCharacterBodyMesh** OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C>* OutEmoteVerb, class UClass** RequiredDLC, bool* DLCExistsInStore, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Emote_Verb_Archetype, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh, bool K2Node_ClassDynamicCast_bSuccess_1, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_1, bool K2Node_ClassDynamicCast_bSuccess_2, class UClass* K2Node_ClassDynamicCast_AsQtn_Character_Body_Mesh_2, bool K2Node_ClassDynamicCast_bSuccess_3, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnCharacterBodyMesh* CallFunc_GetClassDefaultObject_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1);
	bool HasCosmeticsInVault(class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, TArray<class FString>& CallFunc_GetVaultCosmeticsData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleSideNavUI(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USideNav_Widget_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class USideNav_Widget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass);
	void AddMenuRepeater();
	void AnimSeq_ToggleMenu(bool WantShown);
	void Event_CloseMenu();
	void OnQtnWidgetResumed(class UQtnScreen* PreviousScreen);
	void OnQtnWidgetInitialized();
	void OnQtnWidgetStarted();
	void OnUIScreenActionPressed(enum class EQtnUIScreenActionEnum ScreenAction);
	void OnQtnWidgetTicked(float DeltaSeconds);
	void OnQtnWidgetPaused();
	void SlotButtonSelected(int32 SelectedIndex);
	void RequestAffordance();
	void OnUIScroll(float ScrollDelta, bool FromStick);
	void ShowHoveredInfo(const class FString& ID, const class FString& ItemClass);
	void OnQtnWidgetOccupied(class AQtnBodyPawn* OccupiedBodyPawn, bool FirstTime);
	void OnUIBodyActionPressed(enum class EQtnUIBodyActionEnum BodyAction);
	void OnUIBodyActionReleased(enum class EQtnUIBodyActionEnum BodyAction);
	void Construct();
	void BndEvt__MenuCharacter_Widget_Button_Finish_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
	void InputChanged(bool IsUsingMouseAndKeyboard);
	void SlotButtonHovered(int32 HoveredIndex);
	void OnListEntryHovered(bool IsHovered, class UCosmeticItemSlot_C* CosmeticItemSlot, const struct FFQtnStoreItem& QtnStoreItem);
	void OnSideNavBarButtonPressed(int32 Index);
	void ItemUnhovered();
	void OnInputUsageChange(bool IsUsingMouseAndKeyboard);
	void OnQtnWidgetHidden();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Rotate_Paper_Doll_UIAction_Pressed(enum class EQtnUIScreenActionEnum Screen_Action);
	void Rotate_Paper_Doll_UIAction_Released(enum class EQtnUIScreenActionEnum Screen_Action);
	void OnUIScreenActionReleased(enum class EQtnUIScreenActionEnum ScreenAction);
	void RefreshHairColor(float HairColor);
	void RefreshSkinTone(float SkinTone);
	void RefreshHairBrightness(float HairBrightness);
	void ExecuteUbergraph_MenuCharacter_Widget(int32 EntryPoint, TMap<class FString, class FText> K2Node_Event_Affordances, class UClass* K2Node_Event_myClass, bool K2Node_CustomEvent_WantShown, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Ease_ReturnValue, class UQtnScreen* K2Node_Event_previousScreen, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction_1, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, int32 K2Node_CustomEvent_SelectedIndex, class UQtnEmoteVerb_Archetype_C* CallFunc_SelectEmoteSlot_EmoteVerbDefault, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, float K2Node_Event_scrollDelta, bool K2Node_Event_fromStick, class AQtnPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_ID, const class FString& K2Node_CustomEvent_ItemClass, bool CallFunc_IsEmpty_ReturnValue, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, bool K2Node_Event_firstTime, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnUIBodyActionEnum K2Node_Event_bodyAction, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_1, bool CallFunc_CheckTutorialPresence_menu_unlocked, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_2, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_2, bool K2Node_CustomEvent_isUsingMouseAndKeyboard, class UQtnScreen* CallFunc_GetOwningScreen_ReturnValue_1, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UGlobalNav_Widget_C* K2Node_DynamicCast_AsGlobal_Nav_Widget, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EQtnAppearanceSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_1, int32 K2Node_CustomEvent_HoveredIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, class UQtnEmoteVerb_Archetype_C* CallFunc_HighlightEmoteSlot_EmoteVerbDefault, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_2, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOccupiedBodyPawn_ReturnValue_1, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, bool K2Node_Event_IsHovered, class UCosmeticItemSlot_C* K2Node_Event_CosmeticItemSlot, const struct FFQtnStoreItem& K2Node_Event_QtnStoreItem, int32 K2Node_CustomEvent_index, class UQtnCharacterBodyMesh* CallFunc_GetCosmeticItem_OutBodyMesh, TSubclassOf<class UQtnEmoteVerb_Archetype_C> CallFunc_GetCosmeticItem_OutEmoteVerb, class UClass* CallFunc_GetCosmeticItem_requiredDLC, bool CallFunc_GetCosmeticItem_DLCExistsInStore, class UQtnEmoteVerb_Archetype_C* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnUserWidget* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_Event_isUsingMouseAndKeyboard, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_LessEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsVisible_ReturnValue_2, enum class EQtnUIScreenActionEnum K2Node_CustomEvent_Screen_Action_1, enum class EQtnUIScreenActionEnum K2Node_CustomEvent_Screen_Action, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_4, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_5, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_3, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_4, enum class EQtnUIScreenActionEnum K2Node_Event_screenAction, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float K2Node_CustomEvent_HairColor, float K2Node_CustomEvent_skinTone, float K2Node_CustomEvent_HairBrightness, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_6, class AQtnPlayerUI* CallFunc_GetOwningPlayerUI_ReturnValue_4, class UUI_FTUX_TrainingMoment_Screen_C* CallFunc_GetScreen_ReturnValue, class UUI_FTUX_Archetype_Widget_C* CallFunc_GetUserWidget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsCurrentCategoryEmotes__ReturnValue_7, bool CallFunc_IsUsingMouseAndKeyboard_ReturnValue_5);
};

}


