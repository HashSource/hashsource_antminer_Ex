int __fastcall tsensor_open(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r10
  int v8; // r0
  unsigned __int8 *v9; // r4
  int v10; // r2
  unsigned int v11; // r2
  int v12; // r0
  int v13; // r8
  int v14; // r2
  unsigned __int8 v15; // r1
  unsigned __int8 *v16; // r2
  int v17; // r8
  const char *v19; // r2
  int v20; // r1
  const char *v21; // r2
  int v22; // r2
  int v23; // r1
  const char *v24; // r2
  unsigned int v25; // [sp+14h] [bp-1810h]
  unsigned int v26; // [sp+18h] [bp-180Ch] BYREF
  __int16 v27; // [sp+1Ch] [bp-1808h]
  char v28; // [sp+1Eh] [bp-1806h]
  char v29; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v31[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v21) = 26892;
    HIWORD(v21) = (unsigned int)"write" >> 16;
    snprintf(s, 0x800u, v21, a1);
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 55;
LABEL_13:
    LOWORD(v23) = 26932;
    HIWORD(v23) = (unsigned int)"ram, input chain is %d" >> 16;
    v17 = -2147482111;
    zlog(g_zc, v23, 175, "tsensor_open", 12, v22, 100, v31);
    return v17;
  }
  if ( a3 > 7 )
  {
    LOWORD(v24) = 27108;
    HIWORD(v24) = (unsigned int)"ensor/bitmain_tsensor.c" >> 16;
    snprintf(s, 0x800u, v24, a3);
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 56;
    goto LABEL_13;
  }
  if ( !a3 )
    return 0;
  v25 = 68 * a1;
  v5 = a2;
  v6 = &a2[(unsigned __int8)(a3 - 1) + 1];
  v7 = &byte_1B37E0[68 * a1];
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = sub_C98D0(a1, *v5);
      v9 = v5++;
      if ( v8 == -2147482112 )
        break;
      if ( v5 == v6 )
        return 0;
    }
    v10 = *(v5 - 1);
    v26 = a1;
    v11 = v10 + a1;
    v27 = 0;
    v28 = (v11 >> 3) & 0xF;
    v29 = v11 & 7;
    v12 = iic_init((int)&v26);
    v13 = v12;
    if ( v12 < 0 )
      break;
    v14 = *v7;
    *v7 = v14 + 1;
    v15 = *(v5 - 1);
    v16 = &byte_1B37E0[8 * v14 + v25];
    *((_DWORD *)v16 + 2) = v12;
    v16[4] = v15;
    if ( v5 == v6 )
      return 0;
  }
  LOWORD(v19) = 27148;
  HIWORD(v19) = (unsigned int)"ram, input num is %d" >> 16;
  snprintf(s, 0x800u, v19, a1, *v9);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v20) = 26932;
  HIWORD(v20) = (unsigned int)"ram, input chain is %d" >> 16;
  zlog(g_zc, v20, 175, "tsensor_open", 12, 75, 100, v31);
  return v13;
}
