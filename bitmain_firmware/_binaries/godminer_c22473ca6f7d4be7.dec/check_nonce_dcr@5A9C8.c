int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r5
  int v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r3
  int *v12; // r9
  int v13; // r11
  int v14; // r10
  _BYTE *v15; // r5
  unsigned __int8 *v16; // r4
  int v17; // r12
  int v18; // t1
  int v19; // t1
  unsigned int v20; // r2
  unsigned int v21; // r3
  int v23; // r3
  int v24; // r1
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  int v28; // r3
  _DWORD *v29; // r3
  int v30; // r1
  unsigned int v31; // [sp+14h] [bp-10E0h]
  _BYTE v32[32]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v34[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v2 *= 180;
  v31 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v6 = *(_DWORD *)(a2 + 52);
  s[35] = *(_DWORD *)(a2 + 48);
  v7 = *(_DWORD *)(a2 + 56);
  v8 = *(_DWORD *)(a2 + 60);
  s[36] = v6;
  s[37] = v7;
  s[38] = v8;
  s[44] = *(_DWORD *)(v4 + v2 + 5291);
  decred_hash((int)v32, (char *)s);
  v9 = target_to_diff_dcr((int)v32);
  v10 = v9;
  if ( v9 <= 0x1F )
  {
    V_LOCK();
    LOWORD(v28) = 32284;
    HIWORD(v28) = (unsigned int)"overclock_update_dash" >> 16;
    logfmt_raw(v34, 0x1000u, 0, v28, v10, *(unsigned __int8 *)(a2 + 64), 32);
    V_UNLOCK();
    LOWORD(v29) = -14512;
    HIWORD(v29) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v30) = 32128;
    HIWORD(v30) = (unsigned int)"hrate_dash" >> 16;
    zlog(*v29, v30, 154, "check_nonce_dcr", 15, 357, 20, v34);
    return 2;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 64);
    if ( v11 == v9 )
    {
      if ( v31 <= v11 )
      {
        LOWORD(v12) = -14512;
        LOWORD(v13) = 32344;
        LOWORD(v14) = 32128;
        v15 = s;
        HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
        v16 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
        do
        {
          V_LOCK();
          v18 = (unsigned __int8)*--v15;
          v17 = v18;
          HIWORD(v13) = (unsigned int)"n_pic_DASH" >> 16;
          v19 = *--v16;
          logfmt_raw(v34, 0x1000u, 0, v13, v17, v19);
          V_UNLOCK();
          HIWORD(v14) = (unsigned int)"hrate_dash" >> 16;
          zlog(*v12, v14, 154, "fulltest_dcr", 12, 306, 60, v34);
          v20 = (unsigned __int8)*v15;
          v21 = *v16;
          if ( v20 < v21 )
            break;
          if ( v20 > v21 )
            goto LABEL_10;
        }
        while ( v32 != v15 );
        return 0;
      }
      else
      {
        v12 = &g_zc;
LABEL_10:
        V_LOCK();
        LOWORD(v23) = 27312;
        HIWORD(v23) = (unsigned int)&unk_135DE0 >> 16;
        logfmt_raw(v34, 0x1000u, 0, v23, *(unsigned __int8 *)(a2 + 64), v31);
        V_UNLOCK();
        LOWORD(v24) = 32128;
        HIWORD(v24) = (unsigned int)"hrate_dash" >> 16;
        zlog(*v12, v24, 154, "check_nonce_dcr", 15, 367, 20, v34);
        return 1;
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v25) = 27268;
      HIWORD(v25) = (unsigned int)&unk_135DB4 >> 16;
      logfmt_raw(v34, 0x1000u, 0, v25, v10, *(unsigned __int8 *)(a2 + 64), v31);
      V_UNLOCK();
      LOWORD(v26) = -14512;
      HIWORD(v26) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v27) = 32128;
      HIWORD(v27) = (unsigned int)"hrate_dash" >> 16;
      zlog(*v26, v27, 154, "check_nonce_dcr", 15, 362, 20, v34);
      return 3;
    }
  }
}
