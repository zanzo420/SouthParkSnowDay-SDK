#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x108 - 0xE0)
// BlueprintGeneratedClass StanBossBattleComponent.StanBossBattleComponent_C
class UStanBossBattleComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                DragonAsActor;                                     // 0xE8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AStanBoss_LeapLocation_C*>      StanLeapLocations;                                 // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AQtnBodyPawn*                          Stan_Boss;                                         // 0x100(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStanBossBattleComponent_C* GetDefaultObj();

	void Register_Stan_Minus_Server_Only(class AQtnBodyPawn* Stan_Boss);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StanBossBattleComponent(int32 EntryPoint, TSubclassOf<class AActor> CallFunc_SyncLoadActorClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManager_Playground_Boss_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Playground_Boss, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


