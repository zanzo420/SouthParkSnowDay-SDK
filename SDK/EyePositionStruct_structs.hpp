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

// 0x31 (0x31 - 0x0)
// UserDefinedStruct EyePositionStruct.EyePositionStruct
struct FEyePositionStruct
{
public:
	struct FVector4                              EyeViewpoint_2_7E27A7DE429F83B4741EE28C012A953A;   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    EyeMat_5_B1774E544CACDE72C0A19E8D8BFEA33E;         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MouthMat_7_242A92CC46A31B93DCE827BCC0995C74;       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowBrows_9_59AA3DB44F9A4DB1AF73608616B52229;      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AllowBlink_11_816726A144B6A143B0E334B90C3A1532;    // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ForceBlink_13_24D8E7E54A2688A9593B81A0388B72A1;    // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5119[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          BrowMontage_16_9DC6B9124A9224E2BA4BDDB8BDDC89F1;   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PersistBrowsOnClose_18_AD1F65244FE9D734A0E8E9AB95869C9D; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


