int __fastcall sub_33978(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r0
  __int64 v7; // r0
  int v8; // r0
  __int64 v9; // r0
  const char *v10; // r5
  const char *v11; // r0
  int v13; // [sp+4h] [bp-10h] BYREF
  _DWORD v14[3]; // [sp+8h] [bp-Ch] BYREF

  v4 = sub_2611EC("munmap", &v13);
  v5 = sub_1B7278(v13);
  v6 = sub_1780DC(v5);
  v14[0] = sub_26DCC4(*(_DWORD *)(v6 + 152), a1);
  v7 = sub_1780DC(v5);
  v14[1] = sub_26DBA0(*(_DWORD *)(v7 + 36), HIDWORD(v7), a2, 0);
  v8 = sub_17E714(v4, 0, 2, v14);
  v9 = sub_26EB44(v8);
  if ( v9 )
  {
    v10 = (const char *)sub_98B30(a1, 0);
    v11 = (const char *)sub_988A8(a2, 0);
    LODWORD(v9) = sub_946D8("Failed inferior munmap call at %s for %s bytes, errno is changed.", v10, v11);
  }
  return v9;
}
