#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass FrobGate_CanGetFTUXDaggers.FrobGate_CanGetFTUXDaggers_C
class UFrobGate_CanGetFTUXDaggers_C : public UQtnFrobGate
{
public:

	static class UClass* StaticClass();
	static class UFrobGate_CanGetFTUXDaggers_C* GetDefaultObj();

	class FText GetRejectionMessage(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent);
	bool IsFrobAllowed(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent, class UClass* Temp_class_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AFTUXDaggerFrobbable_BP_C* K2Node_DynamicCast_AsFTUXDagger_Frobbable_BP, bool K2Node_DynamicCast_bSuccess, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


