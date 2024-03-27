#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GateLockInterface.GateLockInterface_C
class IGateLockInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGateLockInterface_C* GetDefaultObj();

	void TogglePickablePresetation(bool WantPickable, class UObject* Lock);
	void Toggle_Lock_Open_Presentation(bool Want_locked, class UObject* Lock);
};

}


