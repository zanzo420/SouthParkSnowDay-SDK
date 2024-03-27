#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// BlueprintGeneratedClass TestMeta.TestMeta_C
class UTestMeta_C : public UAnimMetaData
{
public:
	TArray<struct FVector>                       Verts;                                             // 0x28(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Tris;                                              // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          BoneNames;                                         // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                TimeArray;                                         // 0x58(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UTestMeta_C* GetDefaultObj();

};

}


