#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GlobalNavAffordance_Interface.GlobalNavAffordance_Interface_C
class IGlobalNavAffordance_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGlobalNavAffordance_Interface_C* GetDefaultObj();

	void RequestAffordance();
	void UpdateGlobalNavAffordances(TMap<class FString, class FText> Affordances, class UClass* MyClass);
};

}


