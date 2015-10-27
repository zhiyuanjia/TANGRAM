﻿// guids.h: definitions of GUIDs/IIDs/CLSIDs used in this VsPackage

/*
Do not use #pragma once, as this file needs to be included twice.  Once to declare the externs
for the GUIDs, and again right after including initguid.h to actually define the GUIDs.
*/


// guidPersistanceSlot ID for the Tool Window
// { 7a5a2942-c6a4-4d28-8c4d-7996c319206b }
#define guidTangramPackagePersistenceSlot { 0x7A5A2942, 0xC6A4, 0x4D28, { 0x8C, 0x4D, 0x79, 0x96, 0xC3, 0x19, 0x20, 0x6B } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_guidPersistanceSlot, 
0x7A5A2942, 0xC6A4, 0x4D28, 0x8C, 0x4D, 0x79, 0x96, 0xC3, 0x19, 0x20, 0x6B );
#endif

//
// package guid
// { fea558f9-2737-4369-8e99-14f316ca9190 }
#define guidTangramPackagePkg { 0xFEA558F9, 0x2737, 0x4369, { 0x8E, 0x99, 0x14, 0xF3, 0x16, 0xCA, 0x91, 0x90 } }
//#ifdef DEFINE_GUID
//DEFINE_GUID(CLSID_TangramPackage,
//0xFEA558F9, 0x2737, 0x4369, 0x8E, 0x99, 0x14, 0xF3, 0x16, 0xCA, 0x91, 0x90 );
//#endif

// Command set guid for our commands (used with IOleCommandTarget)
// { fa4aeb54-81f6-4286-83cf-009c213224cb }
#define guidTangramPackageCmdSet { 0xFA4AEB54, 0x81F6, 0x4286, { 0x83, 0xCF, 0x0, 0x9C, 0x21, 0x32, 0x24, 0xCB } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_TangramPackageCmdSet, 
0xFA4AEB54, 0x81F6, 0x4286, 0x83, 0xCF, 0x0, 0x9C, 0x21, 0x32, 0x24, 0xCB );
#endif

//Guid for the image list referenced in the VSCT file
// { 440e1355-a553-4468-bd3a-750ce4199b77 }
#define guidImages { 0x440E1355, 0xA553, 0x4468, { 0xBD, 0x3A, 0x75, 0xC, 0xE4, 0x19, 0x9B, 0x77 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_Images, 
0x440E1355, 0xA553, 0x4468, 0xBD, 0x3A, 0x75, 0xC, 0xE4, 0x19, 0x9B, 0x77 );
#endif


// Guid for the Editor Factory
// { 89c1346b-bb49-41ff-97d5-47470eed3c95 }
#define guidTangramPackageEditorFactory { 0x89C1346B, 0xBB49, 0x41FF, { 0x97, 0xD5, 0x47, 0x47, 0xE, 0xED, 0x3C, 0x95 } } 
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_TangramPackageEditorFactory, 
0x89C1346B, 0xBB49, 0x41FF, 0x97, 0xD5, 0x47, 0x47, 0xE, 0xED, 0x3C, 0x95 ); 
#endif

// Guid for the Editor Document (the document is the actual editor)
// { 7f8286c6-672d-484a-8c4b-1f257d7353b1 }
#define guidTangramPackageEditorDocument { 0x7F8286C6, 0x672D, 0x484A, { 0x8C, 0x4B, 0x1F, 0x25, 0x7D, 0x73, 0x53, 0xB1 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_TangramPackageEditorDocument, 
0x7F8286C6, 0x672D, 0x484A, 0x8C, 0x4B, 0x1F, 0x25, 0x7D, 0x73, 0x53, 0xB1 );
#endif

