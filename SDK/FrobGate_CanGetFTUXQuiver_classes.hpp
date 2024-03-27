#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass FrobGate_CanGetFTUXQuiver.FrobGate_CanGetFTUXQuiver_C
class UFrobGate_CanGetFTUXQuiver_C : public UQtnFrobGate
{
public:

	static class UClass* StaticClass();
	static class UFrobGate_CanGetFTUXQuiver_C* GetDefaultObj();

	class FText GetRejectionMessage(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent);
	bool IsFrobAllowed(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent, class AActor* CallFunc_GetOwner_ReturnValue, class AFTUXQuiverFrobbable_BP_C* K2Node_DynamicCast_AsFTUXQuiver_Frobbable_BP, bool K2Node_DynamicCast_bSuccess);
};

}


