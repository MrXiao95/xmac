#pragma once
#define TARGET_GAMEVERSION "Version 10.10.320.3039 [PUBLIC]"  // 

#define oNetClient 0x34CB79C // 												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B	
#define oChatClientPtr 0x1C26748 //												8B 0D ? ? ? ? 0F 43 44 24 ? 52 50 E8 ? ? ? ? E8 
#define oObjManager 0x1C288EC //												8B 0D ? ? ? ? E8 ? ? ? ? FF 77						//
#define oZoomClass 0x34C3594 //													A3 ? ? ? ? 83 FA 10 72 32							//
#define oGameInfo 0x34C4D28 // 													A1 ? ? ? ? 83 78 08 02 0F 94 C0
#define oHudInstance 0x1C28938 // 												8B 0D ? ? ? ? 6A 00 8B 49 34 E8 ? ? ? ? B0         //
#define oRenderer 0x34E8978 // 													8B 15 ? ? ? ? 83 EC 08 F3
#define oUnderMouseObject 0x28754F0 // 											8B 0D ? ? ? ? 89 0D 
#define oD3DRenderer 0x34EAF50 // 												A1 ? ? ? ? 89 54 24 18 
#define oWorldToScreen 0x933280 // 												83 EC 10 56 E8 ? ? ? ? 8B 08 
#define oLocalPlayer 0x34CAB30 //												A1 ?? ?? ?? ?? 85 C0 74 07 05 ?? ?? ?? ?? EB 02 33 C0 56  //
#define oGameTime 0x34C35F4 // 													F3 0F 11 05 ? ? ? ? 8B 49							//

// FUNCTIONS
#define oCastSpell 0x4EFC50 
#define oDrawCircle 0x4FE590 
#define oGetBasicAttack 0x171810 
#define oGetAttackCastDelay 0x2AC850 
#define oGetAttackDelay 0x2AC950 
#define oGetPing 0x3288C0// 													E8 ? ? ? ? 8B 4F 2C 85 C9 0F
#define oPingInstance 0x34CB79C //												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B
#define oGetSpellState 0x4E34A0 // 												E8 ? ? ? ? 8B F8 8B CB 89  						//	
#define oIsTargetable 0x1E1F90 //												56 8B F1 E8 ? ? ? ? 84 C0 74 2E 
#define oIsAlive 0x1AC360 // 													56 8B F1 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 19		//
#define oIsBaron 0x1820F0 //													56 E8 ? ? ? ? 68 ? ? ? ? 8B 30 
#define oIsTurret 0x1BCD90 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 09 5F					//
#define oIsInhib 0x1BCA20 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 38					//
#define oIsHero 0x1BCBA0 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 2B 57				//
#define oIsMinion 0x1BCBE0 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 4A 8B 45				//
#define oIsDragon 0x180570 //  													83 EC 10 A1 ? ? ? ? 33 C4 89 44 24 0C 56 E8		//
#define oIsMissile 0x1BCC00 //											   		E8 ? ? ? ? 83 C4 04 84 C0 74 1C FF					//
#define oIsNexus 0x1BCB20 //													E8 ? ? ? ? 83 C4 04 84 C0 0F 95 C0 C3 CC 8A
#define oIsNotWall 0x8B4E50 // 													E8 ? ? ? ? 33 C9 83 C4 0C 84						//
#define oIsTroy 0x1c5c00  //// NOT UPDATE
#define oIssueOrder 0x1821A0 // 												81 EC ? ? ? ? 56 57 8B F9 C7						//
#define oPrintChat 0x1BB149C //													may be wrong

//CObject
#define oObjIndex 0x20
#define oObjTeam 0x4C
#define oObjName 0x6C
#define oObjNetworkID 0xCC
#define oObjPos 0x1D8
#define oObjVisibility 0x39C
#define oObjHealth 0xF88
#define oObjArmor 0x1468
#define oObjBaseAtk 0x1434
#define oObjBonusAtk 0x13B4
#define oObjMoveSpeed 0x147C
#define oObjAtkRange 0x1484
#define oObjBuffMgr 0x2318
#define oObjSpellBook 0x2AD0
#define oObjChampionName 0x358C
#define oObjLevel 0x4E3C

//
#define objectArray 0x14