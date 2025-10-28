int __fastcall check_nonce_dash(int a1, int a2)
{
  int v2; // r9
  int v4; // r4
  unsigned int v5; // r7
  int v6; // r12
  char *v7; // r2
  char *v8; // r3
  char v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r4
  int v12; // r3
  int v13; // r1
  unsigned int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r1
  _BYTE v19[32]; // [sp+18h] [bp-1070h] BYREF
  _DWORD v20[20]; // [sp+38h] [bp-1050h] BYREF
  char v21[4096]; // [sp+88h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 824);
  v4 = *(unsigned __int8 *)(a2 + 53);
  v5 = *(_DWORD *)(v2 + 4 * (v4 + 3840));
  ++dword_1A2ECC;
  v6 = *(_DWORD *)(v2 + 12 * v4 + 19968);
  *(_DWORD *)(a2 + 58) = *(_DWORD *)(v2 + 12 * v4 + 19972);
  *(_DWORD *)(a2 + 54) = v6;
  memcpy(v20, (const void *)(v2 + 80 * v4 + 5120), sizeof(v20));
  v7 = (char *)v20;
  v8 = (char *)(v2 + 80 * v4 + 5120);
  do
  {
    v9 = *v8;
    v8 += 4;
    v7[3] = v9;
    v7[2] = *(v8 - 3);
    v7[1] = *(v8 - 2);
    *v7 = *(v8 - 1);
    v7 += 4;
  }
  while ( v7 != v21 );
  v20[19] = *(_DWORD *)(a2 + 48);
  Xhash(v19, v20);
  v10 = target_to_diff_dash((int)v19);
  v11 = v10;
  if ( v10 <= 0x22 )
  {
    ++dword_1A2ED0;
    V_LOCK();
    LOWORD(v12) = -22772;
    HIWORD(v12) = (unsigned int)"obid %s, work count %d" >> 16;
    logfmt_raw(v21, 0x1000u, 0, v12, v11, *(unsigned __int8 *)(a2 + 52), 35);
    V_UNLOCK();
    LOWORD(v13) = -22992;
    HIWORD(v13) = (unsigned int)"__custom_data init %p" >> 16;
    zlog(g_zc, v13, 176, "check_nonce_dash", 16, 790, 20, v21);
    return 2;
  }
  v15 = *(unsigned __int8 *)(a2 + 52);
  if ( v15 == v10 )
  {
    if ( v5 <= v15 )
      return 0;
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v5);
    V_UNLOCK();
    LOWORD(v16) = -22992;
    HIWORD(v16) = (unsigned int)"__custom_data init %p" >> 16;
    zlog(g_zc, v16, 176, "check_nonce_dash", 16, 823, 20, v21);
    return 1;
  }
  else
  {
    if ( v5 <= v10 )
      return 0;
    V_LOCK();
    LOWORD(v17) = -25236;
    HIWORD(v17) = (unsigned int)"ICKET_MASK_CKB_2042 %d" >> 16;
    logfmt_raw(v21, 0x1000u, 0, v17, v11, *(unsigned __int8 *)(a2 + 52), v5);
    V_UNLOCK();
    LOWORD(v18) = -22992;
    HIWORD(v18) = (unsigned int)"__custom_data init %p" >> 16;
    zlog(g_zc, v18, 176, "check_nonce_dash", 16, 800, 20, v21);
    return 3;
  }
}
