#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass FTUX_Design.FTUX_Design_C
class AFTUX_Design_C : public AQtnLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACine_ElvesVsHumans_C*                 Cine_ElvesVsHumans_2_ExecuteUbergraph_FTUX_Design_RefProperty; // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFTUXRoofBlockage_C*                   FTUXRoofBlockage_2_ExecuteUbergraph_FTUX_Design_RefProperty; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFTUX_Design_C* GetDefaultObj();

	void Boxes();
	void ElvesVHumansScene();
	void ExecuteUbergraph_FTUX_Design(int32 EntryPoint);
};

}


