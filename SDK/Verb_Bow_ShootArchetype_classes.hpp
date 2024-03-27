#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xAA9 - 0xAA9)
// BlueprintGeneratedClass Verb_Bow_ShootArchetype.Verb_Bow_ShootArchetype_C
class UVerb_Bow_ShootArchetype_C : public UVerb_Ranged_Archetype_C
{
public:

	static class UClass* StaticClass();
	static class UVerb_Bow_ShootArchetype_C* GetDefaultObj();

	void GetMuzzleComponent(class USceneComponent** OutMuzzleComponent, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABow_C* K2Node_DynamicCast_AsBow, bool K2Node_DynamicCast_bSuccess);
};

}


