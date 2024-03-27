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

// 0x340 (0x340 - 0x0)
// UserDefinedStruct UI_Card_Struct.UI_Card_Struct
struct FUI_Card_Struct
{
public:
	class FText                                  Name_4_50AB487E4C1E0E2A0C29A1A6A62B9B89;           // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  Description_10_9F386E9B4D1DB03AE5439B9B6BA6AE58;   // 0x18(0x18)(Edit, BlueprintVisible)
	int32                                        Level_19_329D016C42DB2AE996D550B187F6640D;         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CardArt_7_C19AA65B4369F2AD6BE3E28C57797789;        // 0x38(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CategoryIcon_42_07847A784D8C5EB4EB0FA38701917720;  // 0x60(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FLinearColor                          RarityColor_15_307322564B9A95A6DCE4108655E6CDDE;   // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label_26_05D534BA4F319C5F3FFF23A87F01A1E2;         // 0x98(0x18)(Edit, BlueprintVisible)
	struct FGameplayTag                          RarityTag_22_07E0A8174184A69F46013DB61F44EEDC;     // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundTexture_27_E3F3AD2340C4EAF9884939A511FBC8B3; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LevelUpText_30_0000DABF4F7C329E65CA55A4D3FFBF00;   // 0xC0(0x18)(Edit, BlueprintVisible)
	struct FDataTableRowHandle                   UpgradeSettingsRow_39_02DD0E8A4A64F14148C43989936AFBC0; // 0xD8(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FQtnUpgradeSettings                   UpgradeSettings_33_FF90943E48F86B6283EAAD8FD86516A6; // 0xE8(0x1F8)(Edit, BlueprintVisible)
	struct FQtnRolledUpgradeData                 RolledUpgradeData_36_D68679A8425AF3B3BE68A79316D26D23; // 0x2E0(0x60)(Edit, BlueprintVisible)
};

}


