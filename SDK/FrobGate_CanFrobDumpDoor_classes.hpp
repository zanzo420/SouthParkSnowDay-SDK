#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass FrobGate_CanFrobDumpDoor.FrobGate_CanFrobDumpDoor_C
class UFrobGate_CanFrobDumpDoor_C : public UQtnFrobGate
{
public:

	static class UClass* StaticClass();
	static class UFrobGate_CanFrobDumpDoor_C* GetDefaultObj();

	class FText GetRejectionMessage(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent);
	bool IsFrobAllowed(class AQtnBodyPawn* bodyPawn, class UQtnFrobbableComponent* FrobbableComponent, class AActor* CallFunc_GetOwner_ReturnValue, class ASkirmishDoor_MainStreetDumpExit_C* K2Node_DynamicCast_AsSkirmish_Door_Main_Street_Dump_Exit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue);
};

}


