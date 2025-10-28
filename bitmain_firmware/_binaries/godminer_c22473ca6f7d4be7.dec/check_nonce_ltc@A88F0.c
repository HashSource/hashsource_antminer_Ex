int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v3; // r1
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r4
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // t1
  unsigned int v14; // t1
  bool v15; // cf
  _DWORD *v17; // r3
  int v18; // r2
  int v19; // r1
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  int v23; // r3
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // r3
  int v27[8]; // [sp+10h] [bp-1070h] BYREF
  _DWORD dest[20]; // [sp+30h] [bp-1050h] BYREF
  char v29[4096]; // [sp+80h] [bp-1000h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  dest[19] = bswap32(*(_DWORD *)(a2 + 80));
  scrypt_regenhash(v27, (int)dest);
  v6 = target_to_diff_ltc((int)v27);
  v7 = v6;
  if ( v6 <= 0x1A )
  {
    V_LOCK();
    LOWORD(v23) = -14348;
    HIWORD(v23) = (unsigned int)&unk_13BB24 >> 16;
    logfmt_raw(v29, 0x1000u, 0, v23, v7, *(unsigned __int8 *)(a2 + 84), 27);
    V_UNLOCK();
    LOWORD(v24) = -14512;
    HIWORD(v24) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v25) = -14544;
    HIWORD(v25) = (unsigned int)&unk_13BA60 >> 16;
    zlog(*v24, v25, 154, "check_nonce_ltc", 15, 461, 20, v29);
    return 2;
  }
  v8 = *(unsigned __int8 *)(a2 + 84);
  if ( (v8 & 0x20) != 0 )
  {
    if ( v6 > 0x2F )
      goto LABEL_4;
    V_LOCK();
    logfmt_raw(v29, 0x1000u, 0, "calculate diff %02x, but ans diff %02x (bit5 is 1)", v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    LOWORD(v17) = -14512;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    v18 = 467;
LABEL_13:
    LOWORD(v19) = -14544;
    HIWORD(v19) = (unsigned int)&unk_13BA60 >> 16;
    zlog(*v17, v19, 154, "check_nonce_ltc", 15, v18, 20, v29);
    return 3;
  }
  if ( v6 != v8 + 16 )
  {
    V_LOCK();
    LOWORD(v26) = -14220;
    HIWORD(v26) = (unsigned int)&unk_13BBA4 >> 16;
    logfmt_raw(v29, 0x1000u, 0, v26, v7, *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    LOWORD(v17) = -14512;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    v18 = 472;
    goto LABEL_13;
  }
LABEL_4:
  if ( v5 <= v6 )
  {
    v9 = dest;
    v10 = v4 + 32 * (*(unsigned __int8 *)(a2 + 85) + 624);
    v11 = v10 + 32;
    while ( 1 )
    {
      v13 = *--v9;
      v12 = v13;
      v14 = *(_DWORD *)(v11 - 4);
      v11 -= 4;
      v15 = v12 >= v14;
      if ( v12 > v14 )
        break;
      if ( !v15 || v10 == v11 )
        return 0;
    }
  }
  V_LOCK();
  LOWORD(v20) = 27312;
  HIWORD(v20) = (unsigned int)&unk_135DE0 >> 16;
  logfmt_raw(v29, 0x1000u, 0, v20, v7, v5);
  V_UNLOCK();
  LOWORD(v21) = -14512;
  HIWORD(v21) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v22) = -14544;
  HIWORD(v22) = (unsigned int)&unk_13BA60 >> 16;
  zlog(*v21, v22, 154, "check_nonce_ltc", 15, 478, 20, v29);
  return 1;
}
