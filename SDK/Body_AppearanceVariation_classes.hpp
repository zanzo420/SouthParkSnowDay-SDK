#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xD8 - 0x90)
// BlueprintGeneratedClass Body_AppearanceVariation.Body_AppearanceVariation_C
class UBody_AppearanceVariation_C : public UBody_Player_Parent_C
{
public:
	TArray<struct FLinearColor>                  HairColors;                                        // 0x90(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                             ValueRange;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    DiffuseTextures;                                   // 0xA8(0x10)(Edit, BlueprintVisible)
	TArray<class UTexture2D*>                    MaskTextures;                                      // 0xB8(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                BodyIndexes;                                       // 0xC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBody_AppearanceVariation_C* GetDefaultObj();

	void RefreshMeshVariant(int32 RandSeed, class USkeletalMeshComponent* SkeletalMeshComponent, float Color2, int32 TextureSelect, float SkinTone, int32 HairSelection, float Color, class USkeletalMeshComponent* Component, const struct FRandomStream& RandStream, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, bool Temp_bool_Variable_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UTexture2D* CallFunc_Array_Get_Item_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_RandomIntegerFromStream_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_RandomIntegerFromStream_ReturnValue_1);
};

}


