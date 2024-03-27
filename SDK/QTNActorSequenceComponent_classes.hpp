#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x120 - 0x108)
// BlueprintGeneratedClass QTNActorSequenceComponent.QTNActorSequenceComponent_C
class UQTNActorSequenceComponent_C : public UActorSequenceComponent
{
public:
	int32                                        ShotNumber;                                        // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ShotNumbers;                                       // 0x110(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UQTNActorSequenceComponent_C* GetDefaultObj();

};

}


