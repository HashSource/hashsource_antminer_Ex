int __fastcall sub_7B91C(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v7; // r7
  int v11; // r6
  int v13; // r3
  int v14; // r12
  const char *v15; // r1
  int v16; // r7
  char v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r0
  _BYTE v26[32]; // [sp+30h] [bp-1020h] BYREF
  _BYTE v27[4080]; // [sp+50h] [bp-1000h] BYREF

  v7 = *(_DWORD *)(a1 + 776);
  v11 = *(_BYTE *)(a2 + 10) & 0x7F;
  v13 = *(_DWORD *)(v7 + 8 * v11);
  v14 = *(_DWORD *)(v7 + 8 * v11 + 4);
  v15 = (const char *)(v7 + 32 * (v11 + 32));
  v16 = v7 + (v11 << 8);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy((char *)(a3 + 16), v15);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(v16 + 5241);
  *(_BYTE *)(a3 + 53) = *(_BYTE *)(v16 + 5240);
  *(_BYTE *)(a3 + 54) = *(_BYTE *)(a2 + 4);
  *(_BYTE *)(a3 + 55) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 5);
  v17 = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 57) = v11;
  *(_BYTE *)(a3 + 56) = v17;
  v18 = sub_1217D0(*(unsigned __int8 *)(a2 + 3), *(_DWORD *)(a1 + 388));
  if ( v18 >= *(_DWORD *)(a1 + 292) )
  {
    v25 = rand();
    sub_121CDC(v25, *(_DWORD *)(a1 + 292));
    *a6 = v19;
  }
  else
  {
    v19 = v18;
    *a6 = v18;
  }
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = *(_BYTE *)(a2 + 8) & 0x3F;
  v20 = BM_CRC5(a2 + 2, 75);
  if ( v20 != (*(_BYTE *)(a2 + 11) & 0x1F) && *(_BYTE *)(a1 + 218) )
  {
    v22 = *(_DWORD *)(a1 + 212);
    v23 = dword_176F18[v22];
    dword_176F18[v22] = v23 + 1;
    if ( v23 <= 9 )
    {
      V_LOCK(v20);
      V_INT((int)v26, "chain");
      v24 = logfmt_raw((int)v27, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        170,
        "packet_2_nonce_hns",
        18,
        218,
        40,
        v27);
    }
    return 11;
  }
  else
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
}
