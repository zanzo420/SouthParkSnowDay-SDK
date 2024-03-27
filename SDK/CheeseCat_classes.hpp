#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x298 - 0x250)
// BlueprintGeneratedClass CheeseCat.CheeseCat_C
class ACheeseCat_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Spray;                                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_NewTrack_0_FD45029B44772E8C375F879138C22A57;  // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade__Direction_FD45029B44772E8C375F879138C22A57;  // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade;                                              // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            MrKittyMaterials;                                  // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              FadeMat;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACheeseCat_C* GetDefaultObj();

	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void SprayOn(bool On, float Angle, float Distance);
	void RandomizeMaterial();
	void FadeOut();
	void ExecuteUbergraph_CheeseCat(int32 EntryPoint, bool K2Node_CustomEvent_On, float K2Node_CustomEvent_Angle, float K2Node_CustomEvent_Distance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_DegTan_ReturnValue, class UMaterialInterface* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


