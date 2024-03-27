#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3F0 - 0x3F0)
// BlueprintGeneratedClass AIFrobJobComponent_TPAmmo.AIFrobJobComponent_TPAmmo_C
class UAIFrobJobComponent_TPAmmo_C : public UAIFrobJobComponent_C
{
public:

	static class UClass* StaticClass();
	static class UAIFrobJobComponent_TPAmmo_C* GetDefaultObj();

	bool IsAIJobViable_ServerOnly(class AQtnPawn* Pawn, bool ForInitialAdoption, TArray<class UQtnCarryComponent*>& CallFunc_GetManagedCarryComponents_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


