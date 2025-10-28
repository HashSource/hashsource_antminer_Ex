int __fastcall sub_64108(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v8; // r4
  int v12; // r9
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // r6
  int v16; // r12
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r12
  int v21; // r1
  int v22; // r2
  int v24; // r2
  __int64 v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r1
  _BYTE v29[32]; // [sp+30h] [bp-1024h] BYREF
  _BYTE v30[4080]; // [sp+50h] [bp-1004h] BYREF

  v8 = *(_DWORD *)(a1 + 784);
  v12 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v8 + 8 * v12);
  v14 = *(_DWORD *)(v8 + 8 * v12 + 4);
  v15 = (_DWORD *)(a3 + 48);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v8 + 32 * (v12 + 32)));
  v16 = *(_DWORD *)(v8 + 48 * v12 + 5156);
  v17 = *(_DWORD *)(v8 + 48 * v12 + 5160);
  v18 = *(_DWORD *)(v8 + 48 * v12 + 5164);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v8 + 48 * v12 + 5152);
  *(_DWORD *)(a3 + 52) = v16;
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  LOBYTE(v18) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = v12;
  *(_BYTE *)(a3 + 64) = v18;
  v19 = sub_12DDE8(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 396));
  if ( v19 >= *(_DWORD *)(a1 + 304) )
  {
    v27 = rand();
    sub_12E2F4(v27, *(_DWORD *)(a1 + 304));
    v19 = v28;
  }
  *a6 = v19;
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 3)
                       + 4 * ((*(_BYTE *)(a2 + 7) << 6) & 0x40 | (*(unsigned __int8 *)(a2 + 8) >> 2));
  if ( BM_CRC5(a2 + 2, 75) != (*(_BYTE *)(a2 + 11) & 0x1F) && *(_BYTE *)(a1 + 230) )
  {
    v24 = dword_18521C;
    v25 = 274877907LL * (unsigned int)dword_18521C++;
    if ( v24 == 1000 * (HIDWORD(v25) >> 6) )
    {
      V_LOCK(v25);
      V_INT((int)v29, "chain");
      v26 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        174,
        "packet_2_nonce_ckb",
        18,
        207,
        100,
        v30);
    }
    return 11;
  }
  else
  {
    v20 = v15[1];
    v21 = v15[2];
    v22 = v15[3];
    *a5 = *v15;
    a5[1] = v20;
    a5[2] = v21;
    a5[3] = v22;
    *a4 = 1;
    return 0;
  }
}
