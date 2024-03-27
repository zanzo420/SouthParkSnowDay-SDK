#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_DeliveryParent.Interface_QtnGoal_SP_Day1_DeliveryParent_C
class IInterface_QtnGoal_SP_Day1_DeliveryParent_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SP_Day1_DeliveryParent_C* GetDefaultObj();

	void DoGetDelivered(bool* Delivered);
	void SetSiblingGoal(class UQtnGoal* SiblingGoal);
	void DoGetSpokeExitGate(class ATravelVolume_BP_C** SpokeExitGate);
	void DoCloseGate(class ATravelVolume_BP_C* Gate);
	void DoGetSpokeEntranceGate(class ATravelVolume_BP_C** SpokeEntranceGate);
	void DoDeliverItem();
};

}


