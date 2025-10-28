int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r6
  int v4; // r3
  const void *v5; // r5
  unsigned int v6; // r7
  const char *v7; // r0
  char v8; // r12
  int v9; // r3
  const char *v10; // r0
  const char *v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r3
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // r3
  _DWORD *v19; // r3
  int v20; // r1
  int v21; // r3
  _DWORD *v22; // r3
  int v23; // r1
  _BYTE v24[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  char v26[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 624);
  v4 = *(unsigned __int8 *)(a2 + 57);
  v5 = (const void *)(v2 + ((v4 + 20) << 8));
  v6 = *(_DWORD *)(v2 + 4 * (v4 + 9472));
  memcpy(dest, v5, sizeof(dest));
  LOWORD(v7) = -17268;
  v8 = *(_BYTE *)(a2 + 54);
  v9 = *(_DWORD *)(a2 + 48);
  HIWORD(v7) = (unsigned int)&unk_13AFBC >> 16;
  BYTE2(dest[62]) = *(_BYTE *)(a2 + 55);
  HIBYTE(dest[62]) = v8;
  dest[63] = v9;
  sub_A4FF0(v7, (int)v5, 256);
  LOWORD(v10) = -17260;
  HIWORD(v10) = (unsigned int)&unk_13AFC4 >> 16;
  sub_A4FF0(v10, (int)dest, 256);
  hns_hash((int)dest);
  sub_A4FF0("target", v2 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200), 32);
  LOWORD(v11) = -17252;
  HIWORD(v11) = (unsigned int)&unk_13AFCC >> 16;
  sub_A4FF0(v11, (int)v24, 32);
  v12 = target_to_diff_byte_hns((int)v24);
  v13 = v12;
  if ( v12 <= 0x19 )
  {
    V_LOCK();
    LOWORD(v21) = -17244;
    HIWORD(v21) = (unsigned int)&unk_13AFD4 >> 16;
    logfmt_raw(v26, 0x1000u, 0, v21, v13, *(unsigned __int8 *)(a2 + 56), 26);
    V_UNLOCK();
    LOWORD(v22) = -14512;
    HIWORD(v22) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v23) = -17424;
    HIWORD(v23) = (unsigned int)&unk_13AF20 >> 16;
    zlog(*v22, v23, 154, "check_nonce_hns", 15, 365, 20, v26);
    return 2;
  }
  else
  {
    v14 = *(unsigned __int8 *)(a2 + 56);
    if ( v14 == v12 )
    {
      if ( v6 > v14 )
      {
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 56), v6);
        V_UNLOCK();
        LOWORD(v16) = -14512;
        HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v17) = -17424;
        HIWORD(v17) = (unsigned int)&unk_13AF20 >> 16;
        zlog(*v16, v17, 154, "check_nonce_hns", 15, 375, 20, v26);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v18) = 27268;
      HIWORD(v18) = (unsigned int)&unk_135DB4 >> 16;
      logfmt_raw(v26, 0x1000u, 0, v18, v13, *(unsigned __int8 *)(a2 + 56), v6);
      V_UNLOCK();
      LOWORD(v19) = -14512;
      HIWORD(v19) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v20) = -17424;
      HIWORD(v20) = (unsigned int)&unk_13AF20 >> 16;
      zlog(*v19, v20, 154, "check_nonce_hns", 15, 370, 20, v26);
      return 3;
    }
  }
}
