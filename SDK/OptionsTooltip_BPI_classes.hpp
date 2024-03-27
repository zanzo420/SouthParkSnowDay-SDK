#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass OptionsTooltip_BPI.OptionsTooltip_BPI_C
class IOptionsTooltip_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IOptionsTooltip_BPI_C* GetDefaultObj();

	void ShowTooltip(class FText TooltipToShow);
};

}


