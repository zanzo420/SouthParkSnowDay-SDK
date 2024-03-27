#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x560 - 0x554)
// BlueprintGeneratedClass SwarmerBombProjectile.SwarmerBombProjectile_C
class ASwarmerBombProjectile_C : public ABombardierProjectile_C
{
public:
	uint8                                        Pad_5DAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASwarmerBombProjectile_C* GetDefaultObj();

	void NewFunction_0();
	void StartRotating();
	void ExecuteUbergraph_SwarmerBombProjectile(int32 EntryPoint);
};

}


