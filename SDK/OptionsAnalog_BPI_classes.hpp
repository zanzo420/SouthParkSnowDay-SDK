#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass OptionsAnalog_BPI.OptionsAnalog_BPI_C
class IOptionsAnalog_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptionsAnalog_BPI_C* GetDefaultObj();

	void HandleAnalogState(float DeltaTime);
};

}


