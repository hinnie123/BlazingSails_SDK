# BlazingSails_SDK
SDK for the game BlazingSails

Useful game info:
```
Objects:
4C 8B 15 ? ? ? ? 8D 43 01
\x4C\x8B\x15\x00\x00\x00\x00\x8D\x43\x01 xxx????xxx

GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 5F
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x5F xxx????xxxxx

GWorld:
48 8B 1D ? ? ? ? 48 85 DB 74 3B
\x48\x8B\x1D\x00\x00\x00\x00\x48\x85\xDB\x74\x3B xxx????xxxxx

GetObjectName:
40 53 48 83 EC 20 48 8B D9 48 85 D2 75 30
\x40\x53\x48\x83\xEC\x20\x48\x8B\xD9\x48\x85\xD2\x75\x30 xxxxxxxxxxxxxx

ProjectWorldLocationToScreen:
48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? 41 0F
\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\x41\x0F xxxx?xxxx?xxxx?xxxx????xx

GetBoneMatrix:
48 89 5C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? F6 81
\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\xF6\x81 xxxx?xxxx?xxxx????xx

LineOfSightTo:
40 55 53 56 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 E0
\x40\x55\x53\x56\x57\x48\x8D\x6C\x24\x00\x48\x81\xEC\x00\x00\x00\x00\x48\x8B\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x45\xE0 xxxxxxxxx?xxx????xxx????xxxxxxx

ProcessEvent: 64
CreateDefaultObject: 103

void init_sdk()
{
	const auto gname_addr = utils::find_pattern("48 8B 05 ? ? ? ? 48 85 C0 75 5F");
	auto offset = *(uint32_t*)(gname_addr + 3);
	SDK::FName::GNames = (SDK::TNameEntryArray*)(*(uintptr_t*)(gname_addr + 7 + offset));

	const auto objects_addr = utils::find_pattern("4C 8B 15 ? ? ? ? 8D 43 01");
	offset = *(int32_t*)(objects_addr + 3);
	SDK::TUObjectArray::g_objects = (uintptr_t)(objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);
}

Loop actors like so:
auto actors = GWorld->PersistentLevel->GetActors();
for (size_t i = 0; i < actors.Num(); ++i)
{
	SDK::AActor* actor = actors[i];
}
```

Useful files:
- BZ_Basic.cpp
- BZ_Basic.hpp
- BZ_CoreUObject_classes.hpp
- BZ_CoreUObject_functions.cpp
- BZ_Engine_classes.hpp
- BZ_Engine_functions.cpp
- BZ_BlazingSails_classes.hpp
- BZ_BlazingSails_Functions.cpp
