#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x630 - 0x620)
// BlueprintGeneratedClass RightHandItem_Archetype.RightHandItem_Archetype_C
class ARightHandItem_Archetype_C : public ABase_Item_Archetype_C
{
public:
	class UQtnVerbComponent*                     QtnVerb;                                           // 0x620(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UQtnEquippableComponent*               QtnEquippable;                                     // 0x628(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARightHandItem_Archetype_C* GetDefaultObj();

};

}


