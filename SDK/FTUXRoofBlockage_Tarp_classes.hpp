#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x2B8 - 0x2A1)
// BlueprintGeneratedClass FTUXRoofBlockage_Tarp.FTUXRoofBlockage_Tarp_C
class AFTUXRoofBlockage_Tarp_C : public AFTUXRoofBlockage_C
{
public:
	uint8                                        Pad_7465[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TarpMesh;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFTUXRoofBlockage_Tarp_C* GetDefaultObj();

	void TurnOff();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FTUXRoofBlockage_Tarp(int32 EntryPoint);
};

}


