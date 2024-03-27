#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x590 - 0x538)
// BlueprintGeneratedClass Cinematic_StarksPondFindRandy.Cinematic_StarksPondFindRandy_C
class ACinematic_StarksPondFindRandy_C : public ACinematicSceneCharacter_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                ToiletPaperRolls;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x548(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight;                                         // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWalkDestination_C*                    WalkDestination3;                                  // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWalkDestination_C*                    WalkDestination2;                                  // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWalkDestination_C*                    WalkDestination1;                                  // 0x568(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWalkDestination_C*                    WalkDestination;                                   // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQTNActorSequenceComponent_C*          QTNActorSequenceComponent1;                        // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQTNActorSequenceComponent_C*          QTNActorSequenceComponent;                         // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ARandy_Actor_BP_C*                     RandyInside;                                       // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACinematic_StarksPondFindRandy_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayNextShot();
	void GoalEvent(class UClass* GoalClass, int32 EventNum, class ASubGoalManager_Archetype_C* Manager);
	void CleanUpCutscene();
	void ExecuteUbergraph_Cinematic_StarksPondFindRandy(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* K2Node_CustomEvent_goalClass, int32 K2Node_CustomEvent_EventNum, class ASubGoalManager_Archetype_C* K2Node_CustomEvent_manager, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


