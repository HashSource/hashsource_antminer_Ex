int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r8
  int v8; // r5
  unsigned __int8 *v9; // r0
  int v10; // r3
  int v11; // r4
  char v12; // t1
  const char *v14; // r2
  _DWORD *v15; // r3
  int v16; // r2
  int v17; // r1
  int *v18; // r12
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // [sp+14h] [bp-183Ch] BYREF
  char v26; // [sp+18h] [bp-1838h]
  char v27; // [sp+19h] [bp-1837h]
  __int16 v28; // [sp+1Ah] [bp-1836h]
  unsigned __int8 v29[52]; // [sp+1Ch] [bp-1834h] BYREF
  _DWORD s[512]; // [sp+50h] [bp-1800h] BYREF
  char v31[4096]; // [sp+850h] [bp-1000h] BYREF

  LOWORD(v6) = -14808;
  HIWORD(v6) = (unsigned int)&unk_16B438 >> 16;
  memset(v29, 0, 0x32u);
  v7 = *(_DWORD *)(v6 + 0x1C);
  v26 = a1;
  v27 = a3;
  v25 = 101100117;
  v28 = a3 + 12 + a1;
  if ( v7 )
  {
    v8 = 0;
  }
  else
  {
    v8 = sub_B70F4();
    if ( v8 < 0 )
    {
      LOWORD(v14) = -2080;
      HIWORD(v14) = (unsigned int)"" >> 16;
      snprintf((char *)s, 0x800u, v14, "bitmain_power_read");
      V_LOCK();
      logfmt_raw(v31, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v15) = -14512;
      HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
      v16 = 639;
LABEL_10:
      LOWORD(v17) = -2412;
      HIWORD(v17) = (unsigned int)"_standard_code" >> 16;
      zlog(*v15, v17, 166, "bitmain_power_read", 18, v16, 100, v31);
      return v8;
    }
  }
  if ( sub_B6918(*(_DWORD *)(v6 + 0x18), (unsigned __int8 *)&v25, 8u, v29, a3 + 7) )
  {
    LOWORD(v18) = -2144;
    HIWORD(v18) = (unsigned int)"oad_one_chain" >> 16;
    v8 = -2147482880;
    v19 = *v18;
    v20 = v18[1];
    v21 = v18[2];
    v22 = v18[3];
    v18 += 4;
    s[0] = v19;
    s[1] = v20;
    s[2] = v21;
    s[3] = v22;
    v23 = v18[1];
    v24 = v18[2];
    s[4] = *v18;
    s[5] = v23;
    s[6] = v24;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v15) = -14512;
    HIWORD(v15) = (unsigned int)&unk_16B55C >> 16;
    v16 = 649;
    goto LABEL_10;
  }
  if ( a3 )
  {
    v9 = &v29[4];
    v10 = a2 - 1;
    v11 = a2 + (unsigned __int8)(a3 - 1);
    do
    {
      v12 = *++v9;
      *(_BYTE *)++v10 = v12;
    }
    while ( v10 != v11 );
  }
  return v8;
}
