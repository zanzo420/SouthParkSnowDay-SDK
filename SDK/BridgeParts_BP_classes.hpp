#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x350 - 0x250)
// BlueprintGeneratedClass BridgeParts_BP.BridgeParts_BP_C
class ABridgeParts_BP_C : public AActor
{
public:
	class UStaticMeshComponent*                  CollisionPlate;                                    // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Bridge_Length;                                     // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Bridge_Section;                                    // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Bridge_Seed;                                       // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Bridge_Stream;                                     // 0x26C(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	float                                        Bridge_Gap;                                        // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                   MeshList_Main;                                     // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   MeshList_Half;                                     // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Bridge_Rotation;                                   // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Bridge_Randomize_Location;                         // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           New_Mesh;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UStaticMesh*, bool>               MeshMap;                                           // 0x2A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UInstancedStaticMeshComponent*, bool> InstanceMeshGroups;                                // 0x2F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UInstancedStaticMeshComponent*         SelectedSection;                                   // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABridgeParts_BP_C* GetDefaultObj();

	void Refresh(int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue);
	void Setup(const struct FTransform& L_Section_Transform, bool Bridge_SectionRotated, bool Bridge_Section_Full, bool Bridge_Skip, int32 Bridge_IndexCount, float Bridge_CurLength, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_RandomBoolFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue);
	void AddBridgeSection(bool FullSection_, const struct FTransform& Transform, const struct FTransform& L_Transform, bool L_FullSection, TMap<class UInstancedStaticMeshComponent*, bool> TempGroup, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UInstancedStaticMeshComponent*>& CallFunc_Map_Keys_Keys, int32 CallFunc_AddInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UInstancedStaticMeshComponent*>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UInstancedStaticMeshComponent* CallFunc_Array_Get_Item, class UInstancedStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void SetupInstanceGroups(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& Temp_struct_Variable, TArray<class UStaticMesh*>& CallFunc_Map_Keys_Keys, class UInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript(const struct FTransform& L_Section_Transform, bool Bridge_SectionRotated, bool Bridge_Section_Full, bool Bridge_Skip, int32 Bridge_IndexCount, float Bridge_CurLength);
};

}


