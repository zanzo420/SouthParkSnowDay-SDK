#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x570 - 0x538)
// BlueprintGeneratedClass Cine_LianeIntro_Church.Cine_LianeIntro_Church_C
class ACine_LianeIntro_Church_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWalkDestination_C*                    WalkDestination3;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     SnowFall;                                          // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CollisionCheck;                                    // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             SnowTrails;                                        // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ACine_LianeIntro_Church_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayNextShot();
	void PostFadeStartScene();
	void ExecuteUbergraph_Cine_LianeIntro_Church(int32 EntryPoint, class UClass* Temp_class_Variable, const struct FTransform& Temp_struct_Variable, class UClass* Temp_class_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class ACartman_Actor_BP_C* K2Node_DynamicCast_AsCartman_Actor_BP, bool K2Node_DynamicCast_bSuccess);
};

}


