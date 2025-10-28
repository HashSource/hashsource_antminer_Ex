int __fastcall check_nonce_eth(int a1, int a2)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v5; // t1
  int v6; // r1
  unsigned int v7; // r9
  unsigned int v8; // r5
  int v9; // r3
  int v10; // r1
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // [sp+10h] [bp+0h]
  int v17; // [sp+14h] [bp+4h]
  int v18; // [sp+18h] [bp+8h]
  int v19; // [sp+1Ch] [bp+Ch]
  int v20; // [sp+20h] [bp+10h]
  int v21; // [sp+24h] [bp+14h]
  int v22; // [sp+28h] [bp+18h]
  int v23; // [sp+2Ch] [bp+1Ch]
  int v24; // [sp+30h] [bp+20h]
  int v25; // [sp+34h] [bp+24h]
  int v26; // [sp+38h] [bp+28h]
  int v27; // [sp+3Ch] [bp+2Ch]
  int v28; // [sp+40h] [bp+30h]
  int v29; // [sp+44h] [bp+34h]
  int v30; // [sp+48h] [bp+38h]
  int v31; // [sp+4Ch] [bp+3Ch]
  int v32; // [sp+50h] [bp+40h]
  int v33; // [sp+54h] [bp+44h]
  _BYTE v34[32]; // [sp+58h] [bp+48h] BYREF
  _DWORD v35[1025]; // [sp+78h] [bp+68h] BYREF

  v3 = *(_DWORD *)(a1 + 624);
  v18 = *(_DWORD *)(a2 + 34);
  v19 = *(_DWORD *)(a2 + 38);
  v20 = *(_DWORD *)(a2 + 42);
  v21 = *(_DWORD *)(a2 + 46);
  v22 = *(_DWORD *)(a2 + 50);
  v23 = *(_DWORD *)(a2 + 54);
  v24 = *(_DWORD *)(a2 + 58);
  v25 = *(_DWORD *)(a2 + 62);
  v26 = *(_DWORD *)(a2 + 98);
  v27 = *(_DWORD *)(a2 + 102);
  v28 = *(_DWORD *)(a2 + 106);
  v29 = *(_DWORD *)(a2 + 110);
  v30 = *(_DWORD *)(a2 + 114);
  v31 = *(_DWORD *)(a2 + 118);
  v32 = *(_DWORD *)(a2 + 122);
  v33 = *(_DWORD *)(a2 + 126);
  v5 = *(_DWORD *)(a2 + 26);
  v6 = *(_DWORD *)(a2 + 30);
  *v2 = v5;
  v2[1] = v6;
  v35[0] = v18;
  v35[1] = v19;
  v35[2] = v20;
  v35[3] = v21;
  v35[4] = v22;
  v35[5] = v23;
  v35[6] = v24;
  v35[7] = v25;
  v35[8] = v16;
  v35[9] = v17;
  eth_sha3_512((int)v35, 0x40u, (int)v35, 0x28u);
  v35[16] = v26;
  v35[17] = v27;
  v35[18] = v28;
  v35[19] = v29;
  v35[20] = v30;
  v35[21] = v31;
  v35[22] = v32;
  v35[23] = v33;
  eth_sha3_256((int)v34, 0x20u, (int)v35, 0x60u);
  v7 = target_to_diff_eth(v34);
  v8 = *(unsigned __int8 *)(v3 + *(unsigned __int8 *)(a2 + 16) + 34816);
  V_LOCK();
  LOWORD(v9) = -25356;
  HIWORD(v9) = (unsigned int)"config_rxifrx_sigdet_ovr" >> 16;
  logfmt_raw((char *)v35, 0x1000u, 0, v9, v7);
  V_UNLOCK();
  LOWORD(v10) = -25512;
  HIWORD(v10) = (unsigned int)"one" >> 16;
  zlog(g_zc, v10, 154, "check_nonce_eth", 15, 12482, 20, v35);
  if ( v7 <= 0x1C )
  {
    V_LOCK();
    LOWORD(v14) = -25328;
    HIWORD(v14) = (unsigned int)"config_rxifrx_sigdet_ovr" >> 16;
    logfmt_raw((char *)v35, 0x1000u, 0, v14, v7, *(unsigned __int8 *)(a2 + 17), 29);
    V_UNLOCK();
    LOWORD(v15) = -25512;
    HIWORD(v15) = (unsigned int)"one" >> 16;
    zlog(g_zc, v15, 154, "check_nonce_eth", 15, 12512, 20, v35);
    return 2;
  }
  else if ( v7 < v8 )
  {
    V_LOCK();
    LOWORD(v12) = 27312;
    HIWORD(v12) = (unsigned int)&unk_135DE0 >> 16;
    logfmt_raw((char *)v35, 0x1000u, 0, v12, v7, v8);
    V_UNLOCK();
    LOWORD(v13) = -25512;
    HIWORD(v13) = (unsigned int)"one" >> 16;
    zlog(g_zc, v13, 154, "check_nonce_eth", 15, 12517, 20, v35);
    return 1;
  }
  else
  {
    return 0;
  }
}
