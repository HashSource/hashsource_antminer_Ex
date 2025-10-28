int __fastcall Sha256_Onestep(_BYTE *a1, int a2, _BYTE *a3)
{
  _BYTE v7[104]; // [sp+10h] [bp-6Ch] BYREF

  Sha256_Init((int)v7);
  Sha256_Update((int)v7, a1, a2);
  return Sha256_Final((int)v7, a3);
}
