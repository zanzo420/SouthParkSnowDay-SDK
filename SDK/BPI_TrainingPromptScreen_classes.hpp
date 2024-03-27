#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_TrainingPromptScreen.BPI_TrainingPromptScreen_C
class IBPI_TrainingPromptScreen_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_TrainingPromptScreen_C* GetDefaultObj();

	void AddTrainingPrompt(const class FString& Prompt, const class FString& Heading, class FName Identity);
};

}


