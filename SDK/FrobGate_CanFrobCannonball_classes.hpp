#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass FrobGate_CanFrobCannonball.FrobGate_CanFrobCannonball_C
class UFrobGate_CanFrobCannonball_C : public UQtnFrobGate
{
public:

	static class UClass* StaticClass();
	static class UFrobGate_CanFrobCannonball_C* GetDefaultObj();

	class FText GetRejectionMessage(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent);
	bool IsFrobAllowed(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABP_GoalPickup_C* K2Node_DynamicCast_AsBP_Goal_Pickup, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetCarryingActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_Cannonball_C* K2Node_DynamicCast_AsBP_Cannonball, bool K2Node_DynamicCast_bSuccess_2);
};

}


