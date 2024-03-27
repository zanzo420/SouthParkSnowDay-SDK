#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x158 - 0x0)
// UserDefinedStruct FQtnStoreItem.FQtnStoreItem
struct FFQtnStoreItem
{
public:
	class FString                                ItemId_2_3B123A4E4FE1981AFB99C1A2D11AA643;         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Class_30_EB3DB1B942BF0D8EFE3BCDB0930834EB;         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  DisplayName_Text_38_E433BB094AD7CEDBB4C8E094CA3E7894; // 0x20(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_Text_40_98F1054E4DCB3BF3A52855BF704AA4E1; // 0x38(0x18)(Edit, BlueprintVisible)
	TMap<class FString, int32>                   CurrencyPrices_12_413AE1AF408387AED55DE59624E0AC5F; // 0x50(0x50)(Edit, BlueprintVisible)
	TMap<class FString, int32>                   CatalogPrices_18_F7F304EE4C04985E62807483FB647ED4; // 0xA0(0x50)(Edit, BlueprintVisible)
	TArray<class FString>                        Tags_25_72DF4AEF42AF98ABED4967959E0CBEA5;          // 0xF0(0x10)(Edit, BlueprintVisible)
	bool                                         OwnedAlready_27_0814872046913B636FB3E29822554839;  // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5317[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, int32>                   BundledVirtualCurrencies_35_543742A8477BABAAD66CB1B020AAFB67; // 0x108(0x50)(Edit, BlueprintVisible)
};

}


