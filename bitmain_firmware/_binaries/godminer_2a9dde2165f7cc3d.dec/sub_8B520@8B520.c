int __fastcall sub_8B520(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v7; // r8
  int v12; // r11
  _DWORD *v13; // r7
  int v14; // r3
  int v15; // lr
  char v16; // r3
  char v17; // r3
  int v18; // r0
  int v19; // r2
  int v21; // r2
  __int64 v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r1
  _BYTE v26[32]; // [sp+30h] [bp-1024h] BYREF
  _BYTE v27[4080]; // [sp+50h] [bp-1004h] BYREF

  v7 = *(_DWORD *)(a1 + 784);
  v12 = *(_BYTE *)(a2 + 9) & 0x7F;
  v13 = (_DWORD *)(a3 + 80);
  v14 = *(_DWORD *)(v7 + 8 * v12);
  v15 = *(_DWORD *)(v7 + 8 * v12 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy((char *)(a3 + 16), (const char *)(v7 + ((v12 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 3);
  *(_BYTE *)(a3 + 84) = *(_BYTE *)(a2 + 7);
  v16 = *(_BYTE *)(v7 + 3 * v12 + 45826);
  *(_WORD *)(a3 + 85) = *(_WORD *)(v7 + 3 * v12 + 45824);
  *(_BYTE *)(a3 + 87) = v16;
  v17 = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 89) = v12;
  *(_BYTE *)(a3 + 88) = v17;
  v18 = sub_12DDD8(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 396));
  if ( v18 >= *(_DWORD *)(a1 + 304) )
  {
    v24 = rand();
    sub_12E2E4(v24, *(_DWORD *)(a1 + 304));
    v18 = v25;
  }
  *a6 = v18;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 7) & 3)
                       + 4 * ((unsigned __int8)(*(_BYTE *)(a2 + 6) << 6) | (*(unsigned __int8 *)(a2 + 7) >> 2));
  if ( BM_CRC5(a2 + 2, 67) != (*(_BYTE *)(a2 + 10) & 0x1F) && *(_BYTE *)(a1 + 230) )
  {
    v21 = dword_18D334;
    v22 = 274877907LL * (unsigned int)dword_18D334++;
    if ( v21 == 1000 * (HIDWORD(v22) >> 6) )
    {
      V_LOCK(v22);
      V_INT((int)v26, "chain");
      v23 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v23);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        174,
        "packet_2_nonce_kda",
        18,
        223,
        100,
        v27);
    }
    return 11;
  }
  else
  {
    v19 = v13[1];
    *a5 = *v13;
    a5[1] = v19;
    *a4 = 1;
    return 0;
  }
}
