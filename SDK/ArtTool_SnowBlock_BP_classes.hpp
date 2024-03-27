#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x288 - 0x250)
// BlueprintGeneratedClass ArtTool_SnowBlock_BP.ArtTool_SnowBlock_BP_C
class AArtTool_SnowBlock_BP_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAdditive;                                        // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArtTool_SnowShapes               Shape_Options;                                     // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_742F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Shape_Override;                                    // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   SnowShape_Options;                                 // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SnowTag;                                           // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Snow;                                              // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AArtTool_SnowBlock_BP_C* GetDefaultObj();

	void UserConstructionScript(int32 L_Selection, class FName Temp_name_Variable, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class FName Temp_name_Variable_1, int32 CallFunc_Array_Add_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& Temp_struct_Variable, class UStaticMesh* CallFunc_Array_Get_Item, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


