#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Interface_QtnGoal_SP_Day1_StartTruck.Interface_QtnGoal_SP_Day1_StartTruck_C
class IInterface_QtnGoal_SP_Day1_StartTruck_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterface_QtnGoal_SP_Day1_StartTruck_C* GetDefaultObj();

	void DoSetKeyGoal(class UQtnGoal* KeyGoal);
	void DoSetGasGoal(class UQtnGoal* GasGoal);
	void DoTruckStarted();
};

}


