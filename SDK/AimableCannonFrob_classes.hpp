#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x3C8 - 0x320)
// BlueprintGeneratedClass AimableCannonFrob.AimableCannonFrob_C
class UAimableCannonFrob_C : public UQtnFrobbableComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAimableCannonPawn_C*                  AimableCannon;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PromptLoadCannon;                                  // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PromptNeedAmmo;                                    // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PromptUseCannon;                                   // 0x360(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PromptAlreadyLoaded;                               // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PromptCannonInUse;                                 // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AllowUseWhileCarryingAmmo;                         // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CheckForDisabledCannon;                            // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4FA5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PromptCannonDamaged;                               // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAimableCannonFrob_C* GetDefaultObj();

	bool CanBeInteractedWith(enum class EQtnTargetInteractionEnum TargetInteraction, class AQtnPawn* InteractingPawn, class FText* AffordancePrompt, class AQtnBodyPawn* bodyPawn, bool IsDriving, bool HasCannonAmmo, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsCombatInhibited_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UQtnFullBodyStateEngaged* K2Node_DynamicCast_AsQtn_Full_Body_State_Engaged, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_GoalPickup_C* CallFunc_Get_Carried_Cannon_Ammo_ammoPickupActor, class UQtnCarryComponent* CallFunc_Get_Carried_Cannon_Ammo_ammoCarryComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Needs_Ammo_Load_yes, bool CallFunc_InfiniteCannonsEnabled_infiniteCannons, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AimableCannonFrob(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AAimableCannonPawn_C* K2Node_DynamicCast_AsAimable_Cannon_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}


