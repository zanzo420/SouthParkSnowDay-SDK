#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A8 (0x3D0 - 0x128)
// BlueprintGeneratedClass BodyDataBag.BodyDataBag_C
class UBodyDataBag_C : public UQtnBodyDataBag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x128(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SkinTone;                                          // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1681[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnItemData                          MeleeWeapon;                                       // 0x138(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FQtnItemData                          RangedWeapon;                                      // 0x1A0(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FQtnItemData                          Power1;                                            // 0x208(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FQtnItemData                          Power2;                                            // 0x270(0x68)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	class FString                                CosmeticsBodySelection;                            // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class FString                                CosmeticsHatSelection;                             // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class FString                                CosmeticsHairSelection;                            // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class FString                                CosmeticsCapeSelection;                            // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class FString                                CosmeticsHeadSelection;                            // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	class FString                                CosmeticsHeadAccessorySelection;                   // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, HasGetValueTypeHash)
	TArray<class FString>                        AvailableCosmetics;                                // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<class FString>                        AvailableEmotes;                                   // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<class FString>                        EmoteSelections;                                   // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<class FName, int32>                     UnlockRecords;                                     // 0x368(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FVector                               PrivateHairSettings;                               // 0x3B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1691[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            CosmeticsMasterTable;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDataBag_C* GetDefaultObj();

	void GetHairSettings(struct FVector* HairSettings);
	void SetHairBrightness(float HairBrightness, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void SetHairHue(float HairHue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void Add_Available_Emote(const class FString& Emote, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Add_Available_Cosmetic(const class FString& Cosmetic, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Add_Available_Item(const class FString& ItemId, bool IsEmote);
	void Set_Body_Data_Bag_Emote_Selection(const class FString& EmoteName, int32 EmoteRadialSlot, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Set_Body_Data_Bag_Cosmetic_Selection(const class FString& CosmeticsName, enum class EQtnAppearanceSlot AppearanceSlot, bool K2Node_SwitchEnum_CmpSuccess);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void OnBodyDataBagOccupy(class AQtnBodyPawn* OccupiedBodyPawn);
	void PreSaveDataBP(class UQtnSaveData* SaveData, class AQtnBodyPawn* LocalOriginalBody);
	void ExecuteUbergraph_BodyDataBag(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_occupiedBodyPawn, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue, class UQtnCharacterAppearanceComponent* CallFunc_GetBodyAppearanceComponent_ReturnValue_1, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQtnSaveData* K2Node_Event_saveData, class AQtnBodyPawn* K2Node_Event_localOriginalBody, bool CallFunc_IsValid_ReturnValue_1, class UQtnUnlocksComponent* CallFunc_GetUnlocksComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TMap<class FName, int32> CallFunc_GetUnlockRecords_ClientOnly_ReturnValue, class UPerkDataBag_C* CallFunc_GetChildDataBag_ReturnValue, class UCurrencyDataBag_C* CallFunc_GetChildDataBag_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FQtnCosmeticCatalogueEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue);
};

}


