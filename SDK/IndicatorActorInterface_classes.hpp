#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IndicatorActorInterface.IndicatorActorInterface_C
class IIndicatorActorInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIndicatorActorInterface_C* GetDefaultObj();

	void OnIndicatorConstructed(class UScreenIndicator_C* IndicatorWidget);
};

}


