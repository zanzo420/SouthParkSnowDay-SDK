#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x84 - 0x78)
// BlueprintGeneratedClass QtnCharacterMesh_Archetype.QtnCharacterMesh_Archetype_C
class UQtnCharacterMesh_Archetype_C : public UQtnCharacterBodyMesh
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        SkinMatID;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnCharacterMesh_Archetype_C* GetDefaultObj();

	void OnBodyMeshAcquired(class USkeletalMeshComponent* ComponentAdded);
	void ExecuteUbergraph_QtnCharacterMesh_Archetype(int32 EntryPoint, class USkeletalMeshComponent* K2Node_Event_ComponentAdded);
};

}


