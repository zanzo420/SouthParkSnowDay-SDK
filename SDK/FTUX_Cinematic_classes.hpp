#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass FTUX_Cinematic.FTUX_Cinematic_C
class AFTUX_Cinematic_C : public AQtnLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACine_ElfAmbush_C*                     Cine_ElfAmbush_2_ExecuteUbergraph_FTUX_Cinematic_RefProperty; // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACine_FTUXIntro_C*                     Cine_FTUXIntro_2_ExecuteUbergraph_FTUX_Cinematic_RefProperty; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFTUX_Cinematic_C* GetDefaultObj();

	void FTUXIntro();
	void ElfAmbush();
	void ExecuteUbergraph_FTUX_Cinematic(int32 EntryPoint);
};

}


