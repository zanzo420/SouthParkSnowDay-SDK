#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x269 - 0x250)
// BlueprintGeneratedClass BP_FloorPatch.BP_FloorPatch_C
class ABP_FloorPatch_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Plane;                                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     FloorType;                                         // 0x260(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x268(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FloorPatch_C* GetDefaultObj();

	void OnRep_active();
	void ActivateFloorPatch(class UPhysicalMaterial* FloorType);
	void DeactivateFloorPatch();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FloorPatch(int32 EntryPoint, class UPhysicalMaterial* K2Node_CustomEvent_floorType, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1);
};

}


