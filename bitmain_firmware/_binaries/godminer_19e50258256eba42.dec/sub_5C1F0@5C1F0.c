int __fastcall sub_5C1F0(int a1, int a2, char *a3)
{
  const char *v4; // lr
  const char *v5; // r1
  int v6; // r2
  int v11; // [sp+2Ch] [bp-70h] BYREF
  char v12[32]; // [sp+30h] [bp-6Ch] BYREF
  char v13[32]; // [sp+50h] [bp-4Ch] BYREF
  _QWORD v14[4]; // [sp+70h] [bp-2Ch] BYREF
  _QWORD *v15; // [sp+90h] [bp-Ch]
  int v16; // [sp+94h] [bp-8h]

  v16 = *(_DWORD *)(a1 + 1132);
  if ( v16 )
  {
    v15 = v14;
    v14[0] = *(_QWORD *)(v16 + 8);
    bin2hex((int)v13, (int)v14, *(_DWORD *)v16);
    v11 = (((unsigned __int16)((unsigned __int16)*(_DWORD *)(v16 + 16) << 8) | BYTE1(*(_DWORD *)(v16 + 16))) << 16)
        | (unsigned __int16)(HIWORD(*(_DWORD *)(v16 + 16)) << 8)
        | ((unsigned __int16)HIWORD(*(_DWORD *)(v16 + 16)) >> 8);
    bin2hex((int)v12, (int)&v11, 4u);
    v4 = *(const char **)(a2 + 16);
    v5 = *(const char **)(a1 + 1124);
    v6 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v6 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      v4,
      v5,
      v13,
      (const char *)(a1 + 1100),
      v12,
      v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
