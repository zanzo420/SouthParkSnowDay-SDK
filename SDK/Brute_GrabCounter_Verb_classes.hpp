#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xAD0 - 0xAD0)
// BlueprintGeneratedClass Brute_GrabCounter_Verb.Brute_GrabCounter_Verb_C
class UBrute_GrabCounter_Verb_C : public UBrute_Grab_Verb_C
{
public:

	static class UClass* StaticClass();
	static class UBrute_GrabCounter_Verb_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


