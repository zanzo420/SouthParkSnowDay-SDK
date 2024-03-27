#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x570 - 0x538)
// BlueprintGeneratedClass Cine_DarkMatterTransform_Foothills.Cine_DarkMatterTransform_Foothills_C
class ACine_DarkMatterTransform_Foothills_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Swarmerweapon;                                     // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DMKid;                                             // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SnowFall;                                          // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             SnowTrails;                                        // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ACine_DarkMatterTransform_Foothills_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayNextShot();
	void ExecuteUbergraph_Cine_DarkMatterTransform_Foothills(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess);
};

}


